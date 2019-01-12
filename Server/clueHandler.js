const {fork} = require('child_process');
const fs = require('fs');
const locationHandler = fork('locationHandler.js');
const screenshotHandler = fork('screenshotHandler.js');
PrepareClueSending();
var locationCount;
var screenshotCount;
var referenceCodeHandler = require('./referenceCodeHandler');
var dbHandler = require('./dbHandler');
var s3Handler = require('./s3Handler')
var rimraf = require("rimraf");

process.on('message', (type, socket) =>
{
	if (type == "socket")
	{
		if (socket)
		{
			socket.on('data', function (msg) {
				if(msg + "" == "sending-locations")
				{
					locationHandler.send('socket', socket);
					socket.locationCount = 0;
				}
			});
		}
	}
	else if(socket != "socket")
	{
		console.log(socket);
	}
});

locationHandler.on('message', (type, socket) =>
{
	if (type == "socket")
	{
		if (socket)
		{
			socket.on('data', function (msg) {
				if(msg + "" == "sending-screenshots")
				{
					screenshotHandler.send('socket', socket);
					socket.screenshotCount = 0;
				}
			});
			socket.write("ready-for-next-segment");
		}
	}
});

screenshotHandler.on('message', (type, socket) =>
{
	if (type == "socket")
	{
		if (socket)
		{
			socket.on('data', function (msg) {
				if(msg == "end-clue-sending")
				{
					var locations = [];
					var screenshots = [];
					var locationsCount = 0;
					var screenshotsCount = 0;
					while(fs.existsSync(__dirname + '/' + locationHandler.pid + "/location" + locationsCount))
					{
						var data = fs.readFileSync(__dirname + '/' + locationHandler.pid + "/location" + locationsCount);
						locations.push(data + "");
						locationsCount++;
					}
					while(fs.existsSync(__dirname + '/' + screenshotHandler.pid + "/screenshot" + screenshotsCount))
					{
						var path = __dirname + '/' + screenshotHandler.pid + "/screenshot" + screenshotsCount;
						screenshots.push(path);
						screenshotsCount++;
					}
					if(locationsCount == screenshotsCount)
					{
						StoreClues(locations, screenshots, socket);
					}
					else
					{
						socket.write("clue-count-mismatch");
						EndClueSendingError(socket);
					}
				}
				else
				{
					socket.write("incorrect-connection-format");
					EndClueSendingError(socket);
				}
			});
			socket.write("ready-for-next-segment");
		}
	}
});

locationHandler.on('exit', function (code, signal) {
	EndClueSendingError(null);
});

screenshotHandler.on('exit', function (code, signal) {
	EndClueSendingError(null);
});

function StoreClues(locations, screenshots, socket)
{
	var getClueReferenceCode = referenceCodeHandler.getClueReferenceCode(function(output) {
		var reference = output;
		var storeClues = dbHandler.storeClues(locations, reference, function(output) {
			var references = output;
			s3Handler.storeScreenShots(screenshots, references, function()
			{
				console.log("A clue has been uploaded with reference: " + reference);
				socket.write("clue-saved-correctly-with-reference: " + reference);
				EndClueSending(socket);
			});
		});
	});
}

function PrepareClueSending()
{
	console.log("Created clue handler " + process.pid);
	console.log("The clue handler " + process.pid + " is handled by location handler " + locationHandler.pid);
	console.log("Creating directory to store locations: " + __dirname + '/' + locationHandler.pid);
	fs.mkdir(__dirname + '/' + locationHandler.pid, { recursive: true }, (err) => {
		if (err) throw err;
	});
	console.log("The clue handler " + process.pid + " is handled by screenshot handler " + screenshotHandler.pid);
	console.log("Creating directory to store screenshots: " + __dirname + '/' + screenshotHandler.pid);
	fs.mkdir(__dirname + '/' + screenshotHandler.pid, { recursive: true }, (err) => {
		if (err) throw err;
	});
}

function EndClueSending(socket)
{
	rimraf.sync(__dirname + '/' + locationHandler.pid);
	rimraf.sync(__dirname + '/' + screenshotHandler.pid);
	console.log("Removed local locations files from: " + __dirname + '/' + locationHandler.pid);
	console.log("Removed local screenshots files from: " + __dirname + '/' + screenshotHandler.pid);
	console.log("Clue handling ended!!!");
	locationHandler.kill();
	screenshotHandler.kill();
	process.send('socket', socket);
}

function EndClueSendingError(socket)
{
	rimraf.sync(__dirname + '/' + locationHandler.pid);
	rimraf.sync(__dirname + '/' + screenshotHandler.pid);
	console.log("Removed local locations files from: " + __dirname + '/' + locationHandler.pid);
	console.log("Removed local screenshots files from: " + __dirname + '/' + screenshotHandler.pid);
	locationHandler.kill();
	screenshotHandler.kill();
	console.log("Clue handling terminated unexpectedly!");
	process.send('socket', socket);
}
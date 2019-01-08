const {fork} = require('child_process');
const locationHandler = fork('locationHandler.js');
const screenshotHandler = fork('screenshotHandler.js');
var locationCount;
var screenshotCount;

var fs = require('fs');
var rimraf = require("rimraf");

console.log("Created clue handler " + process.pid);
console.log("The clue handler " + process.pid + " is handled by location handler " + locationHandler.pid);
console.log("The clue handler " + process.pid + " is handled by screenshot handler " + screenshotHandler.pid);

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
					var data = fs.readFileSync(__dirname + '/' + screenshotHandler.pid + "/screenshot" + screenshotsCount);
					if(data.length < 350000)
					{
						screenshots.push(data);
						screenshotsCount++;
					}
				}
				rimraf.sync(__dirname + '/' + locationHandler.pid);
				rimraf.sync(__dirname + '/' + screenshotHandler.pid);
				locationHandler.kill();
				screenshotHandler.kill();
				if(locationsCount == screenshotsCount)
				{

				}
				//Send the socket back to server, the clue is valid if it is stored.

				process.send('socket', socket);
			});
			socket.write("ready-for-next-segment");
		}
	}
});
const {fork} = require('child_process');

const locationHandler = fork('locationHandler.js');
const screenshotHandler = fork('screenshotHandler.js');
var locationCount;
var screenshotCount;

process.on('message', (type, socket) =>
{
	if (type == 'socket')
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
});

locationHandler.on('message', (type, socket) =>
{
	if (type == 'socket')
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
	if (type == 'socket')
	{
		if (socket)
		{
			socket.on('data', function (msg) {
				process.send('socket', socket);
				locationHandler.kill();
				screenshotHandler.kill();
			});
			socket.write("ready-for-next-segment");
		}
	}
});
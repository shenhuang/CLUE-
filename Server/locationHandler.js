var fs = require('fs');

var count = 0;

process.on('message', (type, socket) =>
{
	if (type == "socket")
	{
		if (socket)
		{
			console.log("Storing locations into: " + __dirname + '/' + process.pid);
			socket.on('data', function (msg) {
				if(msg + "" == "end-location-sending")
				{
					process.send('socket', socket);
				}
				else
				{
					fs.writeFile(__dirname + '/' + process.pid + "/location" + count, msg + "", (err) => {
						if (err) throw err;
					});
					count++;
					socket.write("ready-for-next-segment");
				}
			});
			socket.write("ready-for-next-segment");
		}
	}
});
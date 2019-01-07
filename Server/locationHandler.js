var fs = require('fs'); // Will be replaced by Cloud SQL.

var count = 0;

process.on('message', (type, socket) =>
{
	if (type == 'socket')
	{
		if (socket)
		{
			fs.mkdir(__dirname + '/LOCATIONS', { recursive: true }, (err) => {
				if (err) throw err;
			});
			socket.on('data', function (msg) {
				if(msg + "" == "end-location-sending")
				{
					process.send('socket', socket);
				}
				else
				{
					fs.writeFile(__dirname + "/LOCATIONS/location" + count, msg + "", (err) => {
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
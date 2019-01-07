var fs = require('fs'); // Will be replaced by Buckets.

var count = 0;
var buffer;

process.on('message', (type, socket) =>
{
	if (type == 'socket')
	{
		if (socket)
		{
			fs.mkdir(__dirname + '/SCREENSHOTS', { recursive: true }, (err) => {
				if (err) throw err;
			});			socket.on('data', function (msg) {
				if(msg + "" == "end-screenshot-sending")
				{
					process.send('socket', socket);
				}
				else
				{
					if(msg + "" == "long-byte-start")
					{
						buffer = new Buffer.from("");
						socket.write("ready-for-next-segment");
					}
					else if(msg + "" == "long-byte-end")
					{
						fs.writeFile(__dirname + "/SCREENSHOTS/screenshot" + count, buffer, (err) => {
							if (err) throw err;
						});
						count++;
						socket.write("ready-for-next-segment");
					}
					else
					{
						buffer = Buffer.concat([buffer, Buffer.from(msg)]);
						socket.write("ready-for-next-segment");
					}
				}
			});
			socket.write("ready-for-next-segment");
		}
	}
});
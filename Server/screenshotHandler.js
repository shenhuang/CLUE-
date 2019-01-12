var fs = require('fs');

var count = 0;
var buffer;

process.on('message', (type, socket) =>
{
	if (type == "socket")
	{
		if (socket)
		{
			console.log("Storing screenshots into: " + __dirname + '/' + process.pid);
			socket.on('data', function (msg) {
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
						fs.writeFile(__dirname + '/' + process.pid + "/screenshot" + count, buffer, (err) => {
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
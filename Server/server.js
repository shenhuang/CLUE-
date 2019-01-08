var net = require('net');
const {fork} = require('child_process');

var clients = [];
var namecardCount = 0;

const server = require('net').createServer({ pauseOnConnect: true });

server.on('connection', (socket) => {
	socket.namecard = namecardCount;
	console.log("A client has connected, assigned a namecard: " + socket.namecard);
	socket.clueHandler = fork('clueHandler.js');
	console.log("Client with namecard " + socket.namecard + " is handled by clue handler " + socket.clueHandler.pid);
	clients.push(socket);
	
	namecardCount++;
	socket.on('end', function () {
		socket.clueHandler.kill();
		var i = clients.indexOf(socket);
		clients.splice(i, 1);
	});
	socket.clueHandler.send('socket', socket);	//Handles clue sending.
	socket.clueHandler.on('message', (type, complete) =>
	{
		if (type == 'socket')
		{
			if (complete)
			{
				console.log("A clue has been uploaded, returning namecard: " + socket.namecard);
				complete.write("valid-clues-namecard: " + socket.namecard);
				complete.on('end', function () {
					socket.clueHandler.kill();
					var i = clients.indexOf(socket);
					clients.splice(i, 1);
				});
			}
		}
	});
});

server.listen(3000);

process.on('SIGINT', function () {
	for (var i in clients) {
		clients[i].destroy();
	}

	console.log('Exiting properly');
	process.exit(0);
});

console.log("Server listening to: " + server.address().port);
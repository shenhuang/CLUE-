var net = require('net');
const {fork} = require('child_process');

var clients = [];
var namecardCount = 0;

const server = require('net').createServer({ pauseOnConnect: true });

var AWS = require("aws-sdk");
AWS.config.update({
	region: "us-west-2",
	endpoint: "http://localhost:8000"
});

server.on('connection', (socket) => {
	socket.clueHandler = fork('clueHandler.js');
	socket.namecard = namecardCount;
	console.log("A client has connected, assigned a namecard: " + socket.namecard);
	namecardCount++;
	socket.on('end', function () {
		socket.clueHandler.kill();
		var i = clients.indexOf(socket);
		clients.splice(i, 1);
	});
	socket.clueHandler.send('socket', socket);	//Handles clue sending.
	clients.push(socket);
	socket.clueHandler.on('message', (type, complete) =>
	{
		if (type == 'socket')
		{
			if (complete)
			{
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
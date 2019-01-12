var fs = require('fs');
var path = require('path');
var AWS = require("aws-sdk");

AWS.config.update({
	region : "us-east-1",
	endpoint : undefined
});

var docClient = new AWS.DynamoDB.DocumentClient();

var s3 = new AWS.S3({
	apiVersion: '2006-03-01',
	accessKeyId: "AKIAI3MATQMCEVURYMCA",
	secretAccessKey: "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"
});

var bucketName = 'clue-images-bucket-2136a260-9249-4238-b1ea-8f6bdab7017c';

s3.listBuckets(function(err, data) {
	if (err) {
		console.log("Error", err);
	} else {
		console.log("Bucket List", data.Buckets);
	}
});

module.exports = {

	storeScreenShots : function(paths, references, retfunction)
	{
		var counter = 0;
		for(i = 0; i < paths.length; i++)
		{
			var fileStream = fs.createReadStream(paths[i]);
			fileStream.on('error', function(err) {
				console.log('File Error', err);
			});
			var params = {
				Bucket : bucketName,
				Key : references[i] + "",
				Body : fileStream
			};
			s3.upload(params, function(err, data) {
				if (err) throw err
				console.log("File uploaded successfully at: " + data.Location);
				counter++;
				if(counter >= paths.length)
				{
					retfunction();
				}
			});
		}
	},

	getScreenshot : function(path, reference, retfunction)
	{
		file = fs.createWriteStream(path);
		var params = {
			Bucket : bucketName,
			Key : reference + ""
		}
		s3.getObject(params, (err, data) => {
		if (err) console.error(err)
			fs.writeFileSync(path, data.Body);
			console.log(`${path} used to store files downloaded from S3!`)
			retfunction(path);
		});
	}

}
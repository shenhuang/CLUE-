var referenceCodeHandler = require('./referenceCodeHandler');
var AWS = require("aws-sdk");

AWS.config.update({
	region: "us-west-2",
	endpoint: "http://localhost:8000"
});

var docClient = new AWS.DynamoDB.DocumentClient();

var s3 = new AWS.S3({
	region: "us-east-1",
	endpoint: "",
	apiVersion: '2006-03-01',
	accessKeyId: "AKIAI3MATQMCEVURYMCA",
	secretAccessKey: "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"
});

var bucketName = "clue-images-bucket-";
var streamBuffers = require('stream-buffers');

module.exports = {

	storeClues : function(locations, reference, retfunction)
	{
		var table = "CLUES";
		var getScreenshotReferenceCodes = referenceCodeHandler.getScreenshotReferenceCodes(locations.length, function(output) {
			var references = output;
			var name = "Default Clue Name"
			var params = {
				TableName : table,
				Item : {
					"reference" : reference,
					"name" : name,
					"clues" : {
						"locations" : locations,
						"screenshots" : references
					}
				},
				ReturnValues : "ALL_OLD"
			}
			docClient.put(params, function(err, data) {
				if (err) {
					console.error("Unable to add item. Error JSON:", JSON.stringify(err, null, 2));
				} else {
					console.log("Existing items:", JSON.stringify(data, null, 2));
					retfunction(references);
				}
			});
		});
	},

	storeScreenShots : function(screenshots, references, retfunction)
	{
		var readableStreamBuffer = [];
		for(i = 0; i < screenshots.length; i++)
		{
			/*
			readableStreamBuffer[i] = new streamBuffers.ReadableStreamBuffer({
				frequency: 10,
				chunkSize: 1024,
			}); 

			readableStreamBuffer[i].put(screenshots[i]);
			s3.putObject({
				Bucket : bucketName,
				Key : references[i] + "",
				Body : screenshots[i],
			},function (resp) {
				console.log('Successfully uploaded package.');
			});
			*/
			var params = {
				Bucket : bucketName,
				Key : references[i] + "",
				Body : screenshots[i]//readableStreamBuffer[i]
			};
			console.log(params);
			/*
			var uploadPromise = new AWS.S3({apiVersion: '2006-03-01'}).putObject(params).promise();
			uploadPromise.then(
			function(data) {
				console.log("Successfully uploaded data to " + bucketName + "/" + keyName);
			}).catch(
				function(err) {
				console.error(err, err.stack);});
			*/
			s3.upload(params, function(err, data) {
				if (err) throw err
				console.log("File uploaded successfully at: " + data.Location);
				retfunction();
			});
		}
		/*
		var table = "SCREENSHOTS";
		console.log(screenshots);
		for(i = 0; i < screenshots.length; i++)
		{
			var name = "Default Clue Name"
			var reference = references[i];
			var screenshot = screenshots[i];
			console.log(screenshot);
			var params = {
				TableName : table,
				Item : {
					"reference" : reference,
					"contents" : screenshot
				},
				ReturnValues : "ALL_OLD"
			}
			docClient.put(params, function(err, data) {
				if (err) {
					console.error("Unable to add item. Error JSON:", JSON.stringify(err, null, 2));
				} else {
					console.log("Existing items:", JSON.stringify(data, null, 2));
				}
				retfunction();
			});
		}*/
	},

	getClue : function(reference, retfunction)
	{
		var params = {
			Bucket : bucketName,
			Key : references[i] + "",
			Body : screenshots[i]
		};
		s3.getObject(getParams, function(err, data) {
			if (err) throw err
			retfunction(data.Body);
		});


		/*
		var table = "CLUES";
		var params = {
			TableName: table,
			Key:{
				"reference": reference,
			}
		};
		docClient.get(params, function(err, data) {
			if (err) {
				console.error("Unable to read item. Error JSON:", JSON.stringify(err, null, 2));
			} else {
				console.log("GetItem succeeded:", JSON.stringify(data, null, 2));
				retfunction(data);
			}
		});
		*/
	},

	getScreenshot : function(reference, retfunction)
	{
		var table = "SCREENSHOTS";
		var params = {
			TableName: table,
			Key:{
				"reference": reference,
			}
		};
		docClient.get(params, function(err, data) {
			if (err) {
				console.error("Unable to read item. Error JSON:", JSON.stringify(err, null, 2));
			} else {
				console.log("GetItem succeeded:", JSON.stringify(data, null, 2));
				retfunction(data);
			}
		});	
	}
}
var referenceCodeHandler = require('./referenceCodeHandler');
var AWS = require("aws-sdk");

AWS.config.update({
	region: "us-west-2",
	endpoint: "http://localhost:8000"
});

var docClient = new AWS.DynamoDB.DocumentClient();
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
		}
	},

	getClue : function(reference, retfunction)
	{
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
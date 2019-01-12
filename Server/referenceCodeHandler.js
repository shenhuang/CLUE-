var AWS = require("aws-sdk");

AWS.config.update({
	region: "us-west-2",
	endpoint: "http://localhost:8000"
});

var docClient = new AWS.DynamoDB.DocumentClient();

module.exports = {

	getClueReferenceCode : function (retfunction)
	{
		var table = "Reference_Codes";
		var title = "Reference Codes";
		var params = {
			TableName: table,
			Key : {
				"title": title
			}
		};
		var code;
		docClient.get(params, function(err, data) {
			if (err) {
				console.error("Unable to get item from " + table + " table. Error JSON:", JSON.stringify(err, null, 2));
				retfunction(code);
			} else {
				console.log("GetItem succeeded:", JSON.stringify(data, null, 2));
				code = data.Item.referencecode;
				params = {
					TableName : table,
					Key : {
						"title" : title
					},
					UpdateExpression: "set referencecode = :r",
					ExpressionAttributeValues: {
						":r" : code + 1,
					},
					ReturnValues : "UPDATED_NEW"
				};
				docClient.update(params, function(err, data) {
					if (err) {
						console.error("Unable to update item in " + table + " table. Error JSON:", JSON.stringify(err, null, 2));
					} else {
						console.log("UpdateItem succeeded:", JSON.stringify(data, null, 2));
					}
				});
				retfunction(code);
			}
		});
	},

	getScreenshotReferenceCodes : function(amount, retfunction)
	{
		var table = "Reference_Codes";
		var title = "Reference Codes";
		var params = {
			TableName: table,
			Key : {
				"title": title
			}
		};
		var code;
		docClient.get(params, function(err, data) {
			if (err) {
				console.error("Unable to get item from " + table + " table. Error JSON:", JSON.stringify(err, null, 2));
				retfunction(null);
			} else {
				console.log("GetItem succeeded:", JSON.stringify(data, null, 2));
				code = data.Item.imagecode;
				params = {
					TableName : table,
					Key : {
						"title" : title
					},
					UpdateExpression: "set imagecode = :i",
					ExpressionAttributeValues: {
						":i" : code + amount,
					},
					ReturnValues : "UPDATED_NEW"
				};
				docClient.update(params, function(err, data) {
					if (err) {
						console.error("Unable to update item in " + table + " table. Error JSON:", JSON.stringify(err, null, 2));
						retfunction(null);
					} else {
						console.log("UpdateItem succeeded:", JSON.stringify(data, null, 2));
						codes = [];
						while(amount > 0)
						{
							codes.push(code);
							code++;
							amount--;
						}
						retfunction(codes);
					}
				});
			}
		});
	},
};
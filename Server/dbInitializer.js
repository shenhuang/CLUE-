var AWS = require("aws-sdk");

AWS.config.update({
  region: "us-west-2",
  endpoint: "http://localhost:8000"
});

console.log("Initializing DynamoDB for the game CLUE!!!");

CreateReferenceCodesTable();
CreateCLUESTable();
CreateScreenshotsTable();

function CreateReferenceCodesTable()
{
    console.log("Initializing Reference Codes table...");
    var dynamodb = new AWS.DynamoDB();
    var params = {
        TableName : "Reference_Codes",
        KeySchema: [
            { AttributeName: "title", KeyType: "HASH" }
        ],
        AttributeDefinitions: [
            { AttributeName: "title", AttributeType: "S" }
        ],
        ProvisionedThroughput: {
            ReadCapacityUnits: 100, 
            WriteCapacityUnits: 100
        }
    };

    dynamodb.createTable(params, function(err, data) {
        if (err) {
            console.error("Unable to create table. Error JSON:", JSON.stringify(err, null, 2));
            if(err.message == "Cannot create preexisting table")
                InitializeReferenceCodes();
        } else {
            console.log("Created table. Table description JSON:", JSON.stringify(data, null, 2));
            InitializeReferenceCodes();
        }
    });
}

function CreateCLUESTable()
{
    console.log("Initializing CLUES table...");
    var dynamodb = new AWS.DynamoDB();
    var params = {
        TableName : "CLUES",
        KeySchema: [
            { AttributeName: "reference", KeyType: "HASH" }
        ],
        AttributeDefinitions: [
            { AttributeName: "reference", AttributeType: "N" }
        ],
        ProvisionedThroughput: {
            ReadCapacityUnits: 100, 
            WriteCapacityUnits: 100
        }
    };

    dynamodb.createTable(params, function(err, data) {
        if (err) {
            console.error("Unable to create table. Error JSON:", JSON.stringify(err, null, 2));
        } else {
            console.log("Created table. Table description JSON:", JSON.stringify(data, null, 2));
        }
    });
}

function CreateScreenshotsTable()
{
    console.log("Initializing SCREENSHOTS table...");
    var dynamodb = new AWS.DynamoDB();
    var params = {
        TableName : "SCREENSHOTS",
        KeySchema: [
            { AttributeName: "reference", KeyType: "HASH" }
        ],
        AttributeDefinitions: [
            { AttributeName: "reference", AttributeType: "N" }
        ],
        ProvisionedThroughput: {
            ReadCapacityUnits: 100, 
            WriteCapacityUnits: 100
        }
    };

    dynamodb.createTable(params, function(err, data) {
        if (err) {
            console.error("Unable to create table. Error JSON:", JSON.stringify(err, null, 2));
        } else {
            console.log("Created table. Table description JSON:", JSON.stringify(data, null, 2));
        }
    });
}

function InitializeReferenceCodes()
{
    var docClient = new AWS.DynamoDB.DocumentClient();
    var table = "Reference_Codes";
    var title = "Reference Codes";
    var cluecode = 0;
    var imagecode = 0;

    var params = {
        TableName:table,
        Item:{
                "title" : title,
                "referencecode" : cluecode,
                "imagecode" : imagecode
            },
        ReturnValues : "ALL_OLD"
    };

    console.log("Initializing Reference Codes...");
    docClient.put(params, function(err, data) {
        if (err) {
            console.error("Unable to add item. Error JSON:", JSON.stringify(err, null, 2));
        } else {
            console.log("Added item:", JSON.stringify(data, null, 2));
        }
    });
}
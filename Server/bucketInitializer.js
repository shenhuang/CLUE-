var AWS = require('aws-sdk');
var uuid = require('uuid');

console.log("Initializing Clue Images Bucket...")
var bucketName = 'clue-images-bucket-' + uuid.v4();
var keyName = 'Sample_Upload.txt';
var bucketPromise = new AWS.S3({apiVersion: '2006-03-01'}).createBucket({Bucket: bucketName}).promise();
bucketPromise.then(
  function(data) {
    var objectParams = {Bucket: bucketName, Key: keyName, Body: 'Sample upload contents...'};
    var uploadPromise = new AWS.S3({apiVersion: '2006-03-01'}).putObject(objectParams).promise();
    uploadPromise.then(
      function(data) {
        console.log("Successfully uploaded data to " + bucketName + "/" + keyName);
      });
}).catch(
  function(err) {
    console.error(err, err.stack);
});
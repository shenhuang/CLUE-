var referenceCodeHandler = require('./referenceCodeHandler');

var getClueReferenceCode = referenceCodeHandler.getClueReferenceCode(function(output) {
	console.log(output);
});

var getScreenshotReferenceCodes = referenceCodeHandler.getScreenshotReferenceCodes(3, function(output) {
	console.log(output);
});
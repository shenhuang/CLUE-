var s3Handler = require('./s3Handler');

var references = [123, 124, 125];
var paths = ['./testScreenshots/screenshot1', './testScreenshots/screenshot2', './testScreenshots/screenshot3'];

s3Handler.storeScreenShots(paths, references, function() {
	var folder = './testScreenshots/';
	for(i = 0; i < paths.length; i++)
	{
		var path = folder + references[i];
		s3Handler.getScreenshot(path, references[i], function()
		{
			console.log("File sucessfully downloaded to: " + path);
		});
	}
});
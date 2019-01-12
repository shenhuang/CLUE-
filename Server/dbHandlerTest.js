var referenceCodeHandler = require('./referenceCodeHandler');
var dbHandler = require('./dbHandler');
var getClueReferenceCode = referenceCodeHandler .getClueReferenceCode(function(output) {
	var reference = output;
	var locations = ["123\n456", "111\n222", "7.99\n6.68"];
	var storeClues = dbHandler.storeClues(locations, reference, function(output) {
		var references = output;
		var screenshots = [Buffer.from("FakeImage1", "ASCII"), Buffer.from("FakeImage2", "ASCII"), Buffer.from("FakeImage3", "ASCII")];
		dbHandler.storeScreenShots(screenshots, references, function() {
			var getClue = dbHandler.getClue(reference, function(output) {
				console.log(output.Item.clues.locations);
				screenshotReferences = output.Item.clues.screenshots;
				for(i = 0; i < screenshotReferences.length; i++)
				{
					reference = screenshotReferences[i];
					var getScreenshot = dbHandler.getScreenshot(reference, function(output) {
						console.log(output.Item.contents + "");
					});
				}
			});
		});
	});
});
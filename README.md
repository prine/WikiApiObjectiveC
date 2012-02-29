WikiApiObjectiveC:
-----------------


Here is an example of how you should use the WikipediaHelper class:

	WikipediaHelper *wikiHelper = [[WikipediaHelper alloc] init];

	NSString *searchWord = @"Elefant";

	NSString *article = [wikiHelper getWikipediaHTMLPage:searchWord];
	NSString *htmlSource = [wikiHelper getWikipediaHTMLPage:searchWord];
	NSString *urlImage = [wikiHelper getUrlOfMainImage:searchWord];
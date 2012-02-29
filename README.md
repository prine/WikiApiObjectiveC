WikiApiObjectiveC:
-----------------

With this very small library your able to load an article from wikipedia api. At the moment
three different methods are provided:

	// Fetches an wikipedia article from the wikipedia api
	- (NSString *) getWikipediaArticle:(NSString *)name;

	// Returns the HTML page from an wikipedia article search by the name
	- (NSString *) getWikipediaHTMLPage:(NSString *)name;

	// Return the Main image of an wikipedia article search by the name
	- (NSString *) getUrlOfMainImage:(NSString *)name;

-----------------

Here is an example of how you should use the WikipediaHelper class:

	WikipediaHelper *wikiHelper = [[WikipediaHelper alloc] init];

	NSString *searchWord = @"Elefant";

	NSString *article = [wikiHelper getWikipediaHTMLPage:searchWord];
	NSString *htmlSource = [wikiHelper getWikipediaHTMLPage:searchWord];
	NSString *urlImage = [wikiHelper getUrlOfMainImage:searchWord];
	
-----------------

You see the main image of the wikipedia article and in the bottom the loaded webview.	

[![](	http://188.40.40.143/~robin/prine.ch/prine_art/img/tools/wikipediahelper.png)](	http://188.40.40.143/~robin/prine.ch/prine_art/img/tools/wikipediahelper.png)

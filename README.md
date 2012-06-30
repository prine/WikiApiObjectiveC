WikiApiObjectiveC:
-----------------

With this very small library your able to load an article from wikipedia api. At the moment
two different methods are provided:

	// Returns the HTML page from an wikipedia article search by the name
	- (NSString *) getWikipediaHTMLPage:(NSString *)name;

	// Return the Main image of an wikipedia article search by the name
	- (NSString *) getUrlOfMainImage:(NSString *)name;

-----------------

Here is an example of how you should use the WikipediaHelper class:

	WikipediaHelper *wikiHelper = [[WikipediaHelper alloc] init];
	wikiHelper.apiUrl = @"http://en.wikipedia.org";

	NSString *searchWord = @"Eels_Band";

	NSString *htmlSource = [wikiHelper getWikipediaHTMLPage:searchWord];
	NSString *urlImage = [wikiHelper getUrlOfMainImage:searchWord];
	
	
The language of the Wikipedia api can be changed in the variable `wikiHelper.apiUrl`.
You can see this in the above code example.
	
-----------------

You see the main image of the wikipedia article and in the bottom the loaded webview. 
The all the links in the Wikipage are working and it is possible to switch to another Wikipage by clicking on the link.

[![](	http://188.40.40.143/~robin/prine.ch/prine_art/img/tools/wikipediahelper.png)](	http://188.40.40.143/~robin/prine.ch/prine_art/img/tools/wikipediahelper.png)

WikiApiObjectiveC:
-----------------

With this simple library you are able to load an article from the wikipedia api. 
Here is an example of how you should use the WikipediaHelper class:

	WikipediaHelper *wikiHelper = [[WikipediaHelper alloc] init];
	wikiHelper.apiUrl = @"http://en.wikipedia.org";
	wikiHelper.delegate = self; // For the new version, we have to set the delegate class

	NSString *searchWord = @"Elephant";

	[wikiHelper fetchArticle:searchWord];
	
	
The language of the Wikipedia api can be changed in the variable `wikiHelper.apiUrl`.

The call is asynchronously and will call automatically the method dataLoaded if the request is finished.
Therefore we need to define the delegate class to self and implement the dataLoaded method.

	- (void)dataLoaded:(NSString *)htmlPage withUrlMainImage:(NSString *)urlMainImage {
    	  NSLog(@"HTML Page: %@", htmlPage);
          NSLog(@"Main image url: %@", urlMainImage);
	}
	
-----------------

You see the main image of the wikipedia article and in the bottom the loaded webview. 
The all the links in the Wikipage are working and it is possible to switch to another Wikipage by clicking on the link.

[![](	http://188.40.40.143/~robin/prine.ch/prine_art/img/tools/wikipediahelper.png)](	http://188.40.40.143/~robin/prine.ch/prine_art/img/tools/wikipediahelper.png)

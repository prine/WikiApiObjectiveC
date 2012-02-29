//
//  WikipediaHelper.h
//  prine.ch
//
//  Created by Robin Oster on 23.11.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WikipediaHelper : NSObject {
    
}

// Fetches an wikipedia article from the wikipedia api
- (NSString *) fetchWikipediaArticle:(NSString *)name;

// Returns the HTML page from an wikipedia article search by the name
- (NSString *) getWikipediaHTMLPage:(NSString *)name;

// Return the Main image of an wikipedia article search by the name
- (NSString *) getUrlOfMainImage:(NSString *)name;

@end

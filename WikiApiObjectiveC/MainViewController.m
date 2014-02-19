//
//  MainViewController.m
//  WikiApiObjectiveC
//
//  Created by Robin Oster on 29.02.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "MainViewController.h"

@implementation MainViewController
@synthesize titleLabel, imgView, websiteView, loadingActivity;

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];

    WikipediaHelper *wikiHelper = [[WikipediaHelper alloc] init];
    wikiHelper.apiUrl = @"http://en.wikipedia.org";
    wikiHelper.delegate = self;
    
    NSString *searchWord = @"Elephant";
    titleLabel.text = searchWord;
    
    [wikiHelper fetchArticle:searchWord];
    [loadingActivity startAnimating];
    loadingActivity.hidden = FALSE;
}

- (void)dataLoaded:(NSString *)htmlPage withUrlMainImage:(NSString *)urlMainImage {
    if(![urlMainImage isEqualToString:@""]) {
        NSData *imageData = [[NSData alloc] initWithContentsOfURL: [NSURL URLWithString: urlMainImage]];
        UIImage *image = [UIImage imageWithData:imageData];
        imgView.image = image;
    }
    
    [loadingActivity stopAnimating];
    loadingActivity.hidden = TRUE;

    [websiteView loadHTMLString:htmlPage baseURL:nil];
}

@end

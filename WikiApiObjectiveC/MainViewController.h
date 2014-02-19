//
//  MainViewController.h
//  WikiApiObjectiveC
//
//  Created by Robin Oster on 29.02.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "WikipediaHelper.h"

@interface MainViewController : UIViewController <WikipediaHelperDelegate> {
    IBOutlet UILabel *titleLabel;
    IBOutlet UIImageView *imgView;
    IBOutlet UIWebView *websiteView;
}

@property (nonatomic, retain) IBOutlet UILabel *titleLabel;
@property (nonatomic, retain) IBOutlet UIImageView *imgView;
@property (nonatomic, retain) IBOutlet UIWebView *websiteView;
@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *loadingActivity;

@end

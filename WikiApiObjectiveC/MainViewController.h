//
//  MainViewController.h
//  WikiApiObjectiveC
//
//  Created by Robin Oster on 29.02.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "FlipsideViewController.h"
#import "WikipediaHelper.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate> {
    IBOutlet UILabel *title;
    IBOutlet UIImageView *imageView;
    IBOutlet UIWebView *webView;
}

- (IBAction) searchWikipedia:(id *) sender;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;
@property (nonatomic, retain) IBOutlet UILabel *title;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UIWebView *webView;


- (IBAction)showInfo:(id)sender;

@end

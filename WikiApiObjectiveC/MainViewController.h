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
    IBOutlet UILabel *titleLabel;
    IBOutlet UIImageView *imgView;
    IBOutlet UIWebView *websiteView;
}

- (IBAction) searchWikipedia:(id *) sender;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;
@property (nonatomic, retain) IBOutlet UILabel *titleLabel;
@property (nonatomic, retain) IBOutlet UIImageView *imgView;
@property (nonatomic, retain) IBOutlet UIWebView *websiteView;


- (IBAction)showInfo:(id)sender;

@end

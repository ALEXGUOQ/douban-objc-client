//
//  MainViewController.h
//  DOUAPIEngine
//
//  Created by Lin GUO on 11-10-31.
//  Copyright (c) 2011年 Douban Inc. All rights reserved.
//


@class DoubanEntryEvent;
@interface MainViewController : UIViewController {
 @private
  DoubanEntryEvent *event_;

  IBOutlet UILabel *titleLabel_;
  IBOutlet UILabel *timeLabel_;
  IBOutlet UILabel *whereLabel_;
  IBOutlet UILabel *contentLabel_;

}

@property (nonatomic, retain) DoubanEntryEvent *event;

@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) UILabel *whereLabel;
@property (nonatomic, retain) UILabel *contentLabel;

- (IBAction)showInfo:(id)sender;

- (void)updateUI;
@end

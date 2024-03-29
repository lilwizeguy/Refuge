//
//  QRCodeReaderViewController.h
//  HFTH
//
//  Created by Immanuel Amirtharaj on 3/1/15.
//  Copyright (c) 2015 Immanuel Amirtharaj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface QRCodeReaderViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>

@property (strong, nonatomic) UIView *viewPreview;
@property (strong, nonatomic) UILabel *lblStatus;
@property (strong, nonatomic) UIBarButtonItem *bbitemStart;

- (void)startStopReading;

@end

//
//  ViewController.h
//  Spectral Motion
//
//  Created by Kale Evans on 12/23/14.
//  Copyright (c) 2014 Kale Evans. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSHyperspectralData.h"
#import "MenuOptionsViewController.h"
#import "CorePlot-CocoaTouch.h"


@interface ViewController : UIViewController<UIScrollViewDelegate, OptionSelectedDelegate>

@property (weak, nonatomic) IBOutlet UISlider *bandSlider;

- (IBAction)sliderValueChanged:(id)sender;

@property (weak, nonatomic) IBOutlet UILabel *sliderValueLabel;

-(void)setImageViewWithImage:(UIImage*)image;
-(void)setHyperspectralDataPointer:(MSHyperspectralData*)hyperspectralData;
-(void)setHyperspectralDataHeader:(HDRINFO) hdrInfo;
-(void)setGreyScaleBand:(int)greyscaleBand;

@property (weak, nonatomic) IBOutlet UIView *sliderBackgroundView;


@end


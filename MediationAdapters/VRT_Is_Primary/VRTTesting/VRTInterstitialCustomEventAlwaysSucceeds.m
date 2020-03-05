//
//  VRTInterstitialCustomEventAlwaysFails.m
//  VrtcalSDKInternalTestApp
//
//  Created by Scott McCoy on 5/9/19.
//  Copyright © 2019 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VRTInterstitialCustomEventAlwaysSucceeds.h"


@interface VRTInterstitialCustomEventAlwaysSucceeds()
@property UIViewController* interstitialVC;
@end

@implementation VRTInterstitialCustomEventAlwaysSucceeds

- (void) loadInterstitialAd {
    [self.customEventLoadDelegate adLoaded];
}


-(void) showInterstitialAd {
    self.interstitialVC = [[UIViewController alloc] init];

    //Create close button
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    [button addTarget:self action:@selector(close) forControlEvents:UIControlEventTouchUpInside];
    [button setTitle:@"Close" forState:UIControlStateNormal];
    button.frame = CGRectMake(50, 50.0, 50, 50);
    [self.interstitialVC.view addSubview:button];
    
    //Create label
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(50, 100, 400, 50)];
    label.text = @"VRTInterstitialCustomEventAlwaysSucceeds";
    label.textColor = [UIColor whiteColor];
    [self.interstitialVC.view addSubview:label];
    
    //Present vc
    UIViewController *vc = [self.viewControllerDelegate vrtViewControllerForModalPresentation];
    [vc presentViewController:self.interstitialVC animated:YES completion:nil];
}

-(void) close {
    [self.interstitialVC dismissViewControllerAnimated:YES completion:nil];
}

@end

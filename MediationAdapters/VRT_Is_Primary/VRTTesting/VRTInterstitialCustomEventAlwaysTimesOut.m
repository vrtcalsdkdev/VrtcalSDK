//
//  VRTBannerCustomEventAlwaysFails.m
//  VrtcalSDKInternalTestApp
//
//  Created by Scott McCoy on 5/9/19.
//  Copyright © 2019 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VRTInterstitialCustomEventAlwaysTimesOut.h"

@implementation VRTInterstitialCustomEventAlwaysTimesOut

- (void)loadInterstitialAd {
    //Do nothing. This will cause a timeout in VRTCustomEventFactory.
}



@end

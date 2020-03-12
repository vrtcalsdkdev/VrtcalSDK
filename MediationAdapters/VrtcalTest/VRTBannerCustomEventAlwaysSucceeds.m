//
//  VRTBannerCustomEventAlwaysSucceeds.m
//  VrtcalSDKInternalTestApp
//
//  Created by Scott McCoy on 5/9/19.
//  Copyright © 2019 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VRTBannerCustomEventAlwaysSucceeds.h"

@implementation VRTBannerCustomEventAlwaysSucceeds

- (void) loadBannerAd {
    [self.customEventLoadDelegate adLoaded];
}

- (UIView*) getView {
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 320, 50)];
    label.text = @"VRTBannerCustomEventAlwaysSucceeds";
    return label;
}

@end

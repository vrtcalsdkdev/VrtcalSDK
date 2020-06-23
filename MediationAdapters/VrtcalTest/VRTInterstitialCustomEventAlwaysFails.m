//
//  VRTInterstitialCustomEventAlwaysFails.m
//  VrtcalSDKInternalTestApp
//
//  Created by Scott McCoy on 5/9/19.
//  Copyright © 2019 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VRTInterstitialCustomEventAlwaysFails.h"

@implementation VRTInterstitialCustomEventAlwaysFails

- (void)loadInterstitialAd {
    VRTError *error = [VRTError errorWithCode:@"DUMMY_ERROR_CODE" message:@"VRTInterstitialCustomEventAlwaysFails"];
    [self.customEventLoadDelegate customEventFailedToLoadWithError:error];
}



@end

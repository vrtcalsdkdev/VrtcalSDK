//
//  VRTBannerCustomEventAlwaysFails.m
//  VrtcalSDKInternalTestApp
//
//  Created by Scott McCoy on 5/9/19.
//  Copyright © 2019 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VRTBannerCustomEventAlwaysFails.h"

@implementation VRTBannerCustomEventAlwaysFails

- (void)loadBannerAd {
    VRTError *error = [VRTError errorWithCode:@"DUMMY_ERROR_CODE" message:@"VRTBannerCustomEventAlwaysFails"];
    [self.customEventLoadDelegate adFailedToLoadWithError:error];
}

@end

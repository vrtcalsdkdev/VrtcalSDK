//
//  VRTAbstractCustomEventInterstitial.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VRTAbstractCustomEvent.h"

@protocol VRTCustomEventLoadDelegate;
@protocol VRTCustomEventShowDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface VRTAbstractInterstitialCustomEvent : VRTAbstractCustomEvent

- (void)loadInterstitialAd;
- (void)showInterstitialAd;

@end

NS_ASSUME_NONNULL_END

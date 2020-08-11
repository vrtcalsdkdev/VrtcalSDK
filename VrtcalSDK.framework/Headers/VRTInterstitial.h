//
//  VrtcalInterstitial.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VRTAdInterface.h"
#import "VRTInterstitialDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@interface VRTInterstitial : NSObject <VRTAdInterface>

@property (weak, nullable) id <VRTInterstitialDelegate> adDelegate;
@property (nullable) NSDictionary *localExtras;

- (void)loadAd:(NSUInteger)zoneId;
- (void)showAd;

@end


NS_ASSUME_NONNULL_END

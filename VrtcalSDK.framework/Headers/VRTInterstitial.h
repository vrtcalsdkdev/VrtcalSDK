//
//  VrtcalInterstitial.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 10/2/18.
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VRTAdInterface.h"
#import "VRTInterstitialDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@interface VRTInterstitial : NSObject <VRTAdInterface>

@property (strong, nonatomic, nullable) id <VRTInterstitialDelegate> adDelegate;
@property (strong, nonatomic, nullable) NSDictionary *localExtras;

- (void)loadAd:(NSUInteger)zoneId;
- (void)showAd;

@end


NS_ASSUME_NONNULL_END

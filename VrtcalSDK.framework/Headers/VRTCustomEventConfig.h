//
//  VrtcalCustomEventConfig.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 9/25/18.
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VRTAdType.h"
#import "VRTZoneType.h"

NS_ASSUME_NONNULL_BEGIN

//TODO: Document each of these
@interface VRTCustomEventConfig : NSObject

@property NSString *adEngine;
@property NSTimeInterval loadCustomEventTimeout;
@property BOOL isPassback;
@property NSTimeInterval passbackTimeout;
@property NSString *className;
@property NSDictionary *thirdPartyCustomEventData;
@property NSString *creative;
@property CGSize adSize;
@property VRTAdType adType; //Options: Banner, Interstitial
@property VRTZoneType zoneType; //Options: Unknown, Display, VAST
@property NSTimeInterval refreshInterval;
@property NSDictionary *localExtras;

@property NSArray<NSURL*> *arrUrlAdRequested;
@property NSArray<NSURL*> *arrUrlAdReceived;
@property NSArray<NSURL*> *arrUrlAdImpressed;

@end


NS_ASSUME_NONNULL_END

//
//  VrtcalCustomEventConfig.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VRTAdType.h"
#import "VRTZoneType.h"
#import "VRTAbstractCustomEvent.h"

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
@property VRTZoneType zoneType; //Options: Display, VAST
@property NSTimeInterval refreshInterval;
@property NSDictionary *localExtras;

@property NSArray<NSURL*> *arrUrlAdRequested;
@property NSArray<NSURL*> *arrUrlAdReceived;
@property NSArray<NSURL*> *arrUrlAdImpressed;

@property (weak) VRTAbstractCustomEvent *customEvent;

@end


NS_ASSUME_NONNULL_END

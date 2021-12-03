//
//  VrtcalCustomEventConfig.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VRTDevicePlacement.h"
#import "VRTZoneType.h"
#import "VRTAbstractCustomEvent.h"

NS_ASSUME_NONNULL_BEGIN

//TODO: Document each of these
@interface VRTCustomEventConfig : NSObject

@property NSString *adEngine;
@property NSTimeInterval loadCustomEventTimeout;
@property BOOL isPassback;
@property BOOL omidEnabled;
@property NSTimeInterval passbackTimeout;
@property NSString *className;
@property NSDictionary *thirdPartyCustomEventData;
@property NSDictionary *storeProductViewControllerParamsDict;
@property NSString *creative;
@property CGSize adSize;
@property VRTDevicePlacement devicePlacement; //Options: Banner, Interstitial
@property VRTZoneType zoneType; //Options: Display, VAST
@property BOOL showCloseButtonOnVideoInterstitial;
@property NSTimeInterval refreshInterval;
@property NSDictionary *localExtras;

@property NSArray<NSURL*> *arrUrlAdRequested;
@property NSArray<NSURL*> *arrUrlAdReceived;
@property NSArray<NSURL*> *arrUrlAdImpressed;

@property (weak) VRTAbstractCustomEvent *customEvent;

@end


NS_ASSUME_NONNULL_END

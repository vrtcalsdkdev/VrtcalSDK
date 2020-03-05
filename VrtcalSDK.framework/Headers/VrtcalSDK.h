//
//  VrtcalSDK.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 9/21/18.
//  Copyright © 2018 VRTCAL. All rights reserved.
//

//This file serves as the umbrella header as well as the class header for the VrtcalSDK class
#import "VrtcalSdkDelegate.h"

#import "VRTBanner.h"
#import "VRTBannerDelegate.h"
#import "VRTAbstractBannerCustomEvent.h"

#import "VRTInterstitial.h"
#import "VRTInterstitialDelegate.h"
#import "VRTAbstractInterstitialCustomEvent.h"

#import "VRTAbstractCustomEvent.h"
#import "VRTCustomEventConfig.h"

#import "VRTLog.h"
#import "VRTError.h"

NS_ASSUME_NONNULL_BEGIN
@interface VrtcalSDK : NSObject
/**
 * Initializes the Vrtcal SDK. It is recommended that you call this method
 * in applicationDidFinishLaunchingWithOptions. 
 *
 * @param appId App ID
 * @param sdkDelegate SDK delegate, to be notified of SDK initialization status
 */
+ (void)initializeSdkWithAppId:(NSUInteger)appId sdkDelegate:(id <VrtcalSdkDelegate>)sdkDelegate;

/**
 * Do not use this method unless you are a partner and have been instructed to
 * use it.
 *
 * @param serverUrl Server URL
 */
+ (void)setServerUrl:(NSURL *)serverUrl;

/**
 * Returns the version number of the SDK
 */
+ (NSString*)sdkVersion;

/**
 * Allows the publisher to indicate to VRTCAL that the user has the PayPal app installed.
 * Use `[[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"paypal://dummyurl"]]` to determine this.
 * Please refer to Apple's documentation for details: https://developer.apple.com/documentation/uikit/uiapplication/1622952-canopenurl?language=objc
 */
+(void) setUserHasPayPalApp:(BOOL)hasApp;

/**
 * Allows the publisher to indicate to VRTCAL that the user has the Venmo app installed.
 * Use `[[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"venmo://dummyurl"]]` to determine this.
 * Please refer to Apple's documentation for details: https://developer.apple.com/documentation/uikit/uiapplication/1622952-canopenurl?language=objc
 */
+(void) setUserHasVenmoApp:(BOOL)hasApp;

/**
* Forces a specific test ad when the ad unit is in test/unverified app mode.
* NOTE: Test ad IDs can be found at the top of returned creatives in the following form:
* <!--DEBUG TEST AD: zid_61.json_320x50_adonly-->
*/
@property (class, nullable) NSString *debugSpecificTestAd;

@end
NS_ASSUME_NONNULL_END

//
//  VRTBannerCustomEventAlwaysFails.m
//  VrtcalSDKInternalTestApp
//
//  Created by Scott McCoy on 5/9/19.
//  Copyright © 2019 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VRTInterstitialCustomEventInMobi.h"

#import <InMobiSDK/InMobiSDK.h>

@interface VRTInterstitialCustomEventInMobi() <IMInterstitialDelegate>
@property IMInterstitial *imInterstitial;
@end


@implementation VRTInterstitialCustomEventInMobi

- (void) loadInterstitialAd {
    long long placementId = [[self.customEventConfig.thirdPartyCustomEventData valueForKey:@"placementId"] longLongValue];
    self.imInterstitial = [[IMInterstitial alloc] initWithPlacementId:placementId delegate:self];
    [self.imInterstitial load];
}

- (void) showInterstitialAd {
    UIViewController *vc = [self.viewControllerDelegate vrtViewControllerForModalPresentation];
    [self.imInterstitial showFromViewController:vc];
}

#pragma mark - IMInterstitialDelegate
/**
 * Notifies the delegate that the ad server has returned an ad. Assets are not yet available.
 * Please use interstitialDidFinishLoading: to receive a callback when assets are also available.
 */
-(void)interstitialDidReceiveAd:(IMInterstitial*)interstitial {
    VRTLogWhereAmI();
    [self.customEventLoadDelegate adLoaded];
}

/**
 * Notifies the delegate that the interstitial has finished loading and can be shown instantly.
 */
-(void)interstitialDidFinishLoading:(IMInterstitial*)interstitial {
    VRTLogWhereAmI();
}

/**
 * Notifies the delegate that the interstitial has failed to load with some error.
 */
-(void)interstitial:(IMInterstitial*)interstitial didFailToLoadWithError:(IMRequestStatus *)error {
    VRTLogWhereAmI();
    [self.customEventLoadDelegate adFailedToLoadWithError:error];
}

/**
 * Notifies the delegate that the interstitial would be presented.
 */
-(void)interstitialWillPresent:(IMInterstitial*)interstitial {
    VRTLogWhereAmI();
}

/**
 * Notifies the delegate that the interstitial has been presented.
 */
-(void)interstitialDidPresent:(IMInterstitial*)interstitial {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adShown];
}

/**
 * Notifies the delegate that the interstitial has failed to present with some error.
 */
-(void)interstitial:(IMInterstitial*)interstitial didFailToPresentWithError:(IMRequestStatus*)error {
    VRTLogWhereAmI();
}

/**
 * Notifies the delegate that the interstitial will be dismissed.
 */
-(void)interstitialWillDismiss:(IMInterstitial*)interstitial {
    VRTLogWhereAmI();
}

/**
 * Notifies the delegate that the interstitial has been dismissed.
 */
-(void)interstitialDidDismiss:(IMInterstitial*)interstitial {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adDismissed];
}

/**
 * Notifies the delegate that the interstitial has been interacted with.
 */
-(void)interstitial:(IMInterstitial*)interstitial didInteractWithParams:(NSDictionary*)params {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adClicked];
}

/**
 * Notifies the delegate that the user has performed the action to be incentivised with.
 */
-(void)interstitial:(IMInterstitial*)interstitial rewardActionCompletedWithRewards:(NSDictionary*)rewards {
    VRTLogWhereAmI();
}

/**
 * Notifies the delegate that the user will leave application context.
 */
-(void)userWillLeaveApplicationFromInterstitial:(IMInterstitial*)interstitial {
    VRTLogWhereAmI();
}


@end

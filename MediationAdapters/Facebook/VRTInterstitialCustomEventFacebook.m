//
//  VRTInterstitialCustomEventFacebook.m
//
//  Created by Scott McCoy on 5/9/19.
//  Copyright © 2019 VRTCAL. All rights reserved.
//


//Header
#import "VRTInterstitialCustomEventFacebook.h"

//Dependencies
#import <FBAudienceNetwork/FBAudienceNetwork.h>

@interface VRTInterstitialCustomEventFacebook() <FBInterstitialAdDelegate>
@property FBInterstitialAd *fbInterstitialAd;
@end


@implementation VRTInterstitialCustomEventFacebook

- (void) loadInterstitialAd {
    NSString *placementId = [self.customEventConfig.thirdPartyCustomEventData objectForKey:@"placementId"];
    self.fbInterstitialAd = [[FBInterstitialAd alloc] initWithPlacementID:placementId];
    self.fbInterstitialAd.delegate = self;
    [self.fbInterstitialAd loadAd];
}

- (void) showInterstitialAd {
    VRTLogWhereAmI();
    UIViewController *vc = [self.viewControllerDelegate vrtViewControllerForModalPresentation];
    [self.fbInterstitialAd showAdFromRootViewController:vc];
}

#pragma mark - FBInterstitialAdDelegate

/**
 Sent after an ad in the FBInterstitialAd object is clicked. The appropriate app store view or
 app browser will be launched.
 
 @param interstitialAd An FBInterstitialAd object sending the message.
 */
- (void)interstitialAdDidClick:(FBInterstitialAd *)interstitialAd {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adClicked];
}

/**
 Sent after an FBInterstitialAd object has been dismissed from the screen, returning control
 to your application.
 
 @param interstitialAd An FBInterstitialAd object sending the message.
 */
- (void)interstitialAdDidClose:(FBInterstitialAd *)interstitialAd {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adDismissed];
}

/**
 Sent immediately before an FBInterstitialAd object will be dismissed from the screen.
 
 @param interstitialAd An FBInterstitialAd object sending the message.
 */
- (void)interstitialAdWillClose:(FBInterstitialAd *)interstitialAd {
    VRTLogWhereAmI();
}


/**
 Sent when an FBInterstitialAd successfully loads an ad.
 
 @param interstitialAd An FBInterstitialAd object sending the message.
 */
- (void)interstitialAdDidLoad:(FBInterstitialAd *)interstitialAd {
    VRTLogWhereAmI();
    [self.customEventLoadDelegate adLoaded];
}

/**
 Sent when an FBInterstitialAd failes to load an ad.
 
 @param interstitialAd An FBInterstitialAd object sending the message.
 @param error An error object containing details of the error.
 */
- (void)interstitialAd:(FBInterstitialAd *)interstitialAd didFailWithError:(NSError *)error {
    VRTLogWhereAmI();
    //Facebook puts error messages in their own format.
    VRTError *vrtError = [VRTError errorWithCode:VRTErrorCodeCustomEvent format:@"%@", error.userInfo];
    [self.customEventLoadDelegate adFailedToLoadWithError:vrtError];
}

/**
 Sent immediately before the impression of an FBInterstitialAd object will be logged.
 
 @param interstitialAd An FBInterstitialAd object sending the message.
 */
- (void)interstitialAdWillLogImpression:(FBInterstitialAd *)interstitialAd {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adShown];
}



@end

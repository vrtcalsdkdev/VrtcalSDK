//
//  VRTBannerCustomEventAlwaysFails.m
//  VrtcalSDKInternalTestApp
//
//  Created by Scott McCoy on 5/9/19.
//  Copyright © 2019 VRTCAL. All rights reserved.
//

//Header
#import "VRTBannerCustomEventFacebook.h"

//Dependencies
#import <FBAudienceNetwork/FBAudienceNetwork.h>

@interface VRTBannerCustomEventFacebook() <FBAdViewDelegate>
@property FBAdView *fbAdView;
@end


@implementation VRTBannerCustomEventFacebook

- (void) loadBannerAd {
    NSString *placementId = [self.customEventConfig.thirdPartyCustomEventData objectForKey:@"placementId"];
    FBAdSize adSize;
    adSize.size = self.customEventConfig.adSize;
    UIViewController *vc = [self.viewControllerDelegate vrtViewControllerForModalPresentation];
    self.fbAdView = [[FBAdView alloc] initWithPlacementID:placementId adSize:adSize rootViewController:vc];
    self.fbAdView.delegate = self;
    [self.fbAdView loadAd];
}

- (UIView*) getView {
    return self.fbAdView;
}


#pragma mark - FBAdViewDelegate
/**
 Sent after an ad has been clicked by the person.
 
 @param adView An FBAdView object sending the message.
 */
- (void)adViewDidClick:(FBAdView *)adView {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adClicked];
}

/**
 When an ad is clicked, the modal view will be presented. And when the user finishes the
 interaction with the modal view and dismiss it, this message will be sent, returning control
 to the application.
 
 @param adView An FBAdView object sending the message.
 */
- (void)adViewDidFinishHandlingClick:(FBAdView *)adView {
    VRTLogWhereAmI();
}

/**
 Sent when an ad has been successfully loaded.
 
 @param adView An FBAdView object sending the message.
 */
- (void)adViewDidLoad:(FBAdView *)adView {
    VRTLogWhereAmI();
    [self.customEventLoadDelegate adLoaded];
}


/**
 Sent after an FBAdView fails to load the ad.
 
 @param adView An FBAdView object sending the message.
 @param error An error object containing details of the error.
 */
- (void)adView:(FBAdView *)adView didFailWithError:(NSError *)error {
    VRTLogWhereAmI();
    [self.customEventLoadDelegate adFailedToLoadWithError:error];
}

/**
 Sent immediately before the impression of an FBAdView object will be logged.
 
 @param adView An FBAdView object sending the message.
 */
- (void)adViewWillLogImpression:(FBAdView *)adView {
    VRTLogWhereAmI();
}

/**
 Asks the delegate for a view controller to present modal content, such as the in-app
 browser that can appear when an ad is clicked.
 
 @return A view controller that is used to present modal content.
 */
-(UIViewController*) viewControllerForPresentingModalView {
    VRTLogWhereAmI();
    UIViewController *vc = [self.viewControllerDelegate vrtViewControllerForModalPresentation];
    return vc;
}


@end

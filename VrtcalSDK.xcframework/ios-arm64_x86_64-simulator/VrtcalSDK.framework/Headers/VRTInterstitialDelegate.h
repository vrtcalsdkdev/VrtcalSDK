//
//  VRTInterstitialDelegate.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>

@class VRTInterstitial;
@class UIViewController;

NS_ASSUME_NONNULL_BEGIN


@protocol VRTInterstitialDelegate <NSObject>

/**
 * Interstitial Ad failed to load.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialAdLoaded:(VRTInterstitial *)vrtInterstitial;

/**
 * Interstitial Ad failed to load.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 * @param error Load error
 */
-(void)vrtInterstitialAdFailedToLoad:(VRTInterstitial *)vrtInterstitial error:(NSError *)error;


/**
 * Show has been invoked and the interstitial animation will begin.
 *
 * @param vrtInterstitial Interstitial object used to load ad
*/
-(void)vrtInterstitialAdWillShow:(VRTInterstitial *)vrtInterstitial;


/**
 * Show has been invoked and the interstitial animation is complete.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialAdDidShow:(VRTInterstitial *)vrtInterstitial;

/**
 * Could not show interstitial ad, either due to a failure to load, already showing or other error.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 * @param error Show error
 */
-(void)vrtInterstitialAdFailedToShow:(VRTInterstitial *)vrtInterstitial error:(NSError *)error;

/**
 * Interstitial ad clicked.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialAdClicked:(VRTInterstitial *)vrtInterstitial;

/**
 * The application will be backgrounded to launch the browser. The user must have interacted with the ad.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialAdWillLeaveApplication:(VRTInterstitial *)vrtInterstitial;


/**
 * Close button tapped and interstitial animation begun.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialAdWillDismiss:(VRTInterstitial *)vrtInterstitial;


/**
 * Close button tapped and interstitial animation complete.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialAdDidDismiss:(VRTInterstitial *)vrtInterstitial;

/**
 * The interstitial has started playing a video.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialVideoStarted:(VRTInterstitial *)vrtInterstitial;


/**
 * The interstitial has completed playing a video.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialVideoCompleted:(VRTInterstitial *)vrtInterstitial;


/**
 * Must be implemented
 */
-(UIViewController*)vrtViewControllerForModalPresentation;

@end


NS_ASSUME_NONNULL_END

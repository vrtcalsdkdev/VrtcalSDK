//
//  VRTInterstitialDelegate.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 10/2/18.
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>

@class VRTInterstitial;

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
 * Show has been invoked and the interstitial animation is complete.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialAdShown:(VRTInterstitial *)vrtInterstitial;

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
 * Close button tapped and interstitial animation complete.
 *
 * @param vrtInterstitial Interstitial object used to load ad
 */
-(void)vrtInterstitialAdDismissed:(VRTInterstitial *)vrtInterstitial;

/**
 * Must be implemented
 */
-(UIViewController*)vrtViewControllerForModalPresentation;

@end


NS_ASSUME_NONNULL_END

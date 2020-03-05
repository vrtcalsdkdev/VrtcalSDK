//
//  VrtcalBannerDelegate.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 9/21/18.
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class VRTBanner;
@class UIViewController;


/**
 * Listner for banner ad events.
 */
@protocol VRTBannerDelegate <NSObject>

/**
 * Banner ad loaded and shown.
 *
 * @param vrtBanner Banner object used to load ad
 */
-(void)vrtBannerAdLoaded:(VRTBanner *)vrtBanner;

/**
 * Banner ad failed to load.
 *
 * @param vrtBanner Banner object used to load ad
 * @param error Load error
 */
-(void)vrtBannerAdFailedToLoad:(VRTBanner *)vrtBanner error:(NSError *)error NS_SWIFT_NAME(vrtBannerAdFailedToLoad(_:error:));

//TODO: Try to NS_SWIFT_NAME
//NS__SWIFT_NAME(vrtBannerAdFailedToLoad(_:));

/**
 * Banner ad clicked.
 *
 * @param vrtBanner Banner object used to load ad
 */
-(void)vrtBannerAdClicked:(VRTBanner *)vrtBanner;


/**
 * Must be implemented
 */
-(UIViewController*)vrtViewControllerForModalPresentation;

@end


NS_ASSUME_NONNULL_END

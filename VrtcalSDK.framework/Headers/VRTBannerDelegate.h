//
//  VrtcalBannerDelegate.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VRTModalType.h"

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
-(void)vrtBannerAdLoaded:(VRTBanner *)vrtBanner withAdSize:(CGSize)adSize;

/**
 * Banner ad failed to load.
 *
 * @param vrtBanner Banner object used to load ad
 * @param error Load error
 */
-(void)vrtBannerAdFailedToLoad:(VRTBanner *)vrtBanner error:(NSError *)error NS_SWIFT_NAME(vrtBannerAdFailedToLoad(_:error:));

/**
 * Banner ad clicked.
 *
 * @param vrtBanner Banner object used to load ad
 */
-(void)vrtBannerAdClicked:(VRTBanner *)vrtBanner;


/**
 * Banner ad is about to begin presenting a modal view.
 *
 * @param vrtBanner Banner object used to load ad
 * @param modalType The type of modal presented
 */
-(void)vrtBannerWillPresentModal:(VRTBanner*)vrtBanner ofType:(VRTModalType)modalType;

/**
 * Banner ad has finished presenting a modal view
 * @param vrtBanner Banner object used to load ad
 * @param modalType The type of modal presented
 */
-(void)vrtBannerDidPresentModal:(VRTBanner*)vrtBanner ofType:(VRTModalType)modalType;


/**
 * Banner ad is about to begin dismissing a modal view.
 *
 * @param vrtBanner Banner object used to load ad
 * @param modalType The type of modal presented
*/
-(void)vrtBannerWillDismissModal:(VRTBanner*)vrtBanner ofType:(VRTModalType)modalType;

/**
 * Banner ad has finished dismissing a modal view.
 *
 * @param vrtBanner Banner object used to load ad
 * @param modalType The type of modal presented
 */
-(void)vrtBannerDidDismissModal:(VRTBanner*)vrtBanner ofType:(VRTModalType)modalType;

/**
 * The application will be backgrounded to launch the browser. The user must have interacted with the ad.
 *
 * @param vrtBanner Banner object used to load ad
 */
-(void)vrtBannerAdWillLeaveApplication:(VRTBanner *)vrtBanner;


/**
 * The banner has started playing a video.
 *
 * @param vrtBanner Banner object used to load ad
 */
-(void)vrtBannerVideoStarted:(VRTBanner *)vrtBanner;

/**
 * The banner has completed playing a video.
 *
 * @param vrtBanner Banner object used to load ad
 */
-(void)vrtBannerVideoCompleted:(VRTBanner *)vrtBanner;

/**
 * Must be implemented. Passes the host view controller to the ad.
 */
-(UIViewController*)vrtViewControllerForModalPresentation;

@end


NS_ASSUME_NONNULL_END

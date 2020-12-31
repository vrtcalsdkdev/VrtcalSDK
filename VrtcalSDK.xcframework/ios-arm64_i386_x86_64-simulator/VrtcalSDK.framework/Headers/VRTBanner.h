//
//  VrtcalBanner.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VRTBannerDelegate.h"
#import "VRTAdInterface.h"

NS_ASSUME_NONNULL_BEGIN


/**
 * A UIView where the banner ad will be displayed.  You add this object
 * to a parent view just like you would with a UIView.  It also has methods
 * to load ad, pause/resume banner refresh, and clean up.  Since it subclasses
 * UIView, you must instantiate it in Main thread.
 */
@interface VRTBanner : UIView <VRTAdInterface>

/**
 * Banner ad delegate, used to listen to banner events, such as ad loaded,
 * ad failed events
 */
@property (weak, nullable) id <VRTBannerDelegate> adDelegate;

/**
 * Data structure used to pass runtime values programmatically to custom
 * events.  E.g. if you pass in @{"userId": "myUserId"}, this value will
 * be accessible in custom event.  This property is only needed for
 * publishers who implement their own custom events.
 */
@property (nullable) NSDictionary *localExtras;

/**
 * Asynchronously loads a banner ad. Any outcome is communicated via adDelegate.
 *
 * @param zoneId Zone ID
 */
- (void)loadAd:(NSUInteger)zoneId;

@end


NS_ASSUME_NONNULL_END

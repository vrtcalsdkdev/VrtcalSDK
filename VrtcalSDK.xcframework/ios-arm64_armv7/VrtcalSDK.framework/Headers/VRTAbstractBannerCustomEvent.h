//
//  VRTAbstractBannerCustomEvent.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

//Header
#import "VRTAbstractCustomEvent.h"

//Imports & @classes
@class VRTBanner;
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface for banner custom events.
 */
@interface VRTAbstractBannerCustomEvent : VRTAbstractCustomEvent

- (void)loadBannerAd;
- (nullable UIView*)getView;

@end


NS_ASSUME_NONNULL_END

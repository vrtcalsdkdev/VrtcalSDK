//
//  VRTBannerCustomEventInMobi.m
//
//  Created by Scott McCoy on 5/9/19.
//  Copyright © 2019 VRTCAL. All rights reserved.
//

//Header
#import "VRTBannerCustomEventInMobi.h"

//Dependencies
#import <InMobiSDK/InMobiSDK.h>

@interface VRTBannerCustomEventInMobi() <IMBannerDelegate>
@property IMBanner *imBanner;
@end


@implementation VRTBannerCustomEventInMobi

- (void) loadBannerAd {
    long long placementId = [[self.customEventConfig.thirdPartyCustomEventData valueForKey:@"placementId"] longLongValue];
    CGRect frame = CGRectMake(0, 0, self.customEventConfig.adSize.width, self.customEventConfig.adSize.height);
    self.imBanner = [[IMBanner alloc] initWithFrame:frame placementId:placementId];
    self.imBanner.delegate = self;
    [self.imBanner load];
}

- (UIView*) getView {
    return self.imBanner;
}


#pragma mark - IMBannerDelegate
/**
 * Notifies the delegate that the banner has finished loading
 */
-(void)bannerDidFinishLoading:(IMBanner*)banner {
    VRTLogWhereAmI();
    [self.customEventLoadDelegate adLoaded];
}


/**
 * Notifies the delegate that the banner has failed to load with some error.
 */
-(void)banner:(IMBanner*)banner didFailToLoadWithError:(IMRequestStatus*)error {
    VRTLogWhereAmI();
    [self.customEventLoadDelegate adFailedToLoadWithError:error];
}

/**
 * Notifies the delegate that the banner was interacted with.
 */
-(void)banner:(IMBanner*)banner didInteractWithParams:(NSDictionary*)params {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adClicked];
}

/**
 * Notifies the delegate that the user would be taken out of the application context.
 */
-(void)userWillLeaveApplicationFromBanner:(IMBanner*)banner {
    VRTLogWhereAmI();
}

/**
 * Notifies the delegate that the banner would be presenting a full screen content.
 */
-(void)bannerWillPresentScreen:(IMBanner*)banner {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adClicked];
}

/**
 * Notifies the delegate that the banner has finished presenting screen.
 */
-(void)bannerDidPresentScreen:(IMBanner*)banner {
    VRTLogWhereAmI();
}

/**
 * Notifies the delegate that the banner will start dismissing the presented screen.
 */
-(void)bannerWillDismissScreen:(IMBanner*)banner {
    VRTLogWhereAmI();
}

/**
 * Notifies the delegate that the banner has dismissed the presented screen.
 */
-(void)bannerDidDismissScreen:(IMBanner*)banner {
    VRTLogWhereAmI();
    [self.customEventShowDelegate adDismissed];
}

/**
 * Notifies the delegate that the user has completed the action to be incentivised with.
 */
-(void)banner:(IMBanner*)banner rewardActionCompletedWithRewards:(NSDictionary*)rewards {
    VRTLogWhereAmI();
}

@end

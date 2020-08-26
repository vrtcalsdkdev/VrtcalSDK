//
//  VRTCustomEventShowDelegate.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VRTModalType.h"
@class UIView;

NS_ASSUME_NONNULL_BEGIN

@protocol VRTCustomEventShowDelegate <NSObject>

@required
- (void)customEventShown;
- (void)customEventClicked;
- (void)customEventWillLeaveApplication;
- (void)customEventWillPresentModal:(VRTModalType)modalType;
- (void)customEventDidPresentModal:(VRTModalType)modalType;
- (void)customEventWillDismissModal:(VRTModalType)modalType;
- (void)customEventDidDismissModal:(VRTModalType)modalType;
- (void)customEventAddSubviewBackIntoBannerAfterResizeOrOnePartExpand:(UIView*)view;
- (void)customEventVideoStarted;
- (void)customEventVideoCompleted;
@end


NS_ASSUME_NONNULL_END

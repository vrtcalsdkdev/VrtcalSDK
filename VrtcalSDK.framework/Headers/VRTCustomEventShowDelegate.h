//
//  VRTCustomEventShowDelegate.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 9/25/18.
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
@class UIView;

NS_ASSUME_NONNULL_BEGIN

@protocol VRTCustomEventShowDelegate <NSObject>

@required
- (void)adShown;
- (void)adClicked;
- (void)adReimplant:(UIView*)view;

@optional
- (void)adDismissed;

@end


NS_ASSUME_NONNULL_END

//
//  VRTCustomEventLoadDelegate.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@protocol VRTCustomEventLoadDelegate <NSObject>

- (void)customEventLoaded;
- (void)customEventFailedToLoadWithError:(NSError*)error;

@end


NS_ASSUME_NONNULL_END

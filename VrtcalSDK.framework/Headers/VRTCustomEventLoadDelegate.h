//
//  VRTCustomEventLoadDelegate.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 9/25/18.
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@protocol VRTCustomEventLoadDelegate <NSObject>

- (void)adLoaded;
- (void)adFailedToLoadWithError:(NSError*)error;

@end


NS_ASSUME_NONNULL_END

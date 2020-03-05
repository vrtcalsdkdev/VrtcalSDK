//
//  VrtcalSdkDelegate.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 9/21/18.
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/**
 * Listener for SDK initialization events.
 */
@protocol VrtcalSdkDelegate <NSObject>

/**
 * SDK successfully initialized.
 */
- (void)sdkInitialized;

@end


NS_ASSUME_NONNULL_END

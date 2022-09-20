//
//  VrtcalSdkDelegate.h
//  VrtcalSDK
//
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

/**
 * SDK initialization failed.
 */
- (void)sdkInitializationFailedWithError:(NSError*)error;



@end


NS_ASSUME_NONNULL_END

//
//  VRTError.h
//  VrtcalSDK
//
//  Copyright © 2019 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//TODO: Change to NS_STRING_ENUM

//Issues with custom event fill
static NSString* const VRTErrorCodeCustomEvent = @"CUSTOM_EVENT";

//Internal errors, typically JSON parsing issues
static NSString* const VRTErrorCodeInternalSdk = @"INTERNAL_SDK";

//The creative that was returned from the server was unusable.
static NSString* const VRTErrorCodeInvalidAdContent = @"INVALID_AD_CONTENT";

//Invalid state transition such as attempting to load when already loaded, etc.
static NSString* const VRTErrorCodeInvalidState = @"INVALID_STATE";

//Invalid parameter provided (typically viewControllerForModalPresentation is nil)
static NSString* const VRTErrorCodeInvalidParam = @"INVALID_PARAM";

//No Advertisers decided to buy the opportunity in time.
static NSString* const VRTErrorCodeNoFill = @"NO_FILL";

//The server responded in an unexpected way: non-200 HTTP Status code, response json missing important keys, etc.
static NSString* const VRTErrorCodeServerError = @"SERVER_ERROR";

//Json Getter Timed Out
static NSString* const VRTErrorCodeTimedOut = @"TIMED_OUT";

//Too many requests are being made 
static NSString* const VRTErrorCodeThrottled = @"THROTTLED";

//Catch-all, typically used for Exceptions
static NSString* const VRTErrorCodeUnknown = @"UNKNOWN";

@interface VRTError : NSError

/**
 * Converts an NSError into a VRTError. If the error is already a VRTError, returns the VRTError.
 */
+ (VRTError*)errorWithCode:(NSString* const)code error:(NSError*)error;

+ (VRTError*)errorWithCode:(NSString* const)code format:(NSString*)formatString, ... ;
+ (VRTError*)errorWithCode:(NSString* const)code message:(NSString*)message;

@end


NS_ASSUME_NONNULL_END

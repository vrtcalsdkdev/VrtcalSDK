//
//  VRTLog.h
//  VrtcalSDK
//
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/**
 * Enum representing different levels of log message priority
 */
typedef NS_ENUM(NSInteger, VRTLogLevel) {
    VRTLogLevelInfo     = 0,    //Debug messages, intended to be read by SDK devs and support team
    VRTLogLevelWarn     = 1,    //Pub-facing messages intended to help diagnose minor issues (lack of fill, misconfiguration)
    VRTLogLevelError    = 2,    //Pub-facing messages intended to help diagnose major issues
    VRTLogLevelAlways   = 3     //Pub-facing messaged intended to never be squelched
};

/**
 * Users should interact with VRTLog by using the following macros.
 * They will pass the file, line and function that the logging macro was invoked from.
 */
#define VRTLogWhereAmI() [VRTLog log:@"" logLevel:VRTLogLevelInfo file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__]
#define VRTLogInfo( s, ... ) [VRTLog log:[NSString stringWithFormat:(s), ##__VA_ARGS__] logLevel:VRTLogLevelInfo file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__]
#define VRTLogWarn( s, ... ) [VRTLog log:[NSString stringWithFormat:(s), ##__VA_ARGS__] logLevel:VRTLogLevelWarn file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__]
#define VRTLogError( s, ... ) [VRTLog log:[NSString stringWithFormat:(s), ##__VA_ARGS__] logLevel:VRTLogLevelError file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__]
#define VRTLogAlways( s, ... ) [VRTLog log:[NSString stringWithFormat:(s), ##__VA_ARGS__] logLevel:VRTLogLevelAlways file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__]

@interface VRTLog : NSObject

+ (instancetype)singleton;

+ (void)log:(nonnull NSString *)message
       logLevel:(VRTLogLevel)logLevel
           file:(nullable const char *)file
           line:(unsigned int)line
       function:(nullable const char *)function;


/**
 * Sets whether or not the SDK will write to a log file. This is useful for debugging and verification of log messages.
 */
@property BOOL writeToFile;

/**
 * Wipes the contents of the log file.
 */
- (void) clearLogFile;

/**
 * Gets the contents of the log file.
 */
- (NSString*) getLogFileAsString;

/**
 * Converts VRTLogLevel to String
 */
+ (NSString *)logLevelDescription:(VRTLogLevel)logLevel;

@end


NS_ASSUME_NONNULL_END

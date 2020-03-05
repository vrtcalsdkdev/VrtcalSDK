//
//  VRTLog.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 9/22/18.
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
    VRTLogLevelError    = 2,    //Pub-facing messages intedned to help diagnose major issues
    VRTLogLevelNone     = 3     //Used to squelch all logging messages
};

/**
 * Users should interact with VRTLog by using the following macros.
 * They will pass the file, line and function that the logging macro was invoked from.
 */
#define VRTLogWhereAmI() [VRTLog log:@"" logLevel:VRTLogLevelInfo file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__]
#define VRTLogInfo( s, ... ) [VRTLog log:[NSString stringWithFormat:(s), ##__VA_ARGS__] logLevel:VRTLogLevelInfo file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__]
#define VRTLogWarn( s, ... ) [VRTLog log:[NSString stringWithFormat:(s), ##__VA_ARGS__] logLevel:VRTLogLevelWarn file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__]
#define VRTLogError( s, ... ) [VRTLog log:[NSString stringWithFormat:(s), ##__VA_ARGS__] logLevel:VRTLogLevelError file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__]

@interface VRTLog : NSObject

/**
 * This is the minimum level a message has to be sent with for the SDK to log it.
 * Thus, VRTLogLevelInfo results in all messages being logged, and VRTLogLevelNone results in no messages being logged.
 */
@property (nonatomic, assign) VRTLogLevel logLevel;

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

@end


NS_ASSUME_NONNULL_END

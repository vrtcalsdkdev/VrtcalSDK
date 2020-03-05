//
//  VRTCustomEvent.h
//  VrtcalSDK
//
//  Created by Sung-Ho Tsai (VRTCAL) on 9/25/18.
//  Copyright © 2018 VRTCAL. All rights reserved.
//

#import <Foundation/Foundation.h>
@class VRTCustomEventConfig;
@class UIViewController;
#import "VRTCustomEventLoadDelegate.h"
#import "VRTCustomEventShowDelegate.h"

NS_ASSUME_NONNULL_BEGIN


/**
 * Abstract interface for all custom events.
 */
@interface VRTAbstractCustomEvent : NSObject

@property VRTCustomEventConfig *customEventConfig;
@property (weak) id viewControllerDelegate;
@property (weak, nonatomic) id <VRTCustomEventLoadDelegate> customEventLoadDelegate;
@property (weak, nonatomic) id <VRTCustomEventShowDelegate> customEventShowDelegate;

-(instancetype) init NS_UNAVAILABLE;
-(instancetype) initWithCustomEventConfig:(VRTCustomEventConfig*)customEventConfig viewControllerDelegate:(id)viewControllerDelegate NS_DESIGNATED_INITIALIZER;


-(void)trackAdRequested;
-(void)trackAdReceived;
-(void)trackAdImpressed;

@end


NS_ASSUME_NONNULL_END

//
//  VRTModalType.h
//  VrtcalSDK
//
//  Created by Scott McCoy on 6/15/20.
//  Copyright © 2020 VRTCAL. All rights reserved.
//

/**
 * Enum representing the initialization state of the SDK.
 */
typedef NS_ENUM(NSInteger, VRTModalType) {
    VRTModalTypeUnknown = -1,
    VRTModalTypeInterstitial = 0,
    VRTModalTypeMraidExpand = 1,
    VRTModalTypeMraidResize = 2,
    VRTModalTypeMraidVideo = 3,
    VRTModalTypeStoreKit = 4
};

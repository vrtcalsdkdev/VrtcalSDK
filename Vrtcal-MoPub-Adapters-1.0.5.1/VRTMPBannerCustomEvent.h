#import <Foundation/Foundation.h>
#import <VrtcalSDK/VrtcalSDK.h>

#if __has_include(<MoPub/MoPub.h>)
#import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDKFramework/MoPub.h>)
#import <MoPubSDKFramework/MoPub.h>
#else
#import "MPBannerCustomEvent.h"
#endif

//MoPub Banner Adapter, Vrtcal as Secondary
@interface VRTMPBannerCustomEvent : MPBannerCustomEvent <VRTBannerDelegate>
@property (strong, nonatomic) VRTBanner *vrtBanner;
@end

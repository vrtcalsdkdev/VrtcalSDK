//Header
#import "VRTGADCustomEventInterstitial.h"

//Dependencies
#import <VrtcalSDK/VrtcalSDK.h>

@interface VRTGADCustomEventInterstitial () <VRTInterstitialDelegate>

@property (nonatomic, weak) UIViewController *rootViewController;
@property (nonatomic, strong) VRTInterstitial *vrtInterstitial;

@end

@implementation VRTGADCustomEventInterstitial

@synthesize delegate;

#pragma mark - GADCustomEventInterstitial



- (void)requestInterstitialAdWithParameter:(NSString * _Nullable)serverParameter
                                     label:(NSString * _Nullable)serverLabel
                                   request:(nonnull GADCustomEventRequest *)request {
    
    NSError *jsonError = nil;
    NSData *jsonData = [serverParameter dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *jsonDict = [NSJSONSerialization JSONObjectWithData:jsonData options:0 error:&jsonError];
    if (!jsonDict) {
        VRTError *error = [VRTError errorWithCode:VRTErrorCodeCustomEvent format:@"VrtcalSDK unable to extract json from serverParameter: %@", serverParameter];
        [self.delegate customEventInterstitial:self didFailAd:error];
        return;
    }
    
    NSString *strZid = jsonDict[@"zid"];
    int zid = [strZid intValue];
    if (zid == 0) {
        VRTError *error = [VRTError errorWithCode:VRTErrorCodeCustomEvent format:@"VrtcalSDK Unable to extract ZoneID from jsonDict: %@", jsonDict];
        [self.delegate customEventInterstitial:self didFailAd:error];
        return;
    }

    self.vrtInterstitial = [[VRTInterstitial alloc] init];
    self.vrtInterstitial.adDelegate = self;
    [self.vrtInterstitial loadAd:zid];
}

- (void)presentFromRootViewController:(nonnull UIViewController *)rootViewController {
    self.rootViewController = rootViewController;
    [self.vrtInterstitial showAd];
}

#pragma mark - VRTInterstitialDelegate

- (void)vrtInterstitialAdClicked:(nonnull VRTInterstitial *)vrtInterstitial {
    [self.delegate customEventInterstitialWasClicked:self];
    [self.delegate customEventInterstitialWillLeaveApplication:self];
}

- (void)vrtInterstitialAdDismissed:(nonnull VRTInterstitial *)vrtInterstitial {
    [self.delegate customEventInterstitialWillDismiss:self];
    [self.delegate customEventInterstitialDidDismiss:self];
}

- (void)vrtInterstitialAdFailedToLoad:(nonnull VRTInterstitial *)vrtInterstitial error:(nonnull NSError *)error {
    [self.delegate customEventInterstitial:self didFailAd:error];
}

- (void)vrtInterstitialAdFailedToShow:(nonnull VRTInterstitial *)vrtInterstitial error:(nonnull NSError *)error {
    [self.delegate customEventInterstitial:self didFailAd:error];
}

- (void)vrtInterstitialAdLoaded:(nonnull VRTInterstitial *)vrtInterstitial {
    [self.delegate customEventInterstitialDidReceiveAd:self];
}

- (void)vrtInterstitialAdShown:(nonnull VRTInterstitial *)vrtInterstitial {
    [self.delegate customEventInterstitialWillPresent:self];
}

- (nonnull UIViewController *)vrtViewControllerForModalPresentation {
    return self.rootViewController;
}

@end

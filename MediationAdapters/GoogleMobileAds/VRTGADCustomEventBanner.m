//Header
#import "VRTGADCustomEventBanner.h"

//Dependencies
#import <VrtcalSDK/VrtcalSDK.h>

@interface VRTGADCustomEventBanner () <VRTBannerDelegate>

@property (strong, nonatomic) VRTBanner *vrtBanner;

@end


@implementation VRTGADCustomEventBanner

@synthesize delegate;

- (void)requestBannerAd:(GADAdSize)adSize
              parameter:(NSString *)serverParameter
                  label:(NSString *)serverLabel
                request:(GADCustomEventRequest *)request {

    NSError *jsonError = nil;
    NSData *jsonData = [serverParameter dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *jsonDict = [NSJSONSerialization JSONObjectWithData:jsonData options:0 error:&jsonError];
    if (!jsonDict) {
        VRTError *error = [VRTError errorWithCode:VRTErrorCodeCustomEvent format:@"VrtcalSDK unable to extract json from serverParameter: %@", serverParameter];
        [self.delegate customEventBanner:self didFailAd:error];
        return;
    }
    
    NSString *strZid = jsonDict[@"zid"];
    int zid = [strZid intValue];
    if (zid == 0) {
        VRTError *error = [VRTError errorWithCode:VRTErrorCodeCustomEvent format:@"VrtcalSDK Unable to extract ZoneID from jsonDict: %@", jsonDict];
        [self.delegate customEventBanner:self didFailAd:error];
        return;
    }

    self.vrtBanner = [[VRTBanner alloc] initWithFrame:CGRectMake(0, 0, adSize.size.width, adSize.size.height)];
    self.vrtBanner.adDelegate = self;
    [self.vrtBanner loadAd:zid];
}

#pragma mark - VRTBanner

-(void)vrtBannerAdLoaded:(VRTBanner *)vrtBanner {
    [self.delegate customEventBanner:self didReceiveAd:vrtBanner];
}

-(void)vrtBannerAdFailedToLoad:(VRTBanner *)vrtBanner error:(NSError *)error {
    [self.delegate customEventBanner:self didFailAd:error];
}

-(void)vrtBannerAdClicked:(VRTBanner *)vrtBanner {
    [self.delegate customEventBannerWasClicked:self];
    [self.delegate customEventBannerWillPresentModal:self];
}

-(UIViewController*)vrtViewControllerForModalPresentation{
    return self.delegate.viewControllerForPresentingModalView;
}

@end
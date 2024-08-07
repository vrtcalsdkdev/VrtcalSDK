#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef VRTCALSDK_SWIFT_H
#define VRTCALSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="VrtcalSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)









/// Abstract interface for all custom events.
/// Must be NSObject for ObjcClassFinder to be able to find subclasses of it.
SWIFT_CLASS("_TtC9VrtcalSDK22VRTAbstractCustomEvent")
@interface VRTAbstractCustomEvent : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Interface for banner custom events.
SWIFT_CLASS("_TtC9VrtcalSDK28VRTAbstractBannerCustomEvent")
@interface VRTAbstractBannerCustomEvent : VRTAbstractCustomEvent
@end



SWIFT_CLASS("_TtC9VrtcalSDK34VRTAbstractInterstitialCustomEvent")
@interface VRTAbstractInterstitialCustomEvent : VRTAbstractCustomEvent
@end

@protocol VRTBannerDelegate;
@class NSCoder;

SWIFT_CLASS("_TtC9VrtcalSDK9VRTBanner")
@interface VRTBanner : UIView
/// Banner ad delegate, used to listen to banner events, such as ad loaded,
/// ad failed events
@property (nonatomic, weak) id <VRTBannerDelegate> _Nullable adDelegate;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Asynchronously loads a banner ad. Any outcome is communicated via adDelegate.
/// \param zoneId Zone ID
///
- (void)loadAd:(NSInteger)zoneId;
/// Used for DAAST ads. Should be called after did vrtBannerAdLoaded to begin playback.
- (void)playDAAST;
@end

@class UIViewController;

SWIFT_PROTOCOL("_TtP9VrtcalSDK22ViewControllerDelegate_")
@protocol ViewControllerDelegate
/// Must be implemented. Passes the host view controller to the ad.
- (UIViewController * _Nullable)vrtViewControllerForModalPresentation SWIFT_WARN_UNUSED_RESULT;
@end

enum VRTModalType : NSInteger;

/// Listner for banner ad events.
SWIFT_PROTOCOL("_TtP9VrtcalSDK17VRTBannerDelegate_")
@protocol VRTBannerDelegate <ViewControllerDelegate>
/// Banner ad loaded and shown.
/// \param vrtBanner Banner object used to load ad
///
- (void)vrtBannerAdLoaded:(VRTBanner * _Nonnull)vrtBanner withAdSize:(CGSize)adSize;
/// Banner ad failed to load.
/// \param vrtBanner Banner object used to load ad
///
/// \param error Load error
///
- (void)vrtBannerAdFailedToLoad:(VRTBanner * _Nonnull)vrtBanner error:(NSError * _Nonnull)error;
/// Banner ad clicked.
/// \param vrtBanner Banner object used to load ad
///
- (void)vrtBannerAdClicked:(VRTBanner * _Nonnull)vrtBanner;
/// Banner ad is about to begin presenting a modal view.
/// \param vrtBanner Banner object used to load ad
///
/// \param modalType The type of modal presented
///
- (void)vrtBannerWillPresentModal:(VRTBanner * _Nonnull)vrtBanner of:(enum VRTModalType)modalType;
/// Banner ad has finished presenting a modal view
/// \param vrtBanner Banner object used to load ad
///
/// \param modalType The type of modal presented
///
- (void)vrtBannerDidPresentModal:(VRTBanner * _Nonnull)vrtBanner of:(enum VRTModalType)modalType;
/// Banner ad is about to begin dismissing a modal view.
/// \param vrtBanner Banner object used to load ad
///
/// \param modalType The type of modal presented
///
- (void)vrtBannerWillDismissModal:(VRTBanner * _Nonnull)vrtBanner of:(enum VRTModalType)modalType;
/// Banner ad has finished dismissing a modal view.
/// \param vrtBanner Banner object used to load ad
///
/// \param modalType The type of modal presented
///
- (void)vrtBannerDidDismissModal:(VRTBanner * _Nonnull)vrtBanner of:(enum VRTModalType)modalType;
/// The application will be backgrounded to launch the browser. The user must have interacted with the ad.
/// \param vrtBanner Banner object used to load ad
///
- (void)vrtBannerAdWillLeaveApplication:(VRTBanner * _Nonnull)vrtBanner;
/// The banner has started playing a video.
/// \param vrtBanner Banner object used to load ad
///
- (void)vrtBannerVideoStarted:(VRTBanner * _Nonnull)vrtBanner;
/// The banner has completed playing a video.
/// \param vrtBanner Banner object used to load ad
///
- (void)vrtBannerVideoCompleted:(VRTBanner * _Nonnull)vrtBanner;
@end

@protocol VRTInterstitialDelegate;

SWIFT_CLASS("_TtC9VrtcalSDK15VRTInterstitial")
@interface VRTInterstitial : NSObject
@property (nonatomic, weak) id <VRTInterstitialDelegate> _Nullable adDelegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)loadAd:(NSInteger)zoneId;
- (void)showAd;
@end


SWIFT_PROTOCOL("_TtP9VrtcalSDK23VRTInterstitialDelegate_")
@protocol VRTInterstitialDelegate <ViewControllerDelegate>
/// Interstitial Ad failed to load.
/// \param vrtInterstitial Interstitial object used to load ad
///
- (void)vrtInterstitialAdLoaded:(VRTInterstitial * _Nonnull)vrtInterstitial;
/// Interstitial Ad failed to load.
/// \param vrtInterstitial Interstitial object used to load ad
///
/// \param error Load error
///
- (void)vrtInterstitialAdFailedToLoad:(VRTInterstitial * _Nonnull)vrtInterstitial error:(NSError * _Nonnull)error;
/// Show has been invoked and the interstitial animation will begin.
/// \param vrtInterstitial Interstitial object used to load ad
///
- (void)vrtInterstitialAdWillShow:(VRTInterstitial * _Nonnull)vrtInterstitial;
/// Show has been invoked and the interstitial animation is complete.
/// \param vrtInterstitial Interstitial object used to load ad
///
- (void)vrtInterstitialAdDidShow:(VRTInterstitial * _Nonnull)vrtInterstitial;
/// Could not show interstitial ad, either due to a failure to load, already showing or other error.
/// \param vrtInterstitial Interstitial object used to load ad
///
/// \param error Show error
///
- (void)vrtInterstitialAdFailedToShow:(VRTInterstitial * _Nonnull)vrtInterstitial error:(NSError * _Nonnull)error;
/// Interstitial ad clicked.
/// \param vrtInterstitial Interstitial object used to load ad
///
- (void)vrtInterstitialAdClicked:(VRTInterstitial * _Nonnull)vrtInterstitial;
/// The application will be backgrounded to launch the browser. The user must have interacted with the ad.
/// \param vrtInterstitial Interstitial object used to load ad
///
- (void)vrtInterstitialAdWillLeaveApplication:(VRTInterstitial * _Nonnull)vrtInterstitial;
/// Close button tapped and interstitial animation begun.
/// \param vrtInterstitial Interstitial object used to load ad
///
- (void)vrtInterstitialAdWillDismiss:(VRTInterstitial * _Nonnull)vrtInterstitial;
/// Close button tapped and interstitial animation complete.
/// \param vrtInterstitial Interstitial object used to load ad
///
- (void)vrtInterstitialAdDidDismiss:(VRTInterstitial * _Nonnull)vrtInterstitial;
/// The interstitial has started playing a video.
/// \param vrtInterstitial Interstitial object used to load ad
///
- (void)vrtInterstitialVideoStarted:(VRTInterstitial * _Nonnull)vrtInterstitial;
/// The interstitial has completed playing a video.
/// \param vrtInterstitial Interstitial object used to load ad
///
- (void)vrtInterstitialVideoCompleted:(VRTInterstitial * _Nonnull)vrtInterstitial;
@end

typedef SWIFT_ENUM(NSInteger, VRTModalType, open) {
  VRTModalTypeUnknown = -1,
  VRTModalTypeInterstitial = 0,
  VRTModalTypeMraidExpand = 1,
  VRTModalTypeMraidResize = 2,
  VRTModalTypeMraidVideo = 3,
  VRTModalTypeStoreKit = 4,
};

@protocol VRTNativeDelegate;

SWIFT_CLASS("_TtC9VrtcalSDK9VRTNative")
@interface VRTNative : NSObject
@property (nonatomic, strong) id <VRTNativeDelegate> _Nullable adDelegate;
- (void)loadAd:(NSInteger)zoneId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class VRTNativeDomainModel;

SWIFT_PROTOCOL("_TtP9VrtcalSDK17VRTNativeDelegate_")
@protocol VRTNativeDelegate
- (void)vrtNativeAdLoadedWithVrtNative:(VRTNative * _Nonnull)vrtNative vrtNativeDomainModel:(VRTNativeDomainModel * _Nonnull)vrtNativeDomainModel;
- (void)vrtNativeAdFailedToLoadWithVrtNative:(VRTNative * _Nonnull)vrtNative error:(NSError * _Nonnull)error;
@end

@class NSString;

SWIFT_CLASS("_TtC9VrtcalSDK20VRTNativeDomainModel")
@interface VRTNativeDomainModel : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@protocol VrtcalSdkDelegate;
@class NSURL;

SWIFT_CLASS("_TtC9VrtcalSDK9VrtcalSDK")
@interface VrtcalSDK : NSObject
/// Initializes the Vrtcal SDK. It is recommended that you call this method
/// in applicationDidFinishLaunchingWithOptions.
/// \param appId App ID
///
/// \param sdkDelegate SDK delegate, to be notified of SDK initialization status
///
+ (void)initializeSdkWithAppId:(NSInteger)appId sdkDelegate:(id <VrtcalSdkDelegate> _Nullable)sdkDelegate;
/// Sets the URL that the Vrtcal SDK will connect to.
/// \param serverUrl Server URL
///
+ (void)setServerUrl:(NSURL * _Nonnull)serverUrl;
/// Returns the version number of the SDK
+ (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
+ (void)setPiiData:(NSString * _Nullable)piiData;
+ (void)setPiiDataTypes:(NSString * _Nullable)piiDataTypes;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Listener for SDK initialization events.
SWIFT_PROTOCOL("_TtP9VrtcalSDK17VrtcalSdkDelegate_")
@protocol VrtcalSdkDelegate
/// SDK successfully initialized.
- (void)sdkInitialized;
/// SDK initialization failed.
- (void)sdkInitializationFailedWithError:(NSError * _Nonnull)error;
@end


#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif

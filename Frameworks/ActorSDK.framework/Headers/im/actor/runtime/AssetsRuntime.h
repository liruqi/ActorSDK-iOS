//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/AssetsRuntime.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeAssetsRuntime")
#ifdef RESTRICT_ImActorRuntimeAssetsRuntime
#define INCLUDE_ALL_ImActorRuntimeAssetsRuntime 0
#else
#define INCLUDE_ALL_ImActorRuntimeAssetsRuntime 1
#endif
#undef RESTRICT_ImActorRuntimeAssetsRuntime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAssetsRuntime_) && (INCLUDE_ALL_ImActorRuntimeAssetsRuntime || defined(INCLUDE_ARAssetsRuntime))
#define ARAssetsRuntime_

@class IOSByteArray;

@protocol ARAssetsRuntime < NSObject, JavaObject >

- (jboolean)hasAssetWithNSString:(NSString *)name;

- (NSString *)loadAssetWithNSString:(NSString *)name;

- (IOSByteArray *)loadBinAssetWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAssetsRuntime)

J2OBJC_TYPE_LITERAL_HEADER(ARAssetsRuntime)

#define ImActorRuntimeAssetsRuntime ARAssetsRuntime

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeAssetsRuntime")

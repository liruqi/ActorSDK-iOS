//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-cocoa/src/main/java/im/actor/runtime/cocoa/CocoaCryptoProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCocoaCocoaCryptoProvider")
#ifdef RESTRICT_ImActorRuntimeCocoaCocoaCryptoProvider
#define INCLUDE_ALL_ImActorRuntimeCocoaCocoaCryptoProvider 0
#else
#define INCLUDE_ALL_ImActorRuntimeCocoaCocoaCryptoProvider 1
#endif
#undef RESTRICT_ImActorRuntimeCocoaCocoaCryptoProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCocoaCryptoProvider_) && (INCLUDE_ALL_ImActorRuntimeCocoaCocoaCryptoProvider || defined(INCLUDE_ARCocoaCryptoProvider))
#define ARCocoaCryptoProvider_

#define RESTRICT_ImActorRuntimeGenericGenericCryptoProvider 1
#define INCLUDE_ARGenericCryptoProvider 1
#include "../../../../im/actor/runtime/generic/GenericCryptoProvider.h"

@class IOSByteArray;
@protocol ARBlockCipher;
@protocol ARCocoaCryptoProxyProvider;
@protocol ARDigest;

@interface ARCocoaCryptoProvider : ARGenericCryptoProvider

#pragma mark Public

- (instancetype)init;

- (id<ARBlockCipher>)AES128WithByteArray:(IOSByteArray *)key;

+ (id<ARCocoaCryptoProxyProvider>)getProxyProvider;

+ (void)setProxyProviderWithARCocoaCryptoProxyProvider:(id<ARCocoaCryptoProxyProvider>)proxyProvider;

- (id<ARDigest>)SHA256;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCocoaCryptoProvider)

FOUNDATION_EXPORT id<ARCocoaCryptoProxyProvider> ARCocoaCryptoProvider_getProxyProvider();

FOUNDATION_EXPORT void ARCocoaCryptoProvider_setProxyProviderWithARCocoaCryptoProxyProvider_(id<ARCocoaCryptoProxyProvider> proxyProvider);

FOUNDATION_EXPORT void ARCocoaCryptoProvider_init(ARCocoaCryptoProvider *self);

FOUNDATION_EXPORT ARCocoaCryptoProvider *new_ARCocoaCryptoProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCocoaCryptoProvider *create_ARCocoaCryptoProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARCocoaCryptoProvider)

@compatibility_alias ImActorRuntimeCocoaCocoaCryptoProvider ARCocoaCryptoProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCocoaCocoaCryptoProvider")

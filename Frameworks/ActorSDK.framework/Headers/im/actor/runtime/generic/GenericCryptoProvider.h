//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-generic/src/main/java/im/actor/runtime/generic/GenericCryptoProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeGenericGenericCryptoProvider")
#ifdef RESTRICT_ImActorRuntimeGenericGenericCryptoProvider
#define INCLUDE_ALL_ImActorRuntimeGenericGenericCryptoProvider 0
#else
#define INCLUDE_ALL_ImActorRuntimeGenericGenericCryptoProvider 1
#endif
#undef RESTRICT_ImActorRuntimeGenericGenericCryptoProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARGenericCryptoProvider_) && (INCLUDE_ALL_ImActorRuntimeGenericGenericCryptoProvider || defined(INCLUDE_ARGenericCryptoProvider))
#define ARGenericCryptoProvider_

#define RESTRICT_ImActorRuntimeDefaultCryptoRuntime 1
#define INCLUDE_ARDefaultCryptoRuntime 1
#include "../../../../im/actor/runtime/DefaultCryptoRuntime.h"

@interface ARGenericCryptoProvider : ARDefaultCryptoRuntime

#pragma mark Public

- (instancetype)init;

- (void)waitForCryptoLoaded;

@end

J2OBJC_STATIC_INIT(ARGenericCryptoProvider)

FOUNDATION_EXPORT void ARGenericCryptoProvider_init(ARGenericCryptoProvider *self);

FOUNDATION_EXPORT ARGenericCryptoProvider *new_ARGenericCryptoProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARGenericCryptoProvider *create_ARGenericCryptoProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARGenericCryptoProvider)

@compatibility_alias ImActorRuntimeGenericGenericCryptoProvider ARGenericCryptoProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeGenericGenericCryptoProvider")

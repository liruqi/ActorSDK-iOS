//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-generic/src/main/java/im/actor/runtime/generic/GenericNetworkProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeGenericGenericNetworkProvider")
#ifdef RESTRICT_ImActorRuntimeGenericGenericNetworkProvider
#define INCLUDE_ALL_ImActorRuntimeGenericGenericNetworkProvider 0
#else
#define INCLUDE_ALL_ImActorRuntimeGenericGenericNetworkProvider 1
#endif
#undef RESTRICT_ImActorRuntimeGenericGenericNetworkProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARGenericNetworkProvider_) && (INCLUDE_ALL_ImActorRuntimeGenericGenericNetworkProvider || defined(INCLUDE_ARGenericNetworkProvider))
#define ARGenericNetworkProvider_

#define RESTRICT_ImActorRuntimeMtprotoManagedNetworkProvider 1
#define INCLUDE_ARManagedNetworkProvider 1
#include "../../../../im/actor/runtime/mtproto/ManagedNetworkProvider.h"

@interface ARGenericNetworkProvider : ARManagedNetworkProvider

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ARGenericNetworkProvider)

FOUNDATION_EXPORT void ARGenericNetworkProvider_init(ARGenericNetworkProvider *self);

FOUNDATION_EXPORT ARGenericNetworkProvider *new_ARGenericNetworkProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARGenericNetworkProvider *create_ARGenericNetworkProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARGenericNetworkProvider)

@compatibility_alias ImActorRuntimeGenericGenericNetworkProvider ARGenericNetworkProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeGenericGenericNetworkProvider")

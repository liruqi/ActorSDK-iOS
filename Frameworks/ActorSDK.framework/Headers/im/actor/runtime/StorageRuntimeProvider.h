//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-cocoa/src/main/java/im/actor/runtime/StorageRuntimeProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeStorageRuntimeProvider")
#ifdef RESTRICT_ImActorRuntimeStorageRuntimeProvider
#define INCLUDE_ALL_ImActorRuntimeStorageRuntimeProvider 0
#else
#define INCLUDE_ALL_ImActorRuntimeStorageRuntimeProvider 1
#endif
#undef RESTRICT_ImActorRuntimeStorageRuntimeProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARStorageRuntimeProvider_) && (INCLUDE_ALL_ImActorRuntimeStorageRuntimeProvider || defined(INCLUDE_ARStorageRuntimeProvider))
#define ARStorageRuntimeProvider_

#define RESTRICT_ImActorRuntimeCocoaCocoaStorageProxyProvider 1
#define INCLUDE_ARCocoaStorageProxyProvider 1
#include "../../../im/actor/runtime/cocoa/CocoaStorageProxyProvider.h"

@interface ARStorageRuntimeProvider : ARCocoaStorageProxyProvider

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ARStorageRuntimeProvider)

FOUNDATION_EXPORT void ARStorageRuntimeProvider_init(ARStorageRuntimeProvider *self);

FOUNDATION_EXPORT ARStorageRuntimeProvider *new_ARStorageRuntimeProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARStorageRuntimeProvider *create_ARStorageRuntimeProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARStorageRuntimeProvider)

@compatibility_alias ImActorRuntimeStorageRuntimeProvider ARStorageRuntimeProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeStorageRuntimeProvider")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-cocoa/src/main/java/im/actor/runtime/DispatcherRuntimeProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeDispatcherRuntimeProvider")
#ifdef RESTRICT_ImActorRuntimeDispatcherRuntimeProvider
#define INCLUDE_ALL_ImActorRuntimeDispatcherRuntimeProvider 0
#else
#define INCLUDE_ALL_ImActorRuntimeDispatcherRuntimeProvider 1
#endif
#undef RESTRICT_ImActorRuntimeDispatcherRuntimeProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDispatcherRuntimeProvider_) && (INCLUDE_ALL_ImActorRuntimeDispatcherRuntimeProvider || defined(INCLUDE_ARDispatcherRuntimeProvider))
#define ARDispatcherRuntimeProvider_

#define RESTRICT_ImActorRuntimeCocoaCocoaDispatcherProvider 1
#define INCLUDE_ARCocoaDispatcherProvider 1
#include "../../../im/actor/runtime/cocoa/CocoaDispatcherProvider.h"

@interface ARDispatcherRuntimeProvider : ARCocoaDispatcherProvider

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDispatcherRuntimeProvider)

FOUNDATION_EXPORT void ARDispatcherRuntimeProvider_init(ARDispatcherRuntimeProvider *self);

FOUNDATION_EXPORT ARDispatcherRuntimeProvider *new_ARDispatcherRuntimeProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDispatcherRuntimeProvider *create_ARDispatcherRuntimeProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARDispatcherRuntimeProvider)

@compatibility_alias ImActorRuntimeDispatcherRuntimeProvider ARDispatcherRuntimeProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeDispatcherRuntimeProvider")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-cocoa/src/main/java/im/actor/runtime/EnginesRuntimeProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeEnginesRuntimeProvider")
#ifdef RESTRICT_ImActorRuntimeEnginesRuntimeProvider
#define INCLUDE_ALL_ImActorRuntimeEnginesRuntimeProvider 0
#else
#define INCLUDE_ALL_ImActorRuntimeEnginesRuntimeProvider 1
#endif
#undef RESTRICT_ImActorRuntimeEnginesRuntimeProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AREnginesRuntimeProvider_) && (INCLUDE_ALL_ImActorRuntimeEnginesRuntimeProvider || defined(INCLUDE_AREnginesRuntimeProvider))
#define AREnginesRuntimeProvider_

#define RESTRICT_ImActorRuntimeCocoaCocoaEnginesProvider 1
#define INCLUDE_ARCocoaEnginesProvider 1
#include "../../../im/actor/runtime/cocoa/CocoaEnginesProvider.h"

@interface AREnginesRuntimeProvider : ARCocoaEnginesProvider

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AREnginesRuntimeProvider)

FOUNDATION_EXPORT void AREnginesRuntimeProvider_init(AREnginesRuntimeProvider *self);

FOUNDATION_EXPORT AREnginesRuntimeProvider *new_AREnginesRuntimeProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AREnginesRuntimeProvider *create_AREnginesRuntimeProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(AREnginesRuntimeProvider)

@compatibility_alias ImActorRuntimeEnginesRuntimeProvider AREnginesRuntimeProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeEnginesRuntimeProvider")

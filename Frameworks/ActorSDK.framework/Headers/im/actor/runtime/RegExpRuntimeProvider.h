//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-cocoa/src/main/java/im/actor/runtime/RegExpRuntimeProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeRegExpRuntimeProvider")
#ifdef RESTRICT_ImActorRuntimeRegExpRuntimeProvider
#define INCLUDE_ALL_ImActorRuntimeRegExpRuntimeProvider 0
#else
#define INCLUDE_ALL_ImActorRuntimeRegExpRuntimeProvider 1
#endif
#undef RESTRICT_ImActorRuntimeRegExpRuntimeProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRegExpRuntimeProvider_) && (INCLUDE_ALL_ImActorRuntimeRegExpRuntimeProvider || defined(INCLUDE_ARRegExpRuntimeProvider))
#define ARRegExpRuntimeProvider_

#define RESTRICT_ImActorRuntimeGenericGenericRegExpProvider 1
#define INCLUDE_ARGenericRegExpProvider 1
#include "../../../im/actor/runtime/generic/GenericRegExpProvider.h"

@interface ARRegExpRuntimeProvider : ARGenericRegExpProvider

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRegExpRuntimeProvider)

FOUNDATION_EXPORT void ARRegExpRuntimeProvider_init(ARRegExpRuntimeProvider *self);

FOUNDATION_EXPORT ARRegExpRuntimeProvider *new_ARRegExpRuntimeProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRegExpRuntimeProvider *create_ARRegExpRuntimeProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRegExpRuntimeProvider)

@compatibility_alias ImActorRuntimeRegExpRuntimeProvider ARRegExpRuntimeProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeRegExpRuntimeProvider")

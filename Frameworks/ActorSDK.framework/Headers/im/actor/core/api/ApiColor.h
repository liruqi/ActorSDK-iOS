//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiColor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiColor")
#ifdef RESTRICT_ImActorCoreApiApiColor
#define INCLUDE_ALL_ImActorCoreApiApiColor 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiColor 1
#endif
#undef RESTRICT_ImActorCoreApiApiColor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiColor_) && (INCLUDE_ALL_ImActorCoreApiApiColor || defined(INCLUDE_ARApiColor))
#define ARApiColor_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/actor/runtime/bser/BserObject.h"

@class IOSByteArray;

@interface ARApiColor : ARBserObject

#pragma mark Public

- (instancetype)init;

- (IOSByteArray *)buildContainer;

+ (ARApiColor *)fromBytesWithByteArray:(IOSByteArray *)src;

- (jint)getHeader;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiColor)

FOUNDATION_EXPORT ARApiColor *ARApiColor_fromBytesWithByteArray_(IOSByteArray *src);

FOUNDATION_EXPORT void ARApiColor_init(ARApiColor *self);

J2OBJC_TYPE_LITERAL_HEADER(ARApiColor)

@compatibility_alias ImActorCoreApiApiColor ARApiColor;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiColor")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiMessage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiMessage")
#ifdef RESTRICT_ImActorCoreApiApiMessage
#define INCLUDE_ALL_ImActorCoreApiApiMessage 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiMessage 1
#endif
#undef RESTRICT_ImActorCoreApiApiMessage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiMessage_) && (INCLUDE_ALL_ImActorCoreApiApiMessage || defined(INCLUDE_ARApiMessage))
#define ARApiMessage_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/actor/runtime/bser/BserObject.h"

@class IOSByteArray;

@interface ARApiMessage : ARBserObject

#pragma mark Public

- (instancetype)init;

- (IOSByteArray *)buildContainer;

+ (ARApiMessage *)fromBytesWithByteArray:(IOSByteArray *)src;

- (jint)getHeader;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiMessage)

FOUNDATION_EXPORT ARApiMessage *ARApiMessage_fromBytesWithByteArray_(IOSByteArray *src);

FOUNDATION_EXPORT void ARApiMessage_init(ARApiMessage *self);

J2OBJC_TYPE_LITERAL_HEADER(ARApiMessage)

@compatibility_alias ImActorCoreApiApiMessage ARApiMessage;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiMessage")

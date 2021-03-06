//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiNegotinationSuccessful.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiNegotinationSuccessful")
#ifdef RESTRICT_ImActorCoreApiApiNegotinationSuccessful
#define INCLUDE_ALL_ImActorCoreApiApiNegotinationSuccessful 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiNegotinationSuccessful 1
#endif
#undef RESTRICT_ImActorCoreApiApiNegotinationSuccessful

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiNegotinationSuccessful_) && (INCLUDE_ALL_ImActorCoreApiApiNegotinationSuccessful || defined(INCLUDE_ARApiNegotinationSuccessful))
#define ARApiNegotinationSuccessful_

#define RESTRICT_ImActorCoreApiApiWebRTCSignaling 1
#define INCLUDE_ARApiWebRTCSignaling 1
#include "../../../../im/actor/core/api/ApiWebRTCSignaling.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiNegotinationSuccessful : ARApiWebRTCSignaling

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)device
                    withLong:(jlong)sessionId;

- (jlong)getDevice;

- (jint)getHeader;

- (jlong)getSessionId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiNegotinationSuccessful)

FOUNDATION_EXPORT void ARApiNegotinationSuccessful_initWithLong_withLong_(ARApiNegotinationSuccessful *self, jlong device, jlong sessionId);

FOUNDATION_EXPORT ARApiNegotinationSuccessful *new_ARApiNegotinationSuccessful_initWithLong_withLong_(jlong device, jlong sessionId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiNegotinationSuccessful *create_ARApiNegotinationSuccessful_initWithLong_withLong_(jlong device, jlong sessionId);

FOUNDATION_EXPORT void ARApiNegotinationSuccessful_init(ARApiNegotinationSuccessful *self);

FOUNDATION_EXPORT ARApiNegotinationSuccessful *new_ARApiNegotinationSuccessful_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiNegotinationSuccessful *create_ARApiNegotinationSuccessful_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiNegotinationSuccessful)

@compatibility_alias ImActorCoreApiApiNegotinationSuccessful ARApiNegotinationSuccessful;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiNegotinationSuccessful")

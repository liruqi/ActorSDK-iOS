//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiCloseSession.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiCloseSession")
#ifdef RESTRICT_ImActorCoreApiApiCloseSession
#define INCLUDE_ALL_ImActorCoreApiApiCloseSession 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiCloseSession 1
#endif
#undef RESTRICT_ImActorCoreApiApiCloseSession

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiCloseSession_) && (INCLUDE_ALL_ImActorCoreApiApiCloseSession || defined(INCLUDE_ARApiCloseSession))
#define ARApiCloseSession_

#define RESTRICT_ImActorCoreApiApiWebRTCSignaling 1
#define INCLUDE_ARApiWebRTCSignaling 1
#include "../../../../im/actor/core/api/ApiWebRTCSignaling.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiCloseSession : ARApiWebRTCSignaling

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

J2OBJC_EMPTY_STATIC_INIT(ARApiCloseSession)

FOUNDATION_EXPORT void ARApiCloseSession_initWithLong_withLong_(ARApiCloseSession *self, jlong device, jlong sessionId);

FOUNDATION_EXPORT ARApiCloseSession *new_ARApiCloseSession_initWithLong_withLong_(jlong device, jlong sessionId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiCloseSession *create_ARApiCloseSession_initWithLong_withLong_(jlong device, jlong sessionId);

FOUNDATION_EXPORT void ARApiCloseSession_init(ARApiCloseSession *self);

FOUNDATION_EXPORT ARApiCloseSession *new_ARApiCloseSession_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiCloseSession *create_ARApiCloseSession_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiCloseSession)

@compatibility_alias ImActorCoreApiApiCloseSession ARApiCloseSession;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiCloseSession")

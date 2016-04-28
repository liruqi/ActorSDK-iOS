//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiEnableConnection.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiEnableConnection")
#ifdef RESTRICT_ImActorCoreApiApiEnableConnection
#define INCLUDE_ALL_ImActorCoreApiApiEnableConnection 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiEnableConnection 1
#endif
#undef RESTRICT_ImActorCoreApiApiEnableConnection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiEnableConnection_) && (INCLUDE_ALL_ImActorCoreApiApiEnableConnection || defined(INCLUDE_ARApiEnableConnection))
#define ARApiEnableConnection_

#define RESTRICT_ImActorCoreApiApiWebRTCSignaling 1
#define INCLUDE_ARApiWebRTCSignaling 1
#include "../../../../im/actor/core/api/ApiWebRTCSignaling.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiEnableConnection : ARApiWebRTCSignaling

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

J2OBJC_EMPTY_STATIC_INIT(ARApiEnableConnection)

FOUNDATION_EXPORT void ARApiEnableConnection_initWithLong_withLong_(ARApiEnableConnection *self, jlong device, jlong sessionId);

FOUNDATION_EXPORT ARApiEnableConnection *new_ARApiEnableConnection_initWithLong_withLong_(jlong device, jlong sessionId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiEnableConnection *create_ARApiEnableConnection_initWithLong_withLong_(jlong device, jlong sessionId);

FOUNDATION_EXPORT void ARApiEnableConnection_init(ARApiEnableConnection *self);

FOUNDATION_EXPORT ARApiEnableConnection *new_ARApiEnableConnection_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiEnableConnection *create_ARApiEnableConnection_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiEnableConnection)

@compatibility_alias ImActorCoreApiApiEnableConnection ARApiEnableConnection;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiEnableConnection")

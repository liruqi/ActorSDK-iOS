//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiNeedDisconnect.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiNeedDisconnect")
#ifdef RESTRICT_ImActorCoreApiApiNeedDisconnect
#define INCLUDE_ALL_ImActorCoreApiApiNeedDisconnect 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiNeedDisconnect 1
#endif
#undef RESTRICT_ImActorCoreApiApiNeedDisconnect

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiNeedDisconnect_) && (INCLUDE_ALL_ImActorCoreApiApiNeedDisconnect || defined(INCLUDE_ARApiNeedDisconnect))
#define ARApiNeedDisconnect_

#define RESTRICT_ImActorCoreApiApiWebRTCSignaling 1
#define INCLUDE_ARApiWebRTCSignaling 1
#include "../../../../im/actor/core/api/ApiWebRTCSignaling.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiNeedDisconnect : ARApiWebRTCSignaling

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)device;

- (jlong)getDevice;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiNeedDisconnect)

FOUNDATION_EXPORT void ARApiNeedDisconnect_initWithLong_(ARApiNeedDisconnect *self, jlong device);

FOUNDATION_EXPORT ARApiNeedDisconnect *new_ARApiNeedDisconnect_initWithLong_(jlong device) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiNeedDisconnect *create_ARApiNeedDisconnect_initWithLong_(jlong device);

FOUNDATION_EXPORT void ARApiNeedDisconnect_init(ARApiNeedDisconnect *self);

FOUNDATION_EXPORT ARApiNeedDisconnect *new_ARApiNeedDisconnect_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiNeedDisconnect *create_ARApiNeedDisconnect_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiNeedDisconnect)

@compatibility_alias ImActorCoreApiApiNeedDisconnect ARApiNeedDisconnect;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiNeedDisconnect")

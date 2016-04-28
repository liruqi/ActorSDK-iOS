//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestJoinCall.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestJoinCall")
#ifdef RESTRICT_ImActorCoreApiRpcRequestJoinCall
#define INCLUDE_ALL_ImActorCoreApiRpcRequestJoinCall 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestJoinCall 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestJoinCall

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestJoinCall_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestJoinCall || defined(INCLUDE_ARRequestJoinCall))
#define ARRequestJoinCall_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestJoinCall : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)callId;

+ (ARRequestJoinCall *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getCallId;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestJoinCall)

inline jint ARRequestJoinCall_get_HEADER();
#define ARRequestJoinCall_HEADER 2683
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestJoinCall, HEADER, jint)

FOUNDATION_EXPORT ARRequestJoinCall *ARRequestJoinCall_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestJoinCall_initWithLong_(ARRequestJoinCall *self, jlong callId);

FOUNDATION_EXPORT ARRequestJoinCall *new_ARRequestJoinCall_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestJoinCall *create_ARRequestJoinCall_initWithLong_(jlong callId);

FOUNDATION_EXPORT void ARRequestJoinCall_init(ARRequestJoinCall *self);

FOUNDATION_EXPORT ARRequestJoinCall *new_ARRequestJoinCall_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestJoinCall *create_ARRequestJoinCall_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestJoinCall)

@compatibility_alias ImActorCoreApiRpcRequestJoinCall ARRequestJoinCall;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestJoinCall")

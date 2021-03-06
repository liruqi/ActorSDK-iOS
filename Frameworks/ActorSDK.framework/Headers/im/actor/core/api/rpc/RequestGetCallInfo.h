//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestGetCallInfo.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestGetCallInfo")
#ifdef RESTRICT_ImActorCoreApiRpcRequestGetCallInfo
#define INCLUDE_ALL_ImActorCoreApiRpcRequestGetCallInfo 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestGetCallInfo 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestGetCallInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestGetCallInfo_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestGetCallInfo || defined(INCLUDE_ARRequestGetCallInfo))
#define ARRequestGetCallInfo_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestGetCallInfo : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)callId;

+ (ARRequestGetCallInfo *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getCallId;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestGetCallInfo)

inline jint ARRequestGetCallInfo_get_HEADER();
#define ARRequestGetCallInfo_HEADER 2600
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestGetCallInfo, HEADER, jint)

FOUNDATION_EXPORT ARRequestGetCallInfo *ARRequestGetCallInfo_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestGetCallInfo_initWithLong_(ARRequestGetCallInfo *self, jlong callId);

FOUNDATION_EXPORT ARRequestGetCallInfo *new_ARRequestGetCallInfo_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestGetCallInfo *create_ARRequestGetCallInfo_initWithLong_(jlong callId);

FOUNDATION_EXPORT void ARRequestGetCallInfo_init(ARRequestGetCallInfo *self);

FOUNDATION_EXPORT ARRequestGetCallInfo *new_ARRequestGetCallInfo_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestGetCallInfo *create_ARRequestGetCallInfo_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestGetCallInfo)

@compatibility_alias ImActorCoreApiRpcRequestGetCallInfo ARRequestGetCallInfo;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestGetCallInfo")

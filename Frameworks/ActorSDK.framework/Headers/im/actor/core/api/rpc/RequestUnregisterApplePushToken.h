//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestUnregisterApplePushToken.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestUnregisterApplePushToken")
#ifdef RESTRICT_ImActorCoreApiRpcRequestUnregisterApplePushToken
#define INCLUDE_ALL_ImActorCoreApiRpcRequestUnregisterApplePushToken 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestUnregisterApplePushToken 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestUnregisterApplePushToken

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestUnregisterApplePushToken_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestUnregisterApplePushToken || defined(INCLUDE_ARRequestUnregisterApplePushToken))
#define ARRequestUnregisterApplePushToken_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestUnregisterApplePushToken : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)token;

+ (ARRequestUnregisterApplePushToken *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getToken;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestUnregisterApplePushToken)

inline jint ARRequestUnregisterApplePushToken_get_HEADER();
#define ARRequestUnregisterApplePushToken_HEADER 2634
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestUnregisterApplePushToken, HEADER, jint)

FOUNDATION_EXPORT ARRequestUnregisterApplePushToken *ARRequestUnregisterApplePushToken_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestUnregisterApplePushToken_initWithNSString_(ARRequestUnregisterApplePushToken *self, NSString *token);

FOUNDATION_EXPORT ARRequestUnregisterApplePushToken *new_ARRequestUnregisterApplePushToken_initWithNSString_(NSString *token) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestUnregisterApplePushToken *create_ARRequestUnregisterApplePushToken_initWithNSString_(NSString *token);

FOUNDATION_EXPORT void ARRequestUnregisterApplePushToken_init(ARRequestUnregisterApplePushToken *self);

FOUNDATION_EXPORT ARRequestUnregisterApplePushToken *new_ARRequestUnregisterApplePushToken_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestUnregisterApplePushToken *create_ARRequestUnregisterApplePushToken_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestUnregisterApplePushToken)

@compatibility_alias ImActorCoreApiRpcRequestUnregisterApplePushToken ARRequestUnregisterApplePushToken;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestUnregisterApplePushToken")

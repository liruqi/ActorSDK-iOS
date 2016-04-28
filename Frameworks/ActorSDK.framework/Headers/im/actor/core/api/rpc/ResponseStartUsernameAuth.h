//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/ResponseStartUsernameAuth.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseStartUsernameAuth")
#ifdef RESTRICT_ImActorCoreApiRpcResponseStartUsernameAuth
#define INCLUDE_ALL_ImActorCoreApiRpcResponseStartUsernameAuth 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcResponseStartUsernameAuth 1
#endif
#undef RESTRICT_ImActorCoreApiRpcResponseStartUsernameAuth

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseStartUsernameAuth_) && (INCLUDE_ALL_ImActorCoreApiRpcResponseStartUsernameAuth || defined(INCLUDE_ARResponseStartUsernameAuth))
#define ARResponseStartUsernameAuth_

#define RESTRICT_ImActorCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/actor/core/network/parser/Response.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseStartUsernameAuth : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)transactionHash
                     withBoolean:(jboolean)isRegistered;

+ (ARResponseStartUsernameAuth *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getTransactionHash;

- (jboolean)isRegistered;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseStartUsernameAuth)

inline jint ARResponseStartUsernameAuth_get_HEADER();
#define ARResponseStartUsernameAuth_HEADER 2572
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseStartUsernameAuth, HEADER, jint)

FOUNDATION_EXPORT ARResponseStartUsernameAuth *ARResponseStartUsernameAuth_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseStartUsernameAuth_initWithNSString_withBoolean_(ARResponseStartUsernameAuth *self, NSString *transactionHash, jboolean isRegistered);

FOUNDATION_EXPORT ARResponseStartUsernameAuth *new_ARResponseStartUsernameAuth_initWithNSString_withBoolean_(NSString *transactionHash, jboolean isRegistered) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseStartUsernameAuth *create_ARResponseStartUsernameAuth_initWithNSString_withBoolean_(NSString *transactionHash, jboolean isRegistered);

FOUNDATION_EXPORT void ARResponseStartUsernameAuth_init(ARResponseStartUsernameAuth *self);

FOUNDATION_EXPORT ARResponseStartUsernameAuth *new_ARResponseStartUsernameAuth_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseStartUsernameAuth *create_ARResponseStartUsernameAuth_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseStartUsernameAuth)

@compatibility_alias ImActorCoreApiRpcResponseStartUsernameAuth ARResponseStartUsernameAuth;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseStartUsernameAuth")

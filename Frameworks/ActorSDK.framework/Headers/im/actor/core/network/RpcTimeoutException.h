//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/RpcTimeoutException.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkRpcTimeoutException")
#ifdef RESTRICT_ImActorCoreNetworkRpcTimeoutException
#define INCLUDE_ALL_ImActorCoreNetworkRpcTimeoutException 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkRpcTimeoutException 1
#endif
#undef RESTRICT_ImActorCoreNetworkRpcTimeoutException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACRpcTimeoutException_) && (INCLUDE_ALL_ImActorCoreNetworkRpcTimeoutException || defined(INCLUDE_ACRpcTimeoutException))
#define ACRpcTimeoutException_

#define RESTRICT_ImActorCoreNetworkRpcException 1
#define INCLUDE_ACRpcException 1
#include "../../../../im/actor/core/network/RpcException.h"

@interface ACRpcTimeoutException : ACRpcException

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ACRpcTimeoutException)

FOUNDATION_EXPORT void ACRpcTimeoutException_init(ACRpcTimeoutException *self);

FOUNDATION_EXPORT ACRpcTimeoutException *new_ACRpcTimeoutException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACRpcTimeoutException *create_ACRpcTimeoutException_init();

J2OBJC_TYPE_LITERAL_HEADER(ACRpcTimeoutException)

@compatibility_alias ImActorCoreNetworkRpcTimeoutException ACRpcTimeoutException;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkRpcTimeoutException")

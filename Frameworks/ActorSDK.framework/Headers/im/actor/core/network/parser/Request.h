//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/parser/Request.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkParserRequest")
#ifdef RESTRICT_ImActorCoreNetworkParserRequest
#define INCLUDE_ALL_ImActorCoreNetworkParserRequest 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkParserRequest 1
#endif
#undef RESTRICT_ImActorCoreNetworkParserRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACRequest_) && (INCLUDE_ALL_ImActorCoreNetworkParserRequest || defined(INCLUDE_ACRequest))
#define ACRequest_

#define RESTRICT_ImActorCoreNetworkParserRpcScope 1
#define INCLUDE_ACRpcScope 1
#include "../../../../../im/actor/core/network/parser/RpcScope.h"

@interface ACRequest : ACRpcScope

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ACRequest)

FOUNDATION_EXPORT void ACRequest_init(ACRequest *self);

J2OBJC_TYPE_LITERAL_HEADER(ACRequest)

@compatibility_alias ImActorCoreNetworkParserRequest ACRequest;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkParserRequest")

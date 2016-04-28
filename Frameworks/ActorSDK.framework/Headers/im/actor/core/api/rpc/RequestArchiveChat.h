//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestArchiveChat.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestArchiveChat")
#ifdef RESTRICT_ImActorCoreApiRpcRequestArchiveChat
#define INCLUDE_ALL_ImActorCoreApiRpcRequestArchiveChat 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestArchiveChat 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestArchiveChat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestArchiveChat_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestArchiveChat || defined(INCLUDE_ARRequestArchiveChat))
#define ARRequestArchiveChat_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARApiOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestArchiveChat : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiOutPeer:(ARApiOutPeer * __nonnull)peer;

+ (ARRequestArchiveChat *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiOutPeer * __nonnull)getPeer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestArchiveChat)

inline jint ARRequestArchiveChat_get_HEADER();
#define ARRequestArchiveChat_HEADER 2654
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestArchiveChat, HEADER, jint)

FOUNDATION_EXPORT ARRequestArchiveChat *ARRequestArchiveChat_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestArchiveChat_initWithARApiOutPeer_(ARRequestArchiveChat *self, ARApiOutPeer *peer);

FOUNDATION_EXPORT ARRequestArchiveChat *new_ARRequestArchiveChat_initWithARApiOutPeer_(ARApiOutPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestArchiveChat *create_ARRequestArchiveChat_initWithARApiOutPeer_(ARApiOutPeer *peer);

FOUNDATION_EXPORT void ARRequestArchiveChat_init(ARRequestArchiveChat *self);

FOUNDATION_EXPORT ARRequestArchiveChat *new_ARRequestArchiveChat_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestArchiveChat *create_ARRequestArchiveChat_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestArchiveChat)

@compatibility_alias ImActorCoreApiRpcRequestArchiveChat ARRequestArchiveChat;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestArchiveChat")

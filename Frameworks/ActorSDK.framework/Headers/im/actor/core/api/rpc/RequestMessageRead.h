//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestMessageRead.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestMessageRead")
#ifdef RESTRICT_ImActorCoreApiRpcRequestMessageRead
#define INCLUDE_ALL_ImActorCoreApiRpcRequestMessageRead 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestMessageRead 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestMessageRead

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestMessageRead_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestMessageRead || defined(INCLUDE_ARRequestMessageRead))
#define ARRequestMessageRead_

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

@interface ARRequestMessageRead : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiOutPeer:(ARApiOutPeer * __nonnull)peer
                            withLong:(jlong)date;

+ (ARRequestMessageRead *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (jint)getHeaderKey;

- (ARApiOutPeer * __nonnull)getPeer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestMessageRead)

inline jint ARRequestMessageRead_get_HEADER();
#define ARRequestMessageRead_HEADER 57
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestMessageRead, HEADER, jint)

FOUNDATION_EXPORT ARRequestMessageRead *ARRequestMessageRead_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestMessageRead_initWithARApiOutPeer_withLong_(ARRequestMessageRead *self, ARApiOutPeer *peer, jlong date);

FOUNDATION_EXPORT ARRequestMessageRead *new_ARRequestMessageRead_initWithARApiOutPeer_withLong_(ARApiOutPeer *peer, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestMessageRead *create_ARRequestMessageRead_initWithARApiOutPeer_withLong_(ARApiOutPeer *peer, jlong date);

FOUNDATION_EXPORT void ARRequestMessageRead_init(ARRequestMessageRead *self);

FOUNDATION_EXPORT ARRequestMessageRead *new_ARRequestMessageRead_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestMessageRead *create_ARRequestMessageRead_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestMessageRead)

@compatibility_alias ImActorCoreApiRpcRequestMessageRead ARRequestMessageRead;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestMessageRead")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestDownloadSharedBlob.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestDownloadSharedBlob")
#ifdef RESTRICT_ImActorCoreApiRpcRequestDownloadSharedBlob
#define INCLUDE_ALL_ImActorCoreApiRpcRequestDownloadSharedBlob 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestDownloadSharedBlob 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestDownloadSharedBlob

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestDownloadSharedBlob_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestDownloadSharedBlob || defined(INCLUDE_ARRequestDownloadSharedBlob))
#define ARRequestDownloadSharedBlob_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARApiUserOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestDownloadSharedBlob : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiUserOutPeer:(ARApiUserOutPeer * __nonnull)destPeer
                            withNSString:(NSString * __nonnull)bucket
                                 withInt:(jint)objectId;

+ (ARRequestDownloadSharedBlob *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getBucket;

- (ARApiUserOutPeer * __nonnull)getDestPeer;

- (jint)getHeaderKey;

- (jint)getObjectId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestDownloadSharedBlob)

inline jint ARRequestDownloadSharedBlob_get_HEADER();
#define ARRequestDownloadSharedBlob_HEADER 2662
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestDownloadSharedBlob, HEADER, jint)

FOUNDATION_EXPORT ARRequestDownloadSharedBlob *ARRequestDownloadSharedBlob_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestDownloadSharedBlob_initWithARApiUserOutPeer_withNSString_withInt_(ARRequestDownloadSharedBlob *self, ARApiUserOutPeer *destPeer, NSString *bucket, jint objectId);

FOUNDATION_EXPORT ARRequestDownloadSharedBlob *new_ARRequestDownloadSharedBlob_initWithARApiUserOutPeer_withNSString_withInt_(ARApiUserOutPeer *destPeer, NSString *bucket, jint objectId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestDownloadSharedBlob *create_ARRequestDownloadSharedBlob_initWithARApiUserOutPeer_withNSString_withInt_(ARApiUserOutPeer *destPeer, NSString *bucket, jint objectId);

FOUNDATION_EXPORT void ARRequestDownloadSharedBlob_init(ARRequestDownloadSharedBlob *self);

FOUNDATION_EXPORT ARRequestDownloadSharedBlob *new_ARRequestDownloadSharedBlob_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestDownloadSharedBlob *create_ARRequestDownloadSharedBlob_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestDownloadSharedBlob)

@compatibility_alias ImActorCoreApiRpcRequestDownloadSharedBlob ARRequestDownloadSharedBlob;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestDownloadSharedBlob")

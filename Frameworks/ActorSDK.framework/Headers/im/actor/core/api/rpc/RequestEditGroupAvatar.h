//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestEditGroupAvatar.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestEditGroupAvatar")
#ifdef RESTRICT_ImActorCoreApiRpcRequestEditGroupAvatar
#define INCLUDE_ALL_ImActorCoreApiRpcRequestEditGroupAvatar 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestEditGroupAvatar 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestEditGroupAvatar

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestEditGroupAvatar_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestEditGroupAvatar || defined(INCLUDE_ARRequestEditGroupAvatar))
#define ARRequestEditGroupAvatar_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARApiFileLocation;
@class ARApiGroupOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestEditGroupAvatar : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiGroupOutPeer:(ARApiGroupOutPeer * __nonnull)groupPeer
                                 withLong:(jlong)rid
                    withARApiFileLocation:(ARApiFileLocation * __nonnull)fileLocation;

+ (ARRequestEditGroupAvatar *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiFileLocation * __nonnull)getFileLocation;

- (ARApiGroupOutPeer * __nonnull)getGroupPeer;

- (jint)getHeaderKey;

- (jlong)getRid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestEditGroupAvatar)

inline jint ARRequestEditGroupAvatar_get_HEADER();
#define ARRequestEditGroupAvatar_HEADER 86
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestEditGroupAvatar, HEADER, jint)

FOUNDATION_EXPORT ARRequestEditGroupAvatar *ARRequestEditGroupAvatar_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestEditGroupAvatar_initWithARApiGroupOutPeer_withLong_withARApiFileLocation_(ARRequestEditGroupAvatar *self, ARApiGroupOutPeer *groupPeer, jlong rid, ARApiFileLocation *fileLocation);

FOUNDATION_EXPORT ARRequestEditGroupAvatar *new_ARRequestEditGroupAvatar_initWithARApiGroupOutPeer_withLong_withARApiFileLocation_(ARApiGroupOutPeer *groupPeer, jlong rid, ARApiFileLocation *fileLocation) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEditGroupAvatar *create_ARRequestEditGroupAvatar_initWithARApiGroupOutPeer_withLong_withARApiFileLocation_(ARApiGroupOutPeer *groupPeer, jlong rid, ARApiFileLocation *fileLocation);

FOUNDATION_EXPORT void ARRequestEditGroupAvatar_init(ARRequestEditGroupAvatar *self);

FOUNDATION_EXPORT ARRequestEditGroupAvatar *new_ARRequestEditGroupAvatar_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEditGroupAvatar *create_ARRequestEditGroupAvatar_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestEditGroupAvatar)

@compatibility_alias ImActorCoreApiRpcRequestEditGroupAvatar ARRequestEditGroupAvatar;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestEditGroupAvatar")

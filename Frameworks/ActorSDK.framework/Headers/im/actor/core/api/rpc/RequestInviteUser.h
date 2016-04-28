//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestInviteUser.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestInviteUser")
#ifdef RESTRICT_ImActorCoreApiRpcRequestInviteUser
#define INCLUDE_ALL_ImActorCoreApiRpcRequestInviteUser 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestInviteUser 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestInviteUser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestInviteUser_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestInviteUser || defined(INCLUDE_ARRequestInviteUser))
#define ARRequestInviteUser_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARApiGroupOutPeer;
@class ARApiUserOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestInviteUser : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiGroupOutPeer:(ARApiGroupOutPeer * __nonnull)groupPeer
                                 withLong:(jlong)rid
                     withARApiUserOutPeer:(ARApiUserOutPeer * __nonnull)user;

+ (ARRequestInviteUser *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiGroupOutPeer * __nonnull)getGroupPeer;

- (jint)getHeaderKey;

- (jlong)getRid;

- (ARApiUserOutPeer * __nonnull)getUser;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestInviteUser)

inline jint ARRequestInviteUser_get_HEADER();
#define ARRequestInviteUser_HEADER 69
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestInviteUser, HEADER, jint)

FOUNDATION_EXPORT ARRequestInviteUser *ARRequestInviteUser_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestInviteUser_initWithARApiGroupOutPeer_withLong_withARApiUserOutPeer_(ARRequestInviteUser *self, ARApiGroupOutPeer *groupPeer, jlong rid, ARApiUserOutPeer *user);

FOUNDATION_EXPORT ARRequestInviteUser *new_ARRequestInviteUser_initWithARApiGroupOutPeer_withLong_withARApiUserOutPeer_(ARApiGroupOutPeer *groupPeer, jlong rid, ARApiUserOutPeer *user) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestInviteUser *create_ARRequestInviteUser_initWithARApiGroupOutPeer_withLong_withARApiUserOutPeer_(ARApiGroupOutPeer *groupPeer, jlong rid, ARApiUserOutPeer *user);

FOUNDATION_EXPORT void ARRequestInviteUser_init(ARRequestInviteUser *self);

FOUNDATION_EXPORT ARRequestInviteUser *new_ARRequestInviteUser_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestInviteUser *create_ARRequestInviteUser_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestInviteUser)

@compatibility_alias ImActorCoreApiRpcRequestInviteUser ARRequestInviteUser;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestInviteUser")

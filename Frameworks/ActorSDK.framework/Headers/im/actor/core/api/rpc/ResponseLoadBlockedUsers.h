//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/ResponseLoadBlockedUsers.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseLoadBlockedUsers")
#ifdef RESTRICT_ImActorCoreApiRpcResponseLoadBlockedUsers
#define INCLUDE_ALL_ImActorCoreApiRpcResponseLoadBlockedUsers 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcResponseLoadBlockedUsers 1
#endif
#undef RESTRICT_ImActorCoreApiRpcResponseLoadBlockedUsers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseLoadBlockedUsers_) && (INCLUDE_ALL_ImActorCoreApiRpcResponseLoadBlockedUsers || defined(INCLUDE_ARResponseLoadBlockedUsers))
#define ARResponseLoadBlockedUsers_

#define RESTRICT_ImActorCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/actor/core/network/parser/Response.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseLoadBlockedUsers : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)userPeers;

+ (ARResponseLoadBlockedUsers *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getUserPeers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseLoadBlockedUsers)

inline jint ARResponseLoadBlockedUsers_get_HEADER();
#define ARResponseLoadBlockedUsers_HEADER 2639
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseLoadBlockedUsers, HEADER, jint)

FOUNDATION_EXPORT ARResponseLoadBlockedUsers *ARResponseLoadBlockedUsers_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseLoadBlockedUsers_initWithJavaUtilList_(ARResponseLoadBlockedUsers *self, id<JavaUtilList> userPeers);

FOUNDATION_EXPORT ARResponseLoadBlockedUsers *new_ARResponseLoadBlockedUsers_initWithJavaUtilList_(id<JavaUtilList> userPeers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseLoadBlockedUsers *create_ARResponseLoadBlockedUsers_initWithJavaUtilList_(id<JavaUtilList> userPeers);

FOUNDATION_EXPORT void ARResponseLoadBlockedUsers_init(ARResponseLoadBlockedUsers *self);

FOUNDATION_EXPORT ARResponseLoadBlockedUsers *new_ARResponseLoadBlockedUsers_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseLoadBlockedUsers *create_ARResponseLoadBlockedUsers_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseLoadBlockedUsers)

@compatibility_alias ImActorCoreApiRpcResponseLoadBlockedUsers ARResponseLoadBlockedUsers;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseLoadBlockedUsers")

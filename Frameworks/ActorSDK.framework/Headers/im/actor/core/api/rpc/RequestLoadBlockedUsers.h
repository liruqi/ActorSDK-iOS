//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestLoadBlockedUsers.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestLoadBlockedUsers")
#ifdef RESTRICT_ImActorCoreApiRpcRequestLoadBlockedUsers
#define INCLUDE_ALL_ImActorCoreApiRpcRequestLoadBlockedUsers 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestLoadBlockedUsers 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestLoadBlockedUsers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestLoadBlockedUsers_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestLoadBlockedUsers || defined(INCLUDE_ARRequestLoadBlockedUsers))
#define ARRequestLoadBlockedUsers_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestLoadBlockedUsers : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

+ (ARRequestLoadBlockedUsers *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestLoadBlockedUsers)

inline jint ARRequestLoadBlockedUsers_get_HEADER();
#define ARRequestLoadBlockedUsers_HEADER 2638
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestLoadBlockedUsers, HEADER, jint)

FOUNDATION_EXPORT ARRequestLoadBlockedUsers *ARRequestLoadBlockedUsers_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestLoadBlockedUsers_init(ARRequestLoadBlockedUsers *self);

FOUNDATION_EXPORT ARRequestLoadBlockedUsers *new_ARRequestLoadBlockedUsers_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadBlockedUsers *create_ARRequestLoadBlockedUsers_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestLoadBlockedUsers)

@compatibility_alias ImActorCoreApiRpcRequestLoadBlockedUsers ARRequestLoadBlockedUsers;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestLoadBlockedUsers")

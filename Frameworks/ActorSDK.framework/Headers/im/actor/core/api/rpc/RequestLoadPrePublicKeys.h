//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestLoadPrePublicKeys.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestLoadPrePublicKeys")
#ifdef RESTRICT_ImActorCoreApiRpcRequestLoadPrePublicKeys
#define INCLUDE_ALL_ImActorCoreApiRpcRequestLoadPrePublicKeys 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestLoadPrePublicKeys 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestLoadPrePublicKeys

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestLoadPrePublicKeys_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestLoadPrePublicKeys || defined(INCLUDE_ARRequestLoadPrePublicKeys))
#define ARRequestLoadPrePublicKeys_

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

@interface ARRequestLoadPrePublicKeys : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiUserOutPeer:(ARApiUserOutPeer * __nonnull)userPeer
                                 withInt:(jint)keyGroupId;

+ (ARRequestLoadPrePublicKeys *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (jint)getKeyGroupId;

- (ARApiUserOutPeer * __nonnull)getUserPeer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestLoadPrePublicKeys)

inline jint ARRequestLoadPrePublicKeys_get_HEADER();
#define ARRequestLoadPrePublicKeys_HEADER 2603
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestLoadPrePublicKeys, HEADER, jint)

FOUNDATION_EXPORT ARRequestLoadPrePublicKeys *ARRequestLoadPrePublicKeys_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestLoadPrePublicKeys_initWithARApiUserOutPeer_withInt_(ARRequestLoadPrePublicKeys *self, ARApiUserOutPeer *userPeer, jint keyGroupId);

FOUNDATION_EXPORT ARRequestLoadPrePublicKeys *new_ARRequestLoadPrePublicKeys_initWithARApiUserOutPeer_withInt_(ARApiUserOutPeer *userPeer, jint keyGroupId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadPrePublicKeys *create_ARRequestLoadPrePublicKeys_initWithARApiUserOutPeer_withInt_(ARApiUserOutPeer *userPeer, jint keyGroupId);

FOUNDATION_EXPORT void ARRequestLoadPrePublicKeys_init(ARRequestLoadPrePublicKeys *self);

FOUNDATION_EXPORT ARRequestLoadPrePublicKeys *new_ARRequestLoadPrePublicKeys_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadPrePublicKeys *create_ARRequestLoadPrePublicKeys_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestLoadPrePublicKeys)

@compatibility_alias ImActorCoreApiRpcRequestLoadPrePublicKeys ARRequestLoadPrePublicKeys;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestLoadPrePublicKeys")

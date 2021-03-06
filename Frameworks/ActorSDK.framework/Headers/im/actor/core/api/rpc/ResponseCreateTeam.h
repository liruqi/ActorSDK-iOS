//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/ResponseCreateTeam.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseCreateTeam")
#ifdef RESTRICT_ImActorCoreApiRpcResponseCreateTeam
#define INCLUDE_ALL_ImActorCoreApiRpcResponseCreateTeam 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcResponseCreateTeam 1
#endif
#undef RESTRICT_ImActorCoreApiRpcResponseCreateTeam

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseCreateTeam_) && (INCLUDE_ALL_ImActorCoreApiRpcResponseCreateTeam || defined(INCLUDE_ARResponseCreateTeam))
#define ARResponseCreateTeam_

#define RESTRICT_ImActorCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/actor/core/network/parser/Response.h"

@class ARApiTeam;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseCreateTeam : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiTeam:(ARApiTeam * __nonnull)createdTeam;

+ (ARResponseCreateTeam *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiTeam * __nonnull)getCreatedTeam;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseCreateTeam)

inline jint ARResponseCreateTeam_get_HEADER();
#define ARResponseCreateTeam_HEADER 2567
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseCreateTeam, HEADER, jint)

FOUNDATION_EXPORT ARResponseCreateTeam *ARResponseCreateTeam_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseCreateTeam_initWithARApiTeam_(ARResponseCreateTeam *self, ARApiTeam *createdTeam);

FOUNDATION_EXPORT ARResponseCreateTeam *new_ARResponseCreateTeam_initWithARApiTeam_(ARApiTeam *createdTeam) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseCreateTeam *create_ARResponseCreateTeam_initWithARApiTeam_(ARApiTeam *createdTeam);

FOUNDATION_EXPORT void ARResponseCreateTeam_init(ARResponseCreateTeam *self);

FOUNDATION_EXPORT ARResponseCreateTeam *new_ARResponseCreateTeam_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseCreateTeam *create_ARResponseCreateTeam_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseCreateTeam)

@compatibility_alias ImActorCoreApiRpcResponseCreateTeam ARResponseCreateTeam;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseCreateTeam")

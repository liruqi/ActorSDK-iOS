//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestEditMyTimeZone.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestEditMyTimeZone")
#ifdef RESTRICT_ImActorCoreApiRpcRequestEditMyTimeZone
#define INCLUDE_ALL_ImActorCoreApiRpcRequestEditMyTimeZone 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestEditMyTimeZone 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestEditMyTimeZone

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestEditMyTimeZone_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestEditMyTimeZone || defined(INCLUDE_ARRequestEditMyTimeZone))
#define ARRequestEditMyTimeZone_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestEditMyTimeZone : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)tz;

+ (ARRequestEditMyTimeZone *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getTz;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestEditMyTimeZone)

inline jint ARRequestEditMyTimeZone_get_HEADER();
#define ARRequestEditMyTimeZone_HEADER 144
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestEditMyTimeZone, HEADER, jint)

FOUNDATION_EXPORT ARRequestEditMyTimeZone *ARRequestEditMyTimeZone_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestEditMyTimeZone_initWithNSString_(ARRequestEditMyTimeZone *self, NSString *tz);

FOUNDATION_EXPORT ARRequestEditMyTimeZone *new_ARRequestEditMyTimeZone_initWithNSString_(NSString *tz) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEditMyTimeZone *create_ARRequestEditMyTimeZone_initWithNSString_(NSString *tz);

FOUNDATION_EXPORT void ARRequestEditMyTimeZone_init(ARRequestEditMyTimeZone *self);

FOUNDATION_EXPORT ARRequestEditMyTimeZone *new_ARRequestEditMyTimeZone_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEditMyTimeZone *create_ARRequestEditMyTimeZone_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestEditMyTimeZone)

@compatibility_alias ImActorCoreApiRpcRequestEditMyTimeZone ARRequestEditMyTimeZone;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestEditMyTimeZone")

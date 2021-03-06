//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestSetOnline.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestSetOnline")
#ifdef RESTRICT_ImActorCoreApiRpcRequestSetOnline
#define INCLUDE_ALL_ImActorCoreApiRpcRequestSetOnline 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestSetOnline 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestSetOnline

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestSetOnline_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestSetOnline || defined(INCLUDE_ARRequestSetOnline))
#define ARRequestSetOnline_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARApiDeviceType;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestSetOnline : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithBoolean:(jboolean)isOnline
                       withLong:(jlong)timeout
            withARApiDeviceType:(ARApiDeviceType * __nullable)deviceType
                   withNSString:(NSString * __nullable)deviceCategory;

+ (ARRequestSetOnline *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nullable)getDeviceCategory;

- (ARApiDeviceType * __nullable)getDeviceType;

- (jint)getHeaderKey;

- (jlong)getTimeout;

- (jboolean)isOnline;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestSetOnline)

inline jint ARRequestSetOnline_get_HEADER();
#define ARRequestSetOnline_HEADER 29
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestSetOnline, HEADER, jint)

FOUNDATION_EXPORT ARRequestSetOnline *ARRequestSetOnline_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestSetOnline_initWithBoolean_withLong_withARApiDeviceType_withNSString_(ARRequestSetOnline *self, jboolean isOnline, jlong timeout, ARApiDeviceType *deviceType, NSString *deviceCategory);

FOUNDATION_EXPORT ARRequestSetOnline *new_ARRequestSetOnline_initWithBoolean_withLong_withARApiDeviceType_withNSString_(jboolean isOnline, jlong timeout, ARApiDeviceType *deviceType, NSString *deviceCategory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSetOnline *create_ARRequestSetOnline_initWithBoolean_withLong_withARApiDeviceType_withNSString_(jboolean isOnline, jlong timeout, ARApiDeviceType *deviceType, NSString *deviceCategory);

FOUNDATION_EXPORT void ARRequestSetOnline_init(ARRequestSetOnline *self);

FOUNDATION_EXPORT ARRequestSetOnline *new_ARRequestSetOnline_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSetOnline *create_ARRequestSetOnline_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestSetOnline)

@compatibility_alias ImActorCoreApiRpcRequestSetOnline ARRequestSetOnline;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestSetOnline")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateEventBusDeviceConnected.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDeviceConnected")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateEventBusDeviceConnected
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDeviceConnected 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDeviceConnected 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateEventBusDeviceConnected

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateEventBusDeviceConnected_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDeviceConnected || defined(INCLUDE_ARUpdateEventBusDeviceConnected))
#define ARUpdateEventBusDeviceConnected_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class JavaLangInteger;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateEventBusDeviceConnected : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)id_
             withJavaLangInteger:(JavaLangInteger * __nullable)userId
                        withLong:(jlong)deviceId;

+ (ARUpdateEventBusDeviceConnected *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDeviceId;

- (jint)getHeaderKey;

- (NSString * __nonnull)getId;

- (JavaLangInteger * __nullable)getUserId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateEventBusDeviceConnected)

inline jint ARUpdateEventBusDeviceConnected_get_HEADER();
#define ARUpdateEventBusDeviceConnected_HEADER 2561
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateEventBusDeviceConnected, HEADER, jint)

FOUNDATION_EXPORT ARUpdateEventBusDeviceConnected *ARUpdateEventBusDeviceConnected_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateEventBusDeviceConnected_initWithNSString_withJavaLangInteger_withLong_(ARUpdateEventBusDeviceConnected *self, NSString *id_, JavaLangInteger *userId, jlong deviceId);

FOUNDATION_EXPORT ARUpdateEventBusDeviceConnected *new_ARUpdateEventBusDeviceConnected_initWithNSString_withJavaLangInteger_withLong_(NSString *id_, JavaLangInteger *userId, jlong deviceId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateEventBusDeviceConnected *create_ARUpdateEventBusDeviceConnected_initWithNSString_withJavaLangInteger_withLong_(NSString *id_, JavaLangInteger *userId, jlong deviceId);

FOUNDATION_EXPORT void ARUpdateEventBusDeviceConnected_init(ARUpdateEventBusDeviceConnected *self);

FOUNDATION_EXPORT ARUpdateEventBusDeviceConnected *new_ARUpdateEventBusDeviceConnected_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateEventBusDeviceConnected *create_ARUpdateEventBusDeviceConnected_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateEventBusDeviceConnected)

@compatibility_alias ImActorCoreApiUpdatesUpdateEventBusDeviceConnected ARUpdateEventBusDeviceConnected;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDeviceConnected")

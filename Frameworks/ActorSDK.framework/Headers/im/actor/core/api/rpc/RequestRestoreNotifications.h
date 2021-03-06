//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestRestoreNotifications.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestRestoreNotifications")
#ifdef RESTRICT_ImActorCoreApiRpcRequestRestoreNotifications
#define INCLUDE_ALL_ImActorCoreApiRpcRequestRestoreNotifications 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestRestoreNotifications 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestRestoreNotifications

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestRestoreNotifications_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestRestoreNotifications || defined(INCLUDE_ARRequestRestoreNotifications))
#define ARRequestRestoreNotifications_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestRestoreNotifications : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

+ (ARRequestRestoreNotifications *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestRestoreNotifications)

inline jint ARRequestRestoreNotifications_get_HEADER();
#define ARRequestRestoreNotifications_HEADER 2642
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestRestoreNotifications, HEADER, jint)

FOUNDATION_EXPORT ARRequestRestoreNotifications *ARRequestRestoreNotifications_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestRestoreNotifications_init(ARRequestRestoreNotifications *self);

FOUNDATION_EXPORT ARRequestRestoreNotifications *new_ARRequestRestoreNotifications_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestRestoreNotifications *create_ARRequestRestoreNotifications_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestRestoreNotifications)

@compatibility_alias ImActorCoreApiRpcRequestRestoreNotifications ARRequestRestoreNotifications;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestRestoreNotifications")

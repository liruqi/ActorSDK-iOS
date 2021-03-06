//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateRestoreNotifications.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateRestoreNotifications")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateRestoreNotifications
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateRestoreNotifications 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateRestoreNotifications 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateRestoreNotifications

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateRestoreNotifications_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateRestoreNotifications || defined(INCLUDE_ARUpdateRestoreNotifications))
#define ARUpdateRestoreNotifications_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARUpdateRestoreNotifications : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

+ (ARUpdateRestoreNotifications *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateRestoreNotifications)

inline jint ARUpdateRestoreNotifications_get_HEADER();
#define ARUpdateRestoreNotifications_HEADER 167
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateRestoreNotifications, HEADER, jint)

FOUNDATION_EXPORT ARUpdateRestoreNotifications *ARUpdateRestoreNotifications_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateRestoreNotifications_init(ARUpdateRestoreNotifications *self);

FOUNDATION_EXPORT ARUpdateRestoreNotifications *new_ARUpdateRestoreNotifications_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateRestoreNotifications *create_ARUpdateRestoreNotifications_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateRestoreNotifications)

@compatibility_alias ImActorCoreApiUpdatesUpdateRestoreNotifications ARUpdateRestoreNotifications;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateRestoreNotifications")

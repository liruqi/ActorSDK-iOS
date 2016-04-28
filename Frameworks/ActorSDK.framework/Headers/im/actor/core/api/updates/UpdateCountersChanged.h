//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateCountersChanged.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateCountersChanged")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateCountersChanged
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateCountersChanged 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateCountersChanged 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateCountersChanged

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateCountersChanged_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateCountersChanged || defined(INCLUDE_ARUpdateCountersChanged))
#define ARUpdateCountersChanged_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARApiAppCounters;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateCountersChanged : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiAppCounters:(ARApiAppCounters * __nonnull)counters;

+ (ARUpdateCountersChanged *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiAppCounters * __nonnull)getCounters;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateCountersChanged)

inline jint ARUpdateCountersChanged_get_HEADER();
#define ARUpdateCountersChanged_HEADER 215
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateCountersChanged, HEADER, jint)

FOUNDATION_EXPORT ARUpdateCountersChanged *ARUpdateCountersChanged_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateCountersChanged_initWithARApiAppCounters_(ARUpdateCountersChanged *self, ARApiAppCounters *counters);

FOUNDATION_EXPORT ARUpdateCountersChanged *new_ARUpdateCountersChanged_initWithARApiAppCounters_(ARApiAppCounters *counters) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateCountersChanged *create_ARUpdateCountersChanged_initWithARApiAppCounters_(ARApiAppCounters *counters);

FOUNDATION_EXPORT void ARUpdateCountersChanged_init(ARUpdateCountersChanged *self);

FOUNDATION_EXPORT ARUpdateCountersChanged *new_ARUpdateCountersChanged_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateCountersChanged *create_ARUpdateCountersChanged_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateCountersChanged)

@compatibility_alias ImActorCoreApiUpdatesUpdateCountersChanged ARUpdateCountersChanged;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateCountersChanged")

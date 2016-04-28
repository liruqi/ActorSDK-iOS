//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateEventBusDisposed.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDisposed")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateEventBusDisposed
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDisposed 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDisposed 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateEventBusDisposed

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateEventBusDisposed_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDisposed || defined(INCLUDE_ARUpdateEventBusDisposed))
#define ARUpdateEventBusDisposed_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateEventBusDisposed : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)id_;

+ (ARUpdateEventBusDisposed *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateEventBusDisposed)

inline jint ARUpdateEventBusDisposed_get_HEADER();
#define ARUpdateEventBusDisposed_HEADER 2564
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateEventBusDisposed, HEADER, jint)

FOUNDATION_EXPORT ARUpdateEventBusDisposed *ARUpdateEventBusDisposed_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateEventBusDisposed_initWithNSString_(ARUpdateEventBusDisposed *self, NSString *id_);

FOUNDATION_EXPORT ARUpdateEventBusDisposed *new_ARUpdateEventBusDisposed_initWithNSString_(NSString *id_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateEventBusDisposed *create_ARUpdateEventBusDisposed_initWithNSString_(NSString *id_);

FOUNDATION_EXPORT void ARUpdateEventBusDisposed_init(ARUpdateEventBusDisposed *self);

FOUNDATION_EXPORT ARUpdateEventBusDisposed *new_ARUpdateEventBusDisposed_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateEventBusDisposed *create_ARUpdateEventBusDisposed_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateEventBusDisposed)

@compatibility_alias ImActorCoreApiUpdatesUpdateEventBusDisposed ARUpdateEventBusDisposed;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusDisposed")

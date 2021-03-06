//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestLoadSyncedSet.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestLoadSyncedSet")
#ifdef RESTRICT_ImActorCoreApiRpcRequestLoadSyncedSet
#define INCLUDE_ALL_ImActorCoreApiRpcRequestLoadSyncedSet 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestLoadSyncedSet 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestLoadSyncedSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestLoadSyncedSet_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestLoadSyncedSet || defined(INCLUDE_ARRequestLoadSyncedSet))
#define ARRequestLoadSyncedSet_

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

@interface ARRequestLoadSyncedSet : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)setName;

+ (ARRequestLoadSyncedSet *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getSetName;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestLoadSyncedSet)

inline jint ARRequestLoadSyncedSet_get_HEADER();
#define ARRequestLoadSyncedSet_HEADER 2679
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestLoadSyncedSet, HEADER, jint)

FOUNDATION_EXPORT ARRequestLoadSyncedSet *ARRequestLoadSyncedSet_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestLoadSyncedSet_initWithNSString_(ARRequestLoadSyncedSet *self, NSString *setName);

FOUNDATION_EXPORT ARRequestLoadSyncedSet *new_ARRequestLoadSyncedSet_initWithNSString_(NSString *setName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadSyncedSet *create_ARRequestLoadSyncedSet_initWithNSString_(NSString *setName);

FOUNDATION_EXPORT void ARRequestLoadSyncedSet_init(ARRequestLoadSyncedSet *self);

FOUNDATION_EXPORT ARRequestLoadSyncedSet *new_ARRequestLoadSyncedSet_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadSyncedSet *create_ARRequestLoadSyncedSet_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestLoadSyncedSet)

@compatibility_alias ImActorCoreApiRpcRequestLoadSyncedSet ARRequestLoadSyncedSet;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestLoadSyncedSet")

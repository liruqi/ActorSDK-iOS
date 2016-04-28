//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/base/WeakUpdate.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiBaseWeakUpdate")
#ifdef RESTRICT_ImActorCoreApiBaseWeakUpdate
#define INCLUDE_ALL_ImActorCoreApiBaseWeakUpdate 0
#else
#define INCLUDE_ALL_ImActorCoreApiBaseWeakUpdate 1
#endif
#undef RESTRICT_ImActorCoreApiBaseWeakUpdate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARWeakUpdate_) && (INCLUDE_ALL_ImActorCoreApiBaseWeakUpdate || defined(INCLUDE_ARWeakUpdate))
#define ARWeakUpdate_

#define RESTRICT_ImActorCoreNetworkParserRpcScope 1
#define INCLUDE_ACRpcScope 1
#include "../../../../../im/actor/core/network/parser/RpcScope.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARWeakUpdate : ACRpcScope

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)date
                     withInt:(jint)updateHeader
               withByteArray:(IOSByteArray * __nonnull)update;

+ (ARWeakUpdate *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (jint)getHeaderKey;

- (IOSByteArray * __nonnull)getUpdate;

- (jint)getUpdateHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARWeakUpdate)

inline jint ARWeakUpdate_get_HEADER();
#define ARWeakUpdate_HEADER 26
J2OBJC_STATIC_FIELD_CONSTANT(ARWeakUpdate, HEADER, jint)

FOUNDATION_EXPORT ARWeakUpdate *ARWeakUpdate_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARWeakUpdate_initWithLong_withInt_withByteArray_(ARWeakUpdate *self, jlong date, jint updateHeader, IOSByteArray *update);

FOUNDATION_EXPORT ARWeakUpdate *new_ARWeakUpdate_initWithLong_withInt_withByteArray_(jlong date, jint updateHeader, IOSByteArray *update) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARWeakUpdate *create_ARWeakUpdate_initWithLong_withInt_withByteArray_(jlong date, jint updateHeader, IOSByteArray *update);

FOUNDATION_EXPORT void ARWeakUpdate_init(ARWeakUpdate *self);

FOUNDATION_EXPORT ARWeakUpdate *new_ARWeakUpdate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARWeakUpdate *create_ARWeakUpdate_init();

J2OBJC_TYPE_LITERAL_HEADER(ARWeakUpdate)

@compatibility_alias ImActorCoreApiBaseWeakUpdate ARWeakUpdate;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiBaseWeakUpdate")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestDeleteKeyGroup.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestDeleteKeyGroup")
#ifdef RESTRICT_ImActorCoreApiRpcRequestDeleteKeyGroup
#define INCLUDE_ALL_ImActorCoreApiRpcRequestDeleteKeyGroup 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestDeleteKeyGroup 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestDeleteKeyGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestDeleteKeyGroup_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestDeleteKeyGroup || defined(INCLUDE_ARRequestDeleteKeyGroup))
#define ARRequestDeleteKeyGroup_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestDeleteKeyGroup : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)keyGroupId;

+ (ARRequestDeleteKeyGroup *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (jint)getKeyGroupId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestDeleteKeyGroup)

inline jint ARRequestDeleteKeyGroup_get_HEADER();
#define ARRequestDeleteKeyGroup_HEADER 2611
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestDeleteKeyGroup, HEADER, jint)

FOUNDATION_EXPORT ARRequestDeleteKeyGroup *ARRequestDeleteKeyGroup_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestDeleteKeyGroup_initWithInt_(ARRequestDeleteKeyGroup *self, jint keyGroupId);

FOUNDATION_EXPORT ARRequestDeleteKeyGroup *new_ARRequestDeleteKeyGroup_initWithInt_(jint keyGroupId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestDeleteKeyGroup *create_ARRequestDeleteKeyGroup_initWithInt_(jint keyGroupId);

FOUNDATION_EXPORT void ARRequestDeleteKeyGroup_init(ARRequestDeleteKeyGroup *self);

FOUNDATION_EXPORT ARRequestDeleteKeyGroup *new_ARRequestDeleteKeyGroup_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestDeleteKeyGroup *create_ARRequestDeleteKeyGroup_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestDeleteKeyGroup)

@compatibility_alias ImActorCoreApiRpcRequestDeleteKeyGroup ARRequestDeleteKeyGroup;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestDeleteKeyGroup")

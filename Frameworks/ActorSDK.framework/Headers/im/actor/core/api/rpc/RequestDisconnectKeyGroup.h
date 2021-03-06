//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestDisconnectKeyGroup.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestDisconnectKeyGroup")
#ifdef RESTRICT_ImActorCoreApiRpcRequestDisconnectKeyGroup
#define INCLUDE_ALL_ImActorCoreApiRpcRequestDisconnectKeyGroup 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestDisconnectKeyGroup 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestDisconnectKeyGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestDisconnectKeyGroup_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestDisconnectKeyGroup || defined(INCLUDE_ARRequestDisconnectKeyGroup))
#define ARRequestDisconnectKeyGroup_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestDisconnectKeyGroup : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)keyGroupId;

+ (ARRequestDisconnectKeyGroup *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (jint)getKeyGroupId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestDisconnectKeyGroup)

inline jint ARRequestDisconnectKeyGroup_get_HEADER();
#define ARRequestDisconnectKeyGroup_HEADER 2613
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestDisconnectKeyGroup, HEADER, jint)

FOUNDATION_EXPORT ARRequestDisconnectKeyGroup *ARRequestDisconnectKeyGroup_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestDisconnectKeyGroup_initWithInt_(ARRequestDisconnectKeyGroup *self, jint keyGroupId);

FOUNDATION_EXPORT ARRequestDisconnectKeyGroup *new_ARRequestDisconnectKeyGroup_initWithInt_(jint keyGroupId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestDisconnectKeyGroup *create_ARRequestDisconnectKeyGroup_initWithInt_(jint keyGroupId);

FOUNDATION_EXPORT void ARRequestDisconnectKeyGroup_init(ARRequestDisconnectKeyGroup *self);

FOUNDATION_EXPORT ARRequestDisconnectKeyGroup *new_ARRequestDisconnectKeyGroup_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestDisconnectKeyGroup *create_ARRequestDisconnectKeyGroup_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestDisconnectKeyGroup)

@compatibility_alias ImActorCoreApiRpcRequestDisconnectKeyGroup ARRequestDisconnectKeyGroup;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestDisconnectKeyGroup")

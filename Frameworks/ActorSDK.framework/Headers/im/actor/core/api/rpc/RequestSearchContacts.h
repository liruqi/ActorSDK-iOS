//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestSearchContacts.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestSearchContacts")
#ifdef RESTRICT_ImActorCoreApiRpcRequestSearchContacts
#define INCLUDE_ALL_ImActorCoreApiRpcRequestSearchContacts 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestSearchContacts 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestSearchContacts

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestSearchContacts_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestSearchContacts || defined(INCLUDE_ARRequestSearchContacts))
#define ARRequestSearchContacts_

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

@interface ARRequestSearchContacts : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)request;

+ (ARRequestSearchContacts *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getRequest;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestSearchContacts)

inline jint ARRequestSearchContacts_get_HEADER();
#define ARRequestSearchContacts_HEADER 112
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestSearchContacts, HEADER, jint)

FOUNDATION_EXPORT ARRequestSearchContacts *ARRequestSearchContacts_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestSearchContacts_initWithNSString_(ARRequestSearchContacts *self, NSString *request);

FOUNDATION_EXPORT ARRequestSearchContacts *new_ARRequestSearchContacts_initWithNSString_(NSString *request) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSearchContacts *create_ARRequestSearchContacts_initWithNSString_(NSString *request);

FOUNDATION_EXPORT void ARRequestSearchContacts_init(ARRequestSearchContacts *self);

FOUNDATION_EXPORT ARRequestSearchContacts *new_ARRequestSearchContacts_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSearchContacts *create_ARRequestSearchContacts_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestSearchContacts)

@compatibility_alias ImActorCoreApiRpcRequestSearchContacts ARRequestSearchContacts;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestSearchContacts")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestGetContacts.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestGetContacts")
#ifdef RESTRICT_ImActorCoreApiRpcRequestGetContacts
#define INCLUDE_ALL_ImActorCoreApiRpcRequestGetContacts 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestGetContacts 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestGetContacts

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestGetContacts_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestGetContacts || defined(INCLUDE_ARRequestGetContacts))
#define ARRequestGetContacts_

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

@interface ARRequestGetContacts : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)contactsHash;

+ (ARRequestGetContacts *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getContactsHash;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestGetContacts)

inline jint ARRequestGetContacts_get_HEADER();
#define ARRequestGetContacts_HEADER 87
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestGetContacts, HEADER, jint)

FOUNDATION_EXPORT ARRequestGetContacts *ARRequestGetContacts_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestGetContacts_initWithNSString_(ARRequestGetContacts *self, NSString *contactsHash);

FOUNDATION_EXPORT ARRequestGetContacts *new_ARRequestGetContacts_initWithNSString_(NSString *contactsHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestGetContacts *create_ARRequestGetContacts_initWithNSString_(NSString *contactsHash);

FOUNDATION_EXPORT void ARRequestGetContacts_init(ARRequestGetContacts *self);

FOUNDATION_EXPORT ARRequestGetContacts *new_ARRequestGetContacts_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestGetContacts *create_ARRequestGetContacts_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestGetContacts)

@compatibility_alias ImActorCoreApiRpcRequestGetContacts ARRequestGetContacts;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestGetContacts")

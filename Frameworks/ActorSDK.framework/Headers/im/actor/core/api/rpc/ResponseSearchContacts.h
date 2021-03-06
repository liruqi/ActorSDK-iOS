//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/ResponseSearchContacts.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseSearchContacts")
#ifdef RESTRICT_ImActorCoreApiRpcResponseSearchContacts
#define INCLUDE_ALL_ImActorCoreApiRpcResponseSearchContacts 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcResponseSearchContacts 1
#endif
#undef RESTRICT_ImActorCoreApiRpcResponseSearchContacts

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseSearchContacts_) && (INCLUDE_ALL_ImActorCoreApiRpcResponseSearchContacts || defined(INCLUDE_ARResponseSearchContacts))
#define ARResponseSearchContacts_

#define RESTRICT_ImActorCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/actor/core/network/parser/Response.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseSearchContacts : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)users;

+ (ARResponseSearchContacts *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getUsers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseSearchContacts)

inline jint ARResponseSearchContacts_get_HEADER();
#define ARResponseSearchContacts_HEADER 113
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseSearchContacts, HEADER, jint)

FOUNDATION_EXPORT ARResponseSearchContacts *ARResponseSearchContacts_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseSearchContacts_initWithJavaUtilList_(ARResponseSearchContacts *self, id<JavaUtilList> users);

FOUNDATION_EXPORT ARResponseSearchContacts *new_ARResponseSearchContacts_initWithJavaUtilList_(id<JavaUtilList> users) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseSearchContacts *create_ARResponseSearchContacts_initWithJavaUtilList_(id<JavaUtilList> users);

FOUNDATION_EXPORT void ARResponseSearchContacts_init(ARResponseSearchContacts *self);

FOUNDATION_EXPORT ARResponseSearchContacts *new_ARResponseSearchContacts_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseSearchContacts *create_ARResponseSearchContacts_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseSearchContacts)

@compatibility_alias ImActorCoreApiRpcResponseSearchContacts ARResponseSearchContacts;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseSearchContacts")

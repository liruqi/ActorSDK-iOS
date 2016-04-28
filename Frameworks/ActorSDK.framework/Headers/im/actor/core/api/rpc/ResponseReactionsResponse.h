//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/ResponseReactionsResponse.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseReactionsResponse")
#ifdef RESTRICT_ImActorCoreApiRpcResponseReactionsResponse
#define INCLUDE_ALL_ImActorCoreApiRpcResponseReactionsResponse 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcResponseReactionsResponse 1
#endif
#undef RESTRICT_ImActorCoreApiRpcResponseReactionsResponse

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseReactionsResponse_) && (INCLUDE_ALL_ImActorCoreApiRpcResponseReactionsResponse || defined(INCLUDE_ARResponseReactionsResponse))
#define ARResponseReactionsResponse_

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

@interface ARResponseReactionsResponse : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)seq
              withByteArray:(IOSByteArray * __nonnull)state
           withJavaUtilList:(id<JavaUtilList> __nonnull)reactions;

+ (ARResponseReactionsResponse *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getReactions;

- (jint)getSeq;

- (IOSByteArray * __nonnull)getState;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseReactionsResponse)

inline jint ARResponseReactionsResponse_get_HEADER();
#define ARResponseReactionsResponse_HEADER 219
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseReactionsResponse, HEADER, jint)

FOUNDATION_EXPORT ARResponseReactionsResponse *ARResponseReactionsResponse_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseReactionsResponse_initWithInt_withByteArray_withJavaUtilList_(ARResponseReactionsResponse *self, jint seq, IOSByteArray *state, id<JavaUtilList> reactions);

FOUNDATION_EXPORT ARResponseReactionsResponse *new_ARResponseReactionsResponse_initWithInt_withByteArray_withJavaUtilList_(jint seq, IOSByteArray *state, id<JavaUtilList> reactions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseReactionsResponse *create_ARResponseReactionsResponse_initWithInt_withByteArray_withJavaUtilList_(jint seq, IOSByteArray *state, id<JavaUtilList> reactions);

FOUNDATION_EXPORT void ARResponseReactionsResponse_init(ARResponseReactionsResponse *self);

FOUNDATION_EXPORT ARResponseReactionsResponse *new_ARResponseReactionsResponse_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseReactionsResponse *create_ARResponseReactionsResponse_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseReactionsResponse)

@compatibility_alias ImActorCoreApiRpcResponseReactionsResponse ARResponseReactionsResponse;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseReactionsResponse")

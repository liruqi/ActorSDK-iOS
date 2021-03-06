//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/ResponseSeq.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseSeq")
#ifdef RESTRICT_ImActorCoreApiRpcResponseSeq
#define INCLUDE_ALL_ImActorCoreApiRpcResponseSeq 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcResponseSeq 1
#endif
#undef RESTRICT_ImActorCoreApiRpcResponseSeq

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseSeq_) && (INCLUDE_ALL_ImActorCoreApiRpcResponseSeq || defined(INCLUDE_ARResponseSeq))
#define ARResponseSeq_

#define RESTRICT_ImActorCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/actor/core/network/parser/Response.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseSeq : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)seq
              withByteArray:(IOSByteArray * __nonnull)state;

+ (ARResponseSeq *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (jint)getSeq;

- (IOSByteArray * __nonnull)getState;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseSeq)

inline jint ARResponseSeq_get_HEADER();
#define ARResponseSeq_HEADER 72
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseSeq, HEADER, jint)

FOUNDATION_EXPORT ARResponseSeq *ARResponseSeq_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseSeq_initWithInt_withByteArray_(ARResponseSeq *self, jint seq, IOSByteArray *state);

FOUNDATION_EXPORT ARResponseSeq *new_ARResponseSeq_initWithInt_withByteArray_(jint seq, IOSByteArray *state) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseSeq *create_ARResponseSeq_initWithInt_withByteArray_(jint seq, IOSByteArray *state);

FOUNDATION_EXPORT void ARResponseSeq_init(ARResponseSeq *self);

FOUNDATION_EXPORT ARResponseSeq *new_ARResponseSeq_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseSeq *create_ARResponseSeq_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseSeq)

@compatibility_alias ImActorCoreApiRpcResponseSeq ARResponseSeq;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseSeq")

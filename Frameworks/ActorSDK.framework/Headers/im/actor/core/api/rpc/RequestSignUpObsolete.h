//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestSignUpObsolete.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestSignUpObsolete")
#ifdef RESTRICT_ImActorCoreApiRpcRequestSignUpObsolete
#define INCLUDE_ALL_ImActorCoreApiRpcRequestSignUpObsolete 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestSignUpObsolete 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestSignUpObsolete

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestSignUpObsolete_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestSignUpObsolete || defined(INCLUDE_ARRequestSignUpObsolete))
#define ARRequestSignUpObsolete_

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

@interface ARRequestSignUpObsolete : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)phoneNumber
                withNSString:(NSString * __nonnull)smsHash
                withNSString:(NSString * __nonnull)smsCode
                withNSString:(NSString * __nonnull)name
               withByteArray:(IOSByteArray * __nonnull)deviceHash
                withNSString:(NSString * __nonnull)deviceTitle
                     withInt:(jint)appId
                withNSString:(NSString * __nonnull)appKey
                 withBoolean:(jboolean)isSilent;

+ (ARRequestSignUpObsolete *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getAppId;

- (NSString * __nonnull)getAppKey;

- (IOSByteArray * __nonnull)getDeviceHash;

- (NSString * __nonnull)getDeviceTitle;

- (jint)getHeaderKey;

- (NSString * __nonnull)getName;

- (jlong)getPhoneNumber;

- (NSString * __nonnull)getSmsCode;

- (NSString * __nonnull)getSmsHash;

- (jboolean)isSilent;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestSignUpObsolete)

inline jint ARRequestSignUpObsolete_get_HEADER();
#define ARRequestSignUpObsolete_HEADER 4
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestSignUpObsolete, HEADER, jint)

FOUNDATION_EXPORT ARRequestSignUpObsolete *ARRequestSignUpObsolete_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestSignUpObsolete_initWithLong_withNSString_withNSString_withNSString_withByteArray_withNSString_withInt_withNSString_withBoolean_(ARRequestSignUpObsolete *self, jlong phoneNumber, NSString *smsHash, NSString *smsCode, NSString *name, IOSByteArray *deviceHash, NSString *deviceTitle, jint appId, NSString *appKey, jboolean isSilent);

FOUNDATION_EXPORT ARRequestSignUpObsolete *new_ARRequestSignUpObsolete_initWithLong_withNSString_withNSString_withNSString_withByteArray_withNSString_withInt_withNSString_withBoolean_(jlong phoneNumber, NSString *smsHash, NSString *smsCode, NSString *name, IOSByteArray *deviceHash, NSString *deviceTitle, jint appId, NSString *appKey, jboolean isSilent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSignUpObsolete *create_ARRequestSignUpObsolete_initWithLong_withNSString_withNSString_withNSString_withByteArray_withNSString_withInt_withNSString_withBoolean_(jlong phoneNumber, NSString *smsHash, NSString *smsCode, NSString *name, IOSByteArray *deviceHash, NSString *deviceTitle, jint appId, NSString *appKey, jboolean isSilent);

FOUNDATION_EXPORT void ARRequestSignUpObsolete_init(ARRequestSignUpObsolete *self);

FOUNDATION_EXPORT ARRequestSignUpObsolete *new_ARRequestSignUpObsolete_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSignUpObsolete *create_ARRequestSignUpObsolete_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestSignUpObsolete)

@compatibility_alias ImActorCoreApiRpcRequestSignUpObsolete ARRequestSignUpObsolete;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestSignUpObsolete")

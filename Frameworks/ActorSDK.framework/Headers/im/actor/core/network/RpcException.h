//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/RpcException.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkRpcException")
#ifdef RESTRICT_ImActorCoreNetworkRpcException
#define INCLUDE_ALL_ImActorCoreNetworkRpcException 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkRpcException 1
#endif
#undef RESTRICT_ImActorCoreNetworkRpcException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACRpcException_) && (INCLUDE_ALL_ImActorCoreNetworkRpcException || defined(INCLUDE_ACRpcException))
#define ACRpcException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
@import j2objc;

@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ACRpcException : JavaLangException
@property (readonly, copy, nonatomic, getter=getTag) NSString *tag;
@property (readonly, nonatomic, getter=getCode) jint code;
@property (readonly, copy, nonatomic, getter=getMessage) NSString *message;
@property (readonly, nonatomic, getter=isCanTryAgain) jboolean canTryAgain;
@property (readonly, nonatomic, getter=getRelatedData) IOSByteArray *relatedData;

#pragma mark Public

- (instancetype)initWithNSString:(NSString * __nonnull)tag
                         withInt:(jint)code
                    withNSString:(NSString * __nonnull)message
                     withBoolean:(jboolean)canTryAgain
                   withByteArray:(IOSByteArray * __nullable)relatedData;

- (jint)getCode;

- (NSString * __nonnull)getMessage;

- (IOSByteArray * __nullable)getRelatedData;

- (NSString * __nonnull)getTag;

- (jboolean)isCanTryAgain;

@end

J2OBJC_EMPTY_STATIC_INIT(ACRpcException)

FOUNDATION_EXPORT void ACRpcException_initWithNSString_withInt_withNSString_withBoolean_withByteArray_(ACRpcException *self, NSString *tag, jint code, NSString *message, jboolean canTryAgain, IOSByteArray *relatedData);

FOUNDATION_EXPORT ACRpcException *new_ACRpcException_initWithNSString_withInt_withNSString_withBoolean_withByteArray_(NSString *tag, jint code, NSString *message, jboolean canTryAgain, IOSByteArray *relatedData) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACRpcException *create_ACRpcException_initWithNSString_withInt_withNSString_withBoolean_withByteArray_(NSString *tag, jint code, NSString *message, jboolean canTryAgain, IOSByteArray *relatedData);

J2OBJC_TYPE_LITERAL_HEADER(ACRpcException)

@compatibility_alias ImActorCoreNetworkRpcException ACRpcException;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkRpcException")

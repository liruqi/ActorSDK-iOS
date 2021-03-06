//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/ResponseGetFileUrl.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseGetFileUrl")
#ifdef RESTRICT_ImActorCoreApiRpcResponseGetFileUrl
#define INCLUDE_ALL_ImActorCoreApiRpcResponseGetFileUrl 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcResponseGetFileUrl 1
#endif
#undef RESTRICT_ImActorCoreApiRpcResponseGetFileUrl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseGetFileUrl_) && (INCLUDE_ALL_ImActorCoreApiRpcResponseGetFileUrl || defined(INCLUDE_ARResponseGetFileUrl))
#define ARResponseGetFileUrl_

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

@interface ARResponseGetFileUrl : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)url
                         withInt:(jint)timeout
                    withNSString:(NSString * __nullable)unsignedUrl
                withJavaUtilList:(id<JavaUtilList> __nonnull)unsignedUrlHeaders;

+ (ARResponseGetFileUrl *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (jint)getTimeout;

- (NSString * __nullable)getUnsignedUrl;

- (id<JavaUtilList> __nonnull)getUnsignedUrlHeaders;

- (NSString * __nonnull)getUrl;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseGetFileUrl)

inline jint ARResponseGetFileUrl_get_HEADER();
#define ARResponseGetFileUrl_HEADER 78
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseGetFileUrl, HEADER, jint)

FOUNDATION_EXPORT ARResponseGetFileUrl *ARResponseGetFileUrl_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseGetFileUrl_initWithNSString_withInt_withNSString_withJavaUtilList_(ARResponseGetFileUrl *self, NSString *url, jint timeout, NSString *unsignedUrl, id<JavaUtilList> unsignedUrlHeaders);

FOUNDATION_EXPORT ARResponseGetFileUrl *new_ARResponseGetFileUrl_initWithNSString_withInt_withNSString_withJavaUtilList_(NSString *url, jint timeout, NSString *unsignedUrl, id<JavaUtilList> unsignedUrlHeaders) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseGetFileUrl *create_ARResponseGetFileUrl_initWithNSString_withInt_withNSString_withJavaUtilList_(NSString *url, jint timeout, NSString *unsignedUrl, id<JavaUtilList> unsignedUrlHeaders);

FOUNDATION_EXPORT void ARResponseGetFileUrl_init(ARResponseGetFileUrl *self);

FOUNDATION_EXPORT ARResponseGetFileUrl *new_ARResponseGetFileUrl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseGetFileUrl *create_ARResponseGetFileUrl_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseGetFileUrl)

@compatibility_alias ImActorCoreApiRpcResponseGetFileUrl ARResponseGetFileUrl;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseGetFileUrl")

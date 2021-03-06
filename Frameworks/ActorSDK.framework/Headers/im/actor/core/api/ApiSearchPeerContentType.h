//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiSearchPeerContentType.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiSearchPeerContentType")
#ifdef RESTRICT_ImActorCoreApiApiSearchPeerContentType
#define INCLUDE_ALL_ImActorCoreApiApiSearchPeerContentType 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiSearchPeerContentType 1
#endif
#undef RESTRICT_ImActorCoreApiApiSearchPeerContentType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiSearchPeerContentType_) && (INCLUDE_ALL_ImActorCoreApiApiSearchPeerContentType || defined(INCLUDE_ARApiSearchPeerContentType))
#define ARApiSearchPeerContentType_

#define RESTRICT_ImActorCoreApiApiSearchCondition 1
#define INCLUDE_ARApiSearchCondition 1
#include "../../../../im/actor/core/api/ApiSearchCondition.h"

@class ARApiSearchContentType;
@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiSearchPeerContentType : ARApiSearchCondition

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiSearchContentType:(ARApiSearchContentType * __nonnull)contentType;

- (ARApiSearchContentType * __nonnull)getContentType;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiSearchPeerContentType)

FOUNDATION_EXPORT void ARApiSearchPeerContentType_initWithARApiSearchContentType_(ARApiSearchPeerContentType *self, ARApiSearchContentType *contentType);

FOUNDATION_EXPORT ARApiSearchPeerContentType *new_ARApiSearchPeerContentType_initWithARApiSearchContentType_(ARApiSearchContentType *contentType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiSearchPeerContentType *create_ARApiSearchPeerContentType_initWithARApiSearchContentType_(ARApiSearchContentType *contentType);

FOUNDATION_EXPORT void ARApiSearchPeerContentType_init(ARApiSearchPeerContentType *self);

FOUNDATION_EXPORT ARApiSearchPeerContentType *new_ARApiSearchPeerContentType_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiSearchPeerContentType *create_ARApiSearchPeerContentType_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiSearchPeerContentType)

@compatibility_alias ImActorCoreApiApiSearchPeerContentType ARApiSearchPeerContentType;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiSearchPeerContentType")

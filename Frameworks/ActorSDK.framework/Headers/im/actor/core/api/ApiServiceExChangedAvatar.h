//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiServiceExChangedAvatar.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiServiceExChangedAvatar")
#ifdef RESTRICT_ImActorCoreApiApiServiceExChangedAvatar
#define INCLUDE_ALL_ImActorCoreApiApiServiceExChangedAvatar 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiServiceExChangedAvatar 1
#endif
#undef RESTRICT_ImActorCoreApiApiServiceExChangedAvatar

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiServiceExChangedAvatar_) && (INCLUDE_ALL_ImActorCoreApiApiServiceExChangedAvatar || defined(INCLUDE_ARApiServiceExChangedAvatar))
#define ARApiServiceExChangedAvatar_

#define RESTRICT_ImActorCoreApiApiServiceEx 1
#define INCLUDE_ARApiServiceEx 1
#include "../../../../im/actor/core/api/ApiServiceEx.h"

@class ARApiAvatar;
@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiServiceExChangedAvatar : ARApiServiceEx

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiAvatar:(ARApiAvatar * __nullable)avatar;

- (ARApiAvatar * __nullable)getAvatar;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiServiceExChangedAvatar)

FOUNDATION_EXPORT void ARApiServiceExChangedAvatar_initWithARApiAvatar_(ARApiServiceExChangedAvatar *self, ARApiAvatar *avatar);

FOUNDATION_EXPORT ARApiServiceExChangedAvatar *new_ARApiServiceExChangedAvatar_initWithARApiAvatar_(ARApiAvatar *avatar) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExChangedAvatar *create_ARApiServiceExChangedAvatar_initWithARApiAvatar_(ARApiAvatar *avatar);

FOUNDATION_EXPORT void ARApiServiceExChangedAvatar_init(ARApiServiceExChangedAvatar *self);

FOUNDATION_EXPORT ARApiServiceExChangedAvatar *new_ARApiServiceExChangedAvatar_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExChangedAvatar *create_ARApiServiceExChangedAvatar_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiServiceExChangedAvatar)

@compatibility_alias ImActorCoreApiApiServiceExChangedAvatar ARApiServiceExChangedAvatar;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiServiceExChangedAvatar")

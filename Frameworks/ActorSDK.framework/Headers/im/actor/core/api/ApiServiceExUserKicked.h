//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiServiceExUserKicked.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiServiceExUserKicked")
#ifdef RESTRICT_ImActorCoreApiApiServiceExUserKicked
#define INCLUDE_ALL_ImActorCoreApiApiServiceExUserKicked 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiServiceExUserKicked 1
#endif
#undef RESTRICT_ImActorCoreApiApiServiceExUserKicked

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiServiceExUserKicked_) && (INCLUDE_ALL_ImActorCoreApiApiServiceExUserKicked || defined(INCLUDE_ARApiServiceExUserKicked))
#define ARApiServiceExUserKicked_

#define RESTRICT_ImActorCoreApiApiServiceEx 1
#define INCLUDE_ARApiServiceEx 1
#include "../../../../im/actor/core/api/ApiServiceEx.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiServiceExUserKicked : ARApiServiceEx

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)kickedUid;

- (jint)getHeader;

- (jint)getKickedUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiServiceExUserKicked)

FOUNDATION_EXPORT void ARApiServiceExUserKicked_initWithInt_(ARApiServiceExUserKicked *self, jint kickedUid);

FOUNDATION_EXPORT ARApiServiceExUserKicked *new_ARApiServiceExUserKicked_initWithInt_(jint kickedUid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExUserKicked *create_ARApiServiceExUserKicked_initWithInt_(jint kickedUid);

FOUNDATION_EXPORT void ARApiServiceExUserKicked_init(ARApiServiceExUserKicked *self);

FOUNDATION_EXPORT ARApiServiceExUserKicked *new_ARApiServiceExUserKicked_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExUserKicked *create_ARApiServiceExUserKicked_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiServiceExUserKicked)

@compatibility_alias ImActorCoreApiApiServiceExUserKicked ARApiServiceExUserKicked;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiServiceExUserKicked")

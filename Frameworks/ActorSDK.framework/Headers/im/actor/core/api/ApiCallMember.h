//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiCallMember.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiCallMember")
#ifdef RESTRICT_ImActorCoreApiApiCallMember
#define INCLUDE_ALL_ImActorCoreApiApiCallMember 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiCallMember 1
#endif
#undef RESTRICT_ImActorCoreApiApiCallMember

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiCallMember_) && (INCLUDE_ALL_ImActorCoreApiApiCallMember || defined(INCLUDE_ARApiCallMember))
#define ARApiCallMember_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/actor/runtime/bser/BserObject.h"

@class ARApiCallMemberStateHolder;
@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiCallMember : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)userId
withARApiCallMemberStateHolder:(ARApiCallMemberStateHolder * __nonnull)state;

- (ARApiCallMemberStateHolder * __nonnull)getState;

- (jint)getUserId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiCallMember)

FOUNDATION_EXPORT void ARApiCallMember_initWithInt_withARApiCallMemberStateHolder_(ARApiCallMember *self, jint userId, ARApiCallMemberStateHolder *state);

FOUNDATION_EXPORT ARApiCallMember *new_ARApiCallMember_initWithInt_withARApiCallMemberStateHolder_(jint userId, ARApiCallMemberStateHolder *state) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiCallMember *create_ARApiCallMember_initWithInt_withARApiCallMemberStateHolder_(jint userId, ARApiCallMemberStateHolder *state);

FOUNDATION_EXPORT void ARApiCallMember_init(ARApiCallMember *self);

FOUNDATION_EXPORT ARApiCallMember *new_ARApiCallMember_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiCallMember *create_ARApiCallMember_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiCallMember)

@compatibility_alias ImActorCoreApiApiCallMember ARApiCallMember;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiCallMember")

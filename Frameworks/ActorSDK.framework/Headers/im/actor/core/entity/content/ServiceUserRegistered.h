//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/content/ServiceUserRegistered.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityContentServiceUserRegistered")
#ifdef RESTRICT_ImActorCoreEntityContentServiceUserRegistered
#define INCLUDE_ALL_ImActorCoreEntityContentServiceUserRegistered 0
#else
#define INCLUDE_ALL_ImActorCoreEntityContentServiceUserRegistered 1
#endif
#undef RESTRICT_ImActorCoreEntityContentServiceUserRegistered

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACServiceUserRegistered_) && (INCLUDE_ALL_ImActorCoreEntityContentServiceUserRegistered || defined(INCLUDE_ACServiceUserRegistered))
#define ACServiceUserRegistered_

#define RESTRICT_ImActorCoreEntityContentServiceContent 1
#define INCLUDE_ACServiceContent 1
#include "../../../../../im/actor/core/entity/content/ServiceContent.h"

@class ACContentRemoteContainer;

@interface ACServiceUserRegistered : ACServiceContent

#pragma mark Public

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

+ (ACServiceUserRegistered *)create;

@end

J2OBJC_EMPTY_STATIC_INIT(ACServiceUserRegistered)

FOUNDATION_EXPORT ACServiceUserRegistered *ACServiceUserRegistered_create();

FOUNDATION_EXPORT void ACServiceUserRegistered_initWithACContentRemoteContainer_(ACServiceUserRegistered *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACServiceUserRegistered *new_ACServiceUserRegistered_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACServiceUserRegistered *create_ACServiceUserRegistered_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACServiceUserRegistered)

@compatibility_alias ImActorCoreEntityContentServiceUserRegistered ACServiceUserRegistered;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityContentServiceUserRegistered")

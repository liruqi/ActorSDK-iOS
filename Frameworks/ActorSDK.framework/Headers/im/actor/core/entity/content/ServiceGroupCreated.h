//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/content/ServiceGroupCreated.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityContentServiceGroupCreated")
#ifdef RESTRICT_ImActorCoreEntityContentServiceGroupCreated
#define INCLUDE_ALL_ImActorCoreEntityContentServiceGroupCreated 0
#else
#define INCLUDE_ALL_ImActorCoreEntityContentServiceGroupCreated 1
#endif
#undef RESTRICT_ImActorCoreEntityContentServiceGroupCreated

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACServiceGroupCreated_) && (INCLUDE_ALL_ImActorCoreEntityContentServiceGroupCreated || defined(INCLUDE_ACServiceGroupCreated))
#define ACServiceGroupCreated_

#define RESTRICT_ImActorCoreEntityContentServiceContent 1
#define INCLUDE_ACServiceContent 1
#include "../../../../../im/actor/core/entity/content/ServiceContent.h"

@class ACContentRemoteContainer;

@interface ACServiceGroupCreated : ACServiceContent

#pragma mark Public

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

+ (ACServiceGroupCreated *)create;

@end

J2OBJC_EMPTY_STATIC_INIT(ACServiceGroupCreated)

FOUNDATION_EXPORT ACServiceGroupCreated *ACServiceGroupCreated_create();

FOUNDATION_EXPORT void ACServiceGroupCreated_initWithACContentRemoteContainer_(ACServiceGroupCreated *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACServiceGroupCreated *new_ACServiceGroupCreated_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACServiceGroupCreated *create_ACServiceGroupCreated_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACServiceGroupCreated)

@compatibility_alias ImActorCoreEntityContentServiceGroupCreated ACServiceGroupCreated;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityContentServiceGroupCreated")

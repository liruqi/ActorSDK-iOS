//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/content/ServiceGroupUserKicked.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityContentServiceGroupUserKicked")
#ifdef RESTRICT_ImActorCoreEntityContentServiceGroupUserKicked
#define INCLUDE_ALL_ImActorCoreEntityContentServiceGroupUserKicked 0
#else
#define INCLUDE_ALL_ImActorCoreEntityContentServiceGroupUserKicked 1
#endif
#undef RESTRICT_ImActorCoreEntityContentServiceGroupUserKicked

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACServiceGroupUserKicked_) && (INCLUDE_ALL_ImActorCoreEntityContentServiceGroupUserKicked || defined(INCLUDE_ACServiceGroupUserKicked))
#define ACServiceGroupUserKicked_

#define RESTRICT_ImActorCoreEntityContentServiceContent 1
#define INCLUDE_ACServiceContent 1
#include "../../../../../im/actor/core/entity/content/ServiceContent.h"

@class ACContentRemoteContainer;

@interface ACServiceGroupUserKicked : ACServiceContent

#pragma mark Public

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

+ (ACServiceGroupUserKicked *)createWithInt:(jint)uid;

- (jint)getKickedUid;

@end

J2OBJC_EMPTY_STATIC_INIT(ACServiceGroupUserKicked)

FOUNDATION_EXPORT ACServiceGroupUserKicked *ACServiceGroupUserKicked_createWithInt_(jint uid);

FOUNDATION_EXPORT void ACServiceGroupUserKicked_initWithACContentRemoteContainer_(ACServiceGroupUserKicked *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACServiceGroupUserKicked *new_ACServiceGroupUserKicked_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACServiceGroupUserKicked *create_ACServiceGroupUserKicked_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACServiceGroupUserKicked)

@compatibility_alias ImActorCoreEntityContentServiceGroupUserKicked ACServiceGroupUserKicked;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityContentServiceGroupUserKicked")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/content/UnsupportedContent.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityContentUnsupportedContent")
#ifdef RESTRICT_ImActorCoreEntityContentUnsupportedContent
#define INCLUDE_ALL_ImActorCoreEntityContentUnsupportedContent 0
#else
#define INCLUDE_ALL_ImActorCoreEntityContentUnsupportedContent 1
#endif
#undef RESTRICT_ImActorCoreEntityContentUnsupportedContent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACUnsupportedContent_) && (INCLUDE_ALL_ImActorCoreEntityContentUnsupportedContent || defined(INCLUDE_ACUnsupportedContent))
#define ACUnsupportedContent_

#define RESTRICT_ImActorCoreEntityContentAbsContent 1
#define INCLUDE_ACAbsContent 1
#include "../../../../../im/actor/core/entity/content/AbsContent.h"

@class ACContentRemoteContainer;

@interface ACUnsupportedContent : ACAbsContent

#pragma mark Public

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

@end

J2OBJC_EMPTY_STATIC_INIT(ACUnsupportedContent)

FOUNDATION_EXPORT void ACUnsupportedContent_initWithACContentRemoteContainer_(ACUnsupportedContent *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACUnsupportedContent *new_ACUnsupportedContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACUnsupportedContent *create_ACUnsupportedContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACUnsupportedContent)

@compatibility_alias ImActorCoreEntityContentUnsupportedContent ACUnsupportedContent;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityContentUnsupportedContent")

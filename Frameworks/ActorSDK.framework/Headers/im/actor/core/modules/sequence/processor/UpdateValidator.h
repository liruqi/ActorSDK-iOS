//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/sequence/processor/UpdateValidator.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesSequenceProcessorUpdateValidator")
#ifdef RESTRICT_ImActorCoreModulesSequenceProcessorUpdateValidator
#define INCLUDE_ALL_ImActorCoreModulesSequenceProcessorUpdateValidator 0
#else
#define INCLUDE_ALL_ImActorCoreModulesSequenceProcessorUpdateValidator 1
#endif
#undef RESTRICT_ImActorCoreModulesSequenceProcessorUpdateValidator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesSequenceProcessorUpdateValidator_) && (INCLUDE_ALL_ImActorCoreModulesSequenceProcessorUpdateValidator || defined(INCLUDE_ImActorCoreModulesSequenceProcessorUpdateValidator))
#define ImActorCoreModulesSequenceProcessorUpdateValidator_

#define RESTRICT_ImActorCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../../im/actor/core/modules/AbsModule.h"

@class ACUpdate;
@protocol ACModuleContext;
@protocol JavaUtilCollection;

@interface ImActorCoreModulesSequenceProcessorUpdateValidator : ACAbsModule

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (jboolean)hasGroupsWithJavaUtilCollection:(id<JavaUtilCollection>)gids;

- (jboolean)hasUsersWithJavaUtilCollection:(id<JavaUtilCollection>)uids;

- (jboolean)isCausesInvalidationWithACUpdate:(ACUpdate *)update;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesSequenceProcessorUpdateValidator)

FOUNDATION_EXPORT void ImActorCoreModulesSequenceProcessorUpdateValidator_initWithACModuleContext_(ImActorCoreModulesSequenceProcessorUpdateValidator *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesSequenceProcessorUpdateValidator *new_ImActorCoreModulesSequenceProcessorUpdateValidator_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesSequenceProcessorUpdateValidator *create_ImActorCoreModulesSequenceProcessorUpdateValidator_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesSequenceProcessorUpdateValidator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesSequenceProcessorUpdateValidator")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/calls/CallsProcessor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesCallsCallsProcessor")
#ifdef RESTRICT_ImActorCoreModulesCallsCallsProcessor
#define INCLUDE_ALL_ImActorCoreModulesCallsCallsProcessor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesCallsCallsProcessor 1
#endif
#undef RESTRICT_ImActorCoreModulesCallsCallsProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesCallsCallsProcessor_) && (INCLUDE_ALL_ImActorCoreModulesCallsCallsProcessor || defined(INCLUDE_ImActorCoreModulesCallsCallsProcessor))
#define ImActorCoreModulesCallsCallsProcessor_

#define RESTRICT_ImActorCoreModulesSequenceProcessorWeakProcessor 1
#define INCLUDE_ImActorCoreModulesSequenceProcessorWeakProcessor 1
#include "../../../../../im/actor/core/modules/sequence/processor/WeakProcessor.h"

@class ACUpdate;
@protocol ACModuleContext;

@interface ImActorCoreModulesCallsCallsProcessor : NSObject < ImActorCoreModulesSequenceProcessorWeakProcessor >

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (jboolean)processWithACUpdate:(ACUpdate *)update
                       withLong:(jlong)date;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesCallsCallsProcessor)

FOUNDATION_EXPORT void ImActorCoreModulesCallsCallsProcessor_initWithACModuleContext_(ImActorCoreModulesCallsCallsProcessor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesCallsCallsProcessor *new_ImActorCoreModulesCallsCallsProcessor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesCallsCallsProcessor *create_ImActorCoreModulesCallsCallsProcessor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsCallsProcessor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesCallsCallsProcessor")

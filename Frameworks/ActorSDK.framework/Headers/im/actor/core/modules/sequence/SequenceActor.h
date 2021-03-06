//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/sequence/SequenceActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesSequenceSequenceActor")
#ifdef RESTRICT_ImActorCoreModulesSequenceSequenceActor
#define INCLUDE_ALL_ImActorCoreModulesSequenceSequenceActor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesSequenceSequenceActor 1
#endif
#undef RESTRICT_ImActorCoreModulesSequenceSequenceActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesSequenceSequenceActor_) && (INCLUDE_ALL_ImActorCoreModulesSequenceSequenceActor || defined(INCLUDE_ImActorCoreModulesSequenceSequenceActor))
#define ImActorCoreModulesSequenceSequenceActor_

#define RESTRICT_ImActorCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/actor/core/modules/ModuleActor.h"

@protocol ACModuleContext;
@protocol ARActorCreator;

@interface ImActorCoreModulesSequenceSequenceActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)modules;

+ (id<ARActorCreator>)CONSTRUCTORWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_STATIC_INIT(ImActorCoreModulesSequenceSequenceActor)

FOUNDATION_EXPORT id<ARActorCreator> ImActorCoreModulesSequenceSequenceActor_CONSTRUCTORWithACModuleContext_(id<ACModuleContext> context);

FOUNDATION_EXPORT void ImActorCoreModulesSequenceSequenceActor_initWithACModuleContext_(ImActorCoreModulesSequenceSequenceActor *self, id<ACModuleContext> modules);

FOUNDATION_EXPORT ImActorCoreModulesSequenceSequenceActor *new_ImActorCoreModulesSequenceSequenceActor_initWithACModuleContext_(id<ACModuleContext> modules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesSequenceSequenceActor *create_ImActorCoreModulesSequenceSequenceActor_initWithACModuleContext_(id<ACModuleContext> modules);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesSequenceSequenceActor)

#endif

#if !defined (ImActorCoreModulesSequenceSequenceActor_ForceInvalidate_) && (INCLUDE_ALL_ImActorCoreModulesSequenceSequenceActor || defined(INCLUDE_ImActorCoreModulesSequenceSequenceActor_ForceInvalidate))
#define ImActorCoreModulesSequenceSequenceActor_ForceInvalidate_

@interface ImActorCoreModulesSequenceSequenceActor_ForceInvalidate : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesSequenceSequenceActor_ForceInvalidate)

FOUNDATION_EXPORT void ImActorCoreModulesSequenceSequenceActor_ForceInvalidate_init(ImActorCoreModulesSequenceSequenceActor_ForceInvalidate *self);

FOUNDATION_EXPORT ImActorCoreModulesSequenceSequenceActor_ForceInvalidate *new_ImActorCoreModulesSequenceSequenceActor_ForceInvalidate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesSequenceSequenceActor_ForceInvalidate *create_ImActorCoreModulesSequenceSequenceActor_ForceInvalidate_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesSequenceSequenceActor_ForceInvalidate)

#endif

#if !defined (ImActorCoreModulesSequenceSequenceActor_Invalidate_) && (INCLUDE_ALL_ImActorCoreModulesSequenceSequenceActor || defined(INCLUDE_ImActorCoreModulesSequenceSequenceActor_Invalidate))
#define ImActorCoreModulesSequenceSequenceActor_Invalidate_

@interface ImActorCoreModulesSequenceSequenceActor_Invalidate : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesSequenceSequenceActor_Invalidate)

FOUNDATION_EXPORT void ImActorCoreModulesSequenceSequenceActor_Invalidate_init(ImActorCoreModulesSequenceSequenceActor_Invalidate *self);

FOUNDATION_EXPORT ImActorCoreModulesSequenceSequenceActor_Invalidate *new_ImActorCoreModulesSequenceSequenceActor_Invalidate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesSequenceSequenceActor_Invalidate *create_ImActorCoreModulesSequenceSequenceActor_Invalidate_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesSequenceSequenceActor_Invalidate)

#endif

#if !defined (ImActorCoreModulesSequenceSequenceActor_PushSeq_) && (INCLUDE_ALL_ImActorCoreModulesSequenceSequenceActor || defined(INCLUDE_ImActorCoreModulesSequenceSequenceActor_PushSeq))
#define ImActorCoreModulesSequenceSequenceActor_PushSeq_

@interface ImActorCoreModulesSequenceSequenceActor_PushSeq : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)seq;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesSequenceSequenceActor_PushSeq)

FOUNDATION_EXPORT void ImActorCoreModulesSequenceSequenceActor_PushSeq_initWithInt_(ImActorCoreModulesSequenceSequenceActor_PushSeq *self, jint seq);

FOUNDATION_EXPORT ImActorCoreModulesSequenceSequenceActor_PushSeq *new_ImActorCoreModulesSequenceSequenceActor_PushSeq_initWithInt_(jint seq) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesSequenceSequenceActor_PushSeq *create_ImActorCoreModulesSequenceSequenceActor_PushSeq_initWithInt_(jint seq);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesSequenceSequenceActor_PushSeq)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesSequenceSequenceActor")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/actors/AskcableActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeActorsAskcableActor")
#ifdef RESTRICT_ImActorRuntimeActorsAskcableActor
#define INCLUDE_ALL_ImActorRuntimeActorsAskcableActor 0
#else
#define INCLUDE_ALL_ImActorRuntimeActorsAskcableActor 1
#endif
#undef RESTRICT_ImActorRuntimeActorsAskcableActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAskcableActor_) && (INCLUDE_ALL_ImActorRuntimeActorsAskcableActor || defined(INCLUDE_ARAskcableActor))
#define ARAskcableActor_

#define RESTRICT_ImActorRuntimeActorsActor 1
#define INCLUDE_ARActor 1
#include "../../../../im/actor/runtime/actors/Actor.h"

@class ARPromise;

@interface ARAskcableActor : ARActor

#pragma mark Public

- (instancetype)init;

- (ARPromise *)onAskWithId:(id)message;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAskcableActor)

FOUNDATION_EXPORT void ARAskcableActor_init(ARAskcableActor *self);

FOUNDATION_EXPORT ARAskcableActor *new_ARAskcableActor_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARAskcableActor *create_ARAskcableActor_init();

J2OBJC_TYPE_LITERAL_HEADER(ARAskcableActor)

@compatibility_alias ImActorRuntimeActorsAskcableActor ARAskcableActor;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeActorsAskcableActor")

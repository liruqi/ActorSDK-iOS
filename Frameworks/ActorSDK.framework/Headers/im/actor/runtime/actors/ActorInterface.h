//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/actors/ActorInterface.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeActorsActorInterface")
#ifdef RESTRICT_ImActorRuntimeActorsActorInterface
#define INCLUDE_ALL_ImActorRuntimeActorsActorInterface 0
#else
#define INCLUDE_ALL_ImActorRuntimeActorsActorInterface 1
#endif
#undef RESTRICT_ImActorRuntimeActorsActorInterface

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARActorInterface_) && (INCLUDE_ALL_ImActorRuntimeActorsActorInterface || defined(INCLUDE_ARActorInterface))
#define ARActorInterface_

@class ARActorRef;
@class ARPromise;
@protocol ImActorRuntimeActorsAskAskMessage;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARActorInterface : NSObject

#pragma mark Public

- (instancetype)initWithARActorRef:(ARActorRef * __nonnull)dest;

- (ARActorRef * __nonnull)getDest;

- (void)kill;

#pragma mark Protected

- (instancetype)init;

- (ARPromise *)askWithImActorRuntimeActorsAskAskMessage:(id<ImActorRuntimeActorsAskAskMessage> __nonnull)message;

- (void)sendWithId:(id)message;

- (void)setDestWithARActorRef:(ARActorRef * __nonnull)ref;

@end

J2OBJC_EMPTY_STATIC_INIT(ARActorInterface)

FOUNDATION_EXPORT void ARActorInterface_initWithARActorRef_(ARActorInterface *self, ARActorRef *dest);

FOUNDATION_EXPORT void ARActorInterface_init(ARActorInterface *self);

J2OBJC_TYPE_LITERAL_HEADER(ARActorInterface)

@compatibility_alias ImActorRuntimeActorsActorInterface ARActorInterface;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeActorsActorInterface")

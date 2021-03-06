//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/actors/ActorCreator.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeActorsActorCreator")
#ifdef RESTRICT_ImActorRuntimeActorsActorCreator
#define INCLUDE_ALL_ImActorRuntimeActorsActorCreator 0
#else
#define INCLUDE_ALL_ImActorRuntimeActorsActorCreator 1
#endif
#undef RESTRICT_ImActorRuntimeActorsActorCreator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARActorCreator_) && (INCLUDE_ALL_ImActorRuntimeActorsActorCreator || defined(INCLUDE_ARActorCreator))
#define ARActorCreator_

@class ARActor;

/*!
 @brief Creator of custom actors
 */
@protocol ARActorCreator < NSObject, JavaObject >

/*!
 @brief Create actor
 @return Actor
 */
- (ARActor *)create;

@end

J2OBJC_EMPTY_STATIC_INIT(ARActorCreator)

J2OBJC_TYPE_LITERAL_HEADER(ARActorCreator)

#define ImActorRuntimeActorsActorCreator ARActorCreator

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeActorsActorCreator")

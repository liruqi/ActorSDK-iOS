//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/bser/BserCreator.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeBserBserCreator")
#ifdef RESTRICT_ImActorRuntimeBserBserCreator
#define INCLUDE_ALL_ImActorRuntimeBserBserCreator 0
#else
#define INCLUDE_ALL_ImActorRuntimeBserBserCreator 1
#endif
#undef RESTRICT_ImActorRuntimeBserBserCreator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARBserCreator_) && (INCLUDE_ALL_ImActorRuntimeBserBserCreator || defined(INCLUDE_ARBserCreator))
#define ARBserCreator_

@protocol ARBserCreator < NSObject, JavaObject >

- (id)createInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(ARBserCreator)

J2OBJC_TYPE_LITERAL_HEADER(ARBserCreator)

#define ImActorRuntimeBserBserCreator ARBserCreator

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeBserBserCreator")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/function/Consumer.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeFunctionConsumer")
#ifdef RESTRICT_ImActorRuntimeFunctionConsumer
#define INCLUDE_ALL_ImActorRuntimeFunctionConsumer 0
#else
#define INCLUDE_ALL_ImActorRuntimeFunctionConsumer 1
#endif
#undef RESTRICT_ImActorRuntimeFunctionConsumer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARConsumer_) && (INCLUDE_ALL_ImActorRuntimeFunctionConsumer || defined(INCLUDE_ARConsumer))
#define ARConsumer_

@protocol ARConsumer < NSObject, JavaObject >

- (void)applyWithId:(id)t;

@end

J2OBJC_EMPTY_STATIC_INIT(ARConsumer)

J2OBJC_TYPE_LITERAL_HEADER(ARConsumer)

#define ImActorRuntimeFunctionConsumer ARConsumer

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeFunctionConsumer")

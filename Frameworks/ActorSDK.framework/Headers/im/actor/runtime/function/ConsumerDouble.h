//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/function/ConsumerDouble.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeFunctionConsumerDouble")
#ifdef RESTRICT_ImActorRuntimeFunctionConsumerDouble
#define INCLUDE_ALL_ImActorRuntimeFunctionConsumerDouble 0
#else
#define INCLUDE_ALL_ImActorRuntimeFunctionConsumerDouble 1
#endif
#undef RESTRICT_ImActorRuntimeFunctionConsumerDouble

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARConsumerDouble_) && (INCLUDE_ALL_ImActorRuntimeFunctionConsumerDouble || defined(INCLUDE_ARConsumerDouble))
#define ARConsumerDouble_

@protocol ARConsumerDouble < NSObject, JavaObject >

- (void)applyWithId:(id)t1
             withId:(id)t2;

@end

J2OBJC_EMPTY_STATIC_INIT(ARConsumerDouble)

J2OBJC_TYPE_LITERAL_HEADER(ARConsumerDouble)

#define ImActorRuntimeFunctionConsumerDouble ARConsumerDouble

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeFunctionConsumerDouble")

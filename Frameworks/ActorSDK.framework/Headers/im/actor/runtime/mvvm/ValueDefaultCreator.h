//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/mvvm/ValueDefaultCreator.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeMvvmValueDefaultCreator")
#ifdef RESTRICT_ImActorRuntimeMvvmValueDefaultCreator
#define INCLUDE_ALL_ImActorRuntimeMvvmValueDefaultCreator 0
#else
#define INCLUDE_ALL_ImActorRuntimeMvvmValueDefaultCreator 1
#endif
#undef RESTRICT_ImActorRuntimeMvvmValueDefaultCreator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARValueDefaultCreator_) && (INCLUDE_ALL_ImActorRuntimeMvvmValueDefaultCreator || defined(INCLUDE_ARValueDefaultCreator))
#define ARValueDefaultCreator_

@protocol ARValueDefaultCreator < NSObject, JavaObject >

- (id)createDefaultInstanceWithLong:(jlong)id_;

@end

J2OBJC_EMPTY_STATIC_INIT(ARValueDefaultCreator)

J2OBJC_TYPE_LITERAL_HEADER(ARValueDefaultCreator)

#define ImActorRuntimeMvvmValueDefaultCreator ARValueDefaultCreator

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeMvvmValueDefaultCreator")

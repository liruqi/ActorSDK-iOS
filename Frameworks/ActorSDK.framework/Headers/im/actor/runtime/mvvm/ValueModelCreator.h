//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/mvvm/ValueModelCreator.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeMvvmValueModelCreator")
#ifdef RESTRICT_ImActorRuntimeMvvmValueModelCreator
#define INCLUDE_ALL_ImActorRuntimeMvvmValueModelCreator 0
#else
#define INCLUDE_ALL_ImActorRuntimeMvvmValueModelCreator 1
#endif
#undef RESTRICT_ImActorRuntimeMvvmValueModelCreator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARValueModelCreator_) && (INCLUDE_ALL_ImActorRuntimeMvvmValueModelCreator || defined(INCLUDE_ARValueModelCreator))
#define ARValueModelCreator_

@class ARBaseValueModel;

@protocol ARValueModelCreator < NSObject, JavaObject >

- (id)createWithId:(id)baseValue;

@end

J2OBJC_EMPTY_STATIC_INIT(ARValueModelCreator)

J2OBJC_TYPE_LITERAL_HEADER(ARValueModelCreator)

#define ImActorRuntimeMvvmValueModelCreator ARValueModelCreator

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeMvvmValueModelCreator")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/function/Constructor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeFunctionConstructor")
#ifdef RESTRICT_ImActorRuntimeFunctionConstructor
#define INCLUDE_ALL_ImActorRuntimeFunctionConstructor 0
#else
#define INCLUDE_ALL_ImActorRuntimeFunctionConstructor 1
#endif
#undef RESTRICT_ImActorRuntimeFunctionConstructor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARConstructor_) && (INCLUDE_ALL_ImActorRuntimeFunctionConstructor || defined(INCLUDE_ARConstructor))
#define ARConstructor_

@protocol ARConstructor < NSObject, JavaObject >

- (id)create;

@end

J2OBJC_EMPTY_STATIC_INIT(ARConstructor)

J2OBJC_TYPE_LITERAL_HEADER(ARConstructor)

#define ImActorRuntimeFunctionConstructor ARConstructor

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeFunctionConstructor")

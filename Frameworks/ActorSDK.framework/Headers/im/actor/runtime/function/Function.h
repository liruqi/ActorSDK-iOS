//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/function/Function.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeFunctionFunction")
#ifdef RESTRICT_ImActorRuntimeFunctionFunction
#define INCLUDE_ALL_ImActorRuntimeFunctionFunction 0
#else
#define INCLUDE_ALL_ImActorRuntimeFunctionFunction 1
#endif
#undef RESTRICT_ImActorRuntimeFunctionFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARFunction_) && (INCLUDE_ALL_ImActorRuntimeFunctionFunction || defined(INCLUDE_ARFunction))
#define ARFunction_

@protocol ARFunction < NSObject, JavaObject >

- (id)applyWithId:(id)t;

@end

J2OBJC_EMPTY_STATIC_INIT(ARFunction)

J2OBJC_TYPE_LITERAL_HEADER(ARFunction)

#define ImActorRuntimeFunctionFunction ARFunction

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeFunctionFunction")

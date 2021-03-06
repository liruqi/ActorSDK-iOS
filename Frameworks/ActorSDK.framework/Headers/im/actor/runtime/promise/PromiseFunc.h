//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/promise/PromiseFunc.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimePromisePromiseFunc")
#ifdef RESTRICT_ImActorRuntimePromisePromiseFunc
#define INCLUDE_ALL_ImActorRuntimePromisePromiseFunc 0
#else
#define INCLUDE_ALL_ImActorRuntimePromisePromiseFunc 1
#endif
#undef RESTRICT_ImActorRuntimePromisePromiseFunc

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARPromiseFunc_) && (INCLUDE_ALL_ImActorRuntimePromisePromiseFunc || defined(INCLUDE_ARPromiseFunc))
#define ARPromiseFunc_

@class ARPromiseResolver;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief Method that evaluate result of a promise
 */
@protocol ARPromiseFunc < NSObject, JavaObject >

- (void)exec:(ARPromiseResolver * __nonnull)resolver;

@end

J2OBJC_EMPTY_STATIC_INIT(ARPromiseFunc)

J2OBJC_TYPE_LITERAL_HEADER(ARPromiseFunc)

#define ImActorRuntimePromisePromiseFunc ARPromiseFunc

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimePromisePromiseFunc")

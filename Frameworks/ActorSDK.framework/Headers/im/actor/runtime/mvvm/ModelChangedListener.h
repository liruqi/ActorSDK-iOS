//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/mvvm/ModelChangedListener.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeMvvmModelChangedListener")
#ifdef RESTRICT_ImActorRuntimeMvvmModelChangedListener
#define INCLUDE_ALL_ImActorRuntimeMvvmModelChangedListener 0
#else
#define INCLUDE_ALL_ImActorRuntimeMvvmModelChangedListener 1
#endif
#undef RESTRICT_ImActorRuntimeMvvmModelChangedListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARModelChangedListener_) && (INCLUDE_ALL_ImActorRuntimeMvvmModelChangedListener || defined(INCLUDE_ARModelChangedListener))
#define ARModelChangedListener_

@protocol ARModelChangedListener < NSObject, JavaObject >

- (void)onChanged:(id)model;

@end

J2OBJC_EMPTY_STATIC_INIT(ARModelChangedListener)

J2OBJC_TYPE_LITERAL_HEADER(ARModelChangedListener)

#define ImActorRuntimeMvvmModelChangedListener ARModelChangedListener

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeMvvmModelChangedListener")

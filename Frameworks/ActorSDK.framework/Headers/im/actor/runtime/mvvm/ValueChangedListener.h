//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/mvvm/ValueChangedListener.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeMvvmValueChangedListener")
#ifdef RESTRICT_ImActorRuntimeMvvmValueChangedListener
#define INCLUDE_ALL_ImActorRuntimeMvvmValueChangedListener 0
#else
#define INCLUDE_ALL_ImActorRuntimeMvvmValueChangedListener 1
#endif
#undef RESTRICT_ImActorRuntimeMvvmValueChangedListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARValueChangedListener_) && (INCLUDE_ALL_ImActorRuntimeMvvmValueChangedListener || defined(INCLUDE_ARValueChangedListener))
#define ARValueChangedListener_

@class ARValue;

@protocol ARValueChangedListener < NSObject, JavaObject >

- (void)onChanged:(id)val
        withModel:(ARValue *)valueModel;

@end

J2OBJC_EMPTY_STATIC_INIT(ARValueChangedListener)

J2OBJC_TYPE_LITERAL_HEADER(ARValueChangedListener)

#define ImActorRuntimeMvvmValueChangedListener ARValueChangedListener

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeMvvmValueChangedListener")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/threading/Dispatcher.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeThreadingDispatcher")
#ifdef RESTRICT_ImActorRuntimeThreadingDispatcher
#define INCLUDE_ALL_ImActorRuntimeThreadingDispatcher 0
#else
#define INCLUDE_ALL_ImActorRuntimeThreadingDispatcher 1
#endif
#undef RESTRICT_ImActorRuntimeThreadingDispatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDispatcher_) && (INCLUDE_ALL_ImActorRuntimeThreadingDispatcher || defined(INCLUDE_ARDispatcher))
#define ARDispatcher_

@protocol ARDispatchCancel;
@protocol JavaLangRunnable;

@protocol ARDispatcher < NSObject, JavaObject >

- (id<ARDispatchCancel>)dispatchWithJavaLangRunnable:(id<JavaLangRunnable>)message
                                            withLong:(jlong)delay;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDispatcher)

J2OBJC_TYPE_LITERAL_HEADER(ARDispatcher)

#define ImActorRuntimeThreadingDispatcher ARDispatcher

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeThreadingDispatcher")

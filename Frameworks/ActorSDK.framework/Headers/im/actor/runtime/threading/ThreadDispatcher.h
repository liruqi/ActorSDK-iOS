//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/threading/ThreadDispatcher.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeThreadingThreadDispatcher")
#ifdef RESTRICT_ImActorRuntimeThreadingThreadDispatcher
#define INCLUDE_ALL_ImActorRuntimeThreadingThreadDispatcher 0
#else
#define INCLUDE_ALL_ImActorRuntimeThreadingThreadDispatcher 1
#endif
#undef RESTRICT_ImActorRuntimeThreadingThreadDispatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARThreadDispatcher_) && (INCLUDE_ALL_ImActorRuntimeThreadingThreadDispatcher || defined(INCLUDE_ARThreadDispatcher))
#define ARThreadDispatcher_

@protocol ARSimpleDispatcher;
@protocol JavaLangRunnable;

@interface ARThreadDispatcher : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)dispatchOnCurrentThreadWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

+ (id<ARSimpleDispatcher>)peekDispatcher;

+ (void)popDispatcher;

+ (void)pushDispatcherWithARSimpleDispatcher:(id<ARSimpleDispatcher>)dispatcher;

@end

J2OBJC_STATIC_INIT(ARThreadDispatcher)

FOUNDATION_EXPORT void ARThreadDispatcher_pushDispatcherWithARSimpleDispatcher_(id<ARSimpleDispatcher> dispatcher);

FOUNDATION_EXPORT void ARThreadDispatcher_popDispatcher();

FOUNDATION_EXPORT id<ARSimpleDispatcher> ARThreadDispatcher_peekDispatcher();

FOUNDATION_EXPORT void ARThreadDispatcher_dispatchOnCurrentThreadWithJavaLangRunnable_(id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT void ARThreadDispatcher_init(ARThreadDispatcher *self);

FOUNDATION_EXPORT ARThreadDispatcher *new_ARThreadDispatcher_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARThreadDispatcher *create_ARThreadDispatcher_init();

J2OBJC_TYPE_LITERAL_HEADER(ARThreadDispatcher)

@compatibility_alias ImActorRuntimeThreadingThreadDispatcher ARThreadDispatcher;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeThreadingThreadDispatcher")

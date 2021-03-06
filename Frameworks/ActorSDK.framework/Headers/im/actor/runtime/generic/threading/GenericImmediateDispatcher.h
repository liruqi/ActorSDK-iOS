//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-generic/src/main/java/im/actor/runtime/generic/threading/GenericImmediateDispatcher.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeGenericThreadingGenericImmediateDispatcher")
#ifdef RESTRICT_ImActorRuntimeGenericThreadingGenericImmediateDispatcher
#define INCLUDE_ALL_ImActorRuntimeGenericThreadingGenericImmediateDispatcher 0
#else
#define INCLUDE_ALL_ImActorRuntimeGenericThreadingGenericImmediateDispatcher 1
#endif
#undef RESTRICT_ImActorRuntimeGenericThreadingGenericImmediateDispatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARGenericImmediateDispatcher_) && (INCLUDE_ALL_ImActorRuntimeGenericThreadingGenericImmediateDispatcher || defined(INCLUDE_ARGenericImmediateDispatcher))
#define ARGenericImmediateDispatcher_

#define RESTRICT_ImActorRuntimeThreadingImmediateDispatcher 1
#define INCLUDE_ARImmediateDispatcher 1
#include "../../../../../im/actor/runtime/threading/ImmediateDispatcher.h"

@class ARThreadPriority;
@protocol JavaLangRunnable;

@interface ARGenericImmediateDispatcher : NSObject < ARImmediateDispatcher > {
 @public
  jboolean isClosed_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name
            withARThreadPriority:(ARThreadPriority *)priority;

- (void)dispatchNowWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

@end

J2OBJC_EMPTY_STATIC_INIT(ARGenericImmediateDispatcher)

FOUNDATION_EXPORT void ARGenericImmediateDispatcher_initWithNSString_withARThreadPriority_(ARGenericImmediateDispatcher *self, NSString *name, ARThreadPriority *priority);

FOUNDATION_EXPORT ARGenericImmediateDispatcher *new_ARGenericImmediateDispatcher_initWithNSString_withARThreadPriority_(NSString *name, ARThreadPriority *priority) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARGenericImmediateDispatcher *create_ARGenericImmediateDispatcher_initWithNSString_withARThreadPriority_(NSString *name, ARThreadPriority *priority);

J2OBJC_TYPE_LITERAL_HEADER(ARGenericImmediateDispatcher)

@compatibility_alias ImActorRuntimeGenericThreadingGenericImmediateDispatcher ARGenericImmediateDispatcher;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeGenericThreadingGenericImmediateDispatcher")

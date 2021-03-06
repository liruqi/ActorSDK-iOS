//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/Runtime.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeRuntime")
#ifdef RESTRICT_ImActorRuntimeRuntime
#define INCLUDE_ALL_ImActorRuntimeRuntime 0
#else
#define INCLUDE_ALL_ImActorRuntimeRuntime 1
#endif
#undef RESTRICT_ImActorRuntimeRuntime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRuntime_) && (INCLUDE_ALL_ImActorRuntimeRuntime || defined(INCLUDE_ARRuntime))
#define ARRuntime_

@class ARAtomicIntegerCompat;
@class ARAtomicLongCompat;
@class ARThreadLocalCompat;
@class ARThreadPriority;
@class ARWeakReferenceCompat;
@protocol ARDispatcher;
@protocol ARImmediateDispatcher;
@protocol ARLocaleRuntime;
@protocol ARWakeLock;
@protocol JavaLangRunnable;

@interface ARRuntime : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)checkMainThread;

+ (ARAtomicIntegerCompat *)createAtomicIntWithInt:(jint)init_;

+ (ARAtomicLongCompat *)createAtomicLongWithLong:(jlong)init_;

+ (id<ARDispatcher>)createDispatcherWithNSString:(NSString *)name;

+ (id<ARImmediateDispatcher>)createImmediateDispatcherWithNSString:(NSString *)name
                                              withARThreadPriority:(ARThreadPriority *)priority;

+ (ARThreadLocalCompat *)createThreadLocal;

+ (ARWeakReferenceCompat *)createWeakReferenceWithId:(id)val;

+ (void)dispatchWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

+ (jlong)getActorTime;

+ (jint)getCoresCount;

+ (jlong)getCurrentSyncedTime;

+ (jlong)getCurrentTime;

+ (id<ARLocaleRuntime>)getLocaleRuntime;

+ (jboolean)isMainThread;

+ (jboolean)isSingleThread;

+ (void)killApp;

+ (id<ARWakeLock>)makeWakeLock;

+ (void)postToMainThreadWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

@end

J2OBJC_STATIC_INIT(ARRuntime)

FOUNDATION_EXPORT id<ARLocaleRuntime> ARRuntime_getLocaleRuntime();

FOUNDATION_EXPORT id<ARDispatcher> ARRuntime_createDispatcherWithNSString_(NSString *name);

FOUNDATION_EXPORT id<ARImmediateDispatcher> ARRuntime_createImmediateDispatcherWithNSString_withARThreadPriority_(NSString *name, ARThreadPriority *priority);

FOUNDATION_EXPORT jlong ARRuntime_getActorTime();

FOUNDATION_EXPORT jlong ARRuntime_getCurrentTime();

FOUNDATION_EXPORT jlong ARRuntime_getCurrentSyncedTime();

FOUNDATION_EXPORT ARAtomicIntegerCompat *ARRuntime_createAtomicIntWithInt_(jint init_);

FOUNDATION_EXPORT ARAtomicLongCompat *ARRuntime_createAtomicLongWithLong_(jlong init_);

FOUNDATION_EXPORT ARThreadLocalCompat *ARRuntime_createThreadLocal();

FOUNDATION_EXPORT ARWeakReferenceCompat *ARRuntime_createWeakReferenceWithId_(id val);

FOUNDATION_EXPORT jboolean ARRuntime_isSingleThread();

FOUNDATION_EXPORT jint ARRuntime_getCoresCount();

FOUNDATION_EXPORT void ARRuntime_checkMainThread();

FOUNDATION_EXPORT jboolean ARRuntime_isMainThread();

FOUNDATION_EXPORT void ARRuntime_postToMainThreadWithJavaLangRunnable_(id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT void ARRuntime_dispatchWithJavaLangRunnable_(id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT void ARRuntime_killApp();

FOUNDATION_EXPORT id<ARWakeLock> ARRuntime_makeWakeLock();

FOUNDATION_EXPORT void ARRuntime_init(ARRuntime *self);

FOUNDATION_EXPORT ARRuntime *new_ARRuntime_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRuntime *create_ARRuntime_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRuntime)

@compatibility_alias ImActorRuntimeRuntime ARRuntime;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeRuntime")

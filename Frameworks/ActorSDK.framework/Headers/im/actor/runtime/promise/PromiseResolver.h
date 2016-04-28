//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/promise/PromiseResolver.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimePromisePromiseResolver")
#ifdef RESTRICT_ImActorRuntimePromisePromiseResolver
#define INCLUDE_ALL_ImActorRuntimePromisePromiseResolver 0
#else
#define INCLUDE_ALL_ImActorRuntimePromisePromiseResolver 1
#endif
#undef RESTRICT_ImActorRuntimePromisePromiseResolver

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARPromiseResolver_) && (INCLUDE_ALL_ImActorRuntimePromisePromiseResolver || defined(INCLUDE_ARPromiseResolver))
#define ARPromiseResolver_

@class ARPromise;
@class JavaLangException;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief Object for completing promises
 */
@interface ARPromiseResolver : NSObject

#pragma mark Public

/*!
 @brief Call this to fail promise
 @param e reason
 */
- (void)error:(JavaLangException * __nonnull)e;

/*!
 @brief Get Resolver's promise
 @return promise
 */
- (ARPromise *)getPromise;

/*!
 @brief Call this to complete promise
 @param res result of promise
 */
- (void)result:(id __nullable)res;

/*!
 @brief Trying to fail promise
 @param e reason
 */
- (void)tryError:(JavaLangException * __nonnull)e;

/*!
 @brief Trying to complete promise
 @param res result of promise
 */
- (void)tryResult:(id __nullable)res;

#pragma mark Package-Private

- (instancetype)initWithARPromise:(ARPromise *)promise;

@end

J2OBJC_EMPTY_STATIC_INIT(ARPromiseResolver)

FOUNDATION_EXPORT void ARPromiseResolver_initWithARPromise_(ARPromiseResolver *self, ARPromise *promise);

FOUNDATION_EXPORT ARPromiseResolver *new_ARPromiseResolver_initWithARPromise_(ARPromise *promise) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARPromiseResolver *create_ARPromiseResolver_initWithARPromise_(ARPromise *promise);

J2OBJC_TYPE_LITERAL_HEADER(ARPromiseResolver)

@compatibility_alias ImActorRuntimePromisePromiseResolver ARPromiseResolver;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimePromisePromiseResolver")

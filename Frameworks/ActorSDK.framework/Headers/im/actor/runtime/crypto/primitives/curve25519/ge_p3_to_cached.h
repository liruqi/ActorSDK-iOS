//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/ge_p3_to_cached.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p3_to_cached")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p3_to_cached
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p3_to_cached 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p3_to_cached 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p3_to_cached

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p3_to_cached || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached))
#define ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached_

@class IOSIntArray;
@class ImActorRuntimeCryptoPrimitivesCurve25519ge_cached;
@class ImActorRuntimeCryptoPrimitivesCurve25519ge_p3;

@interface ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached : NSObject

+ (IOSIntArray *)d2;

+ (void)setD2:(IOSIntArray *)value;

#pragma mark Public

- (instancetype)init;

+ (void)ge_p3_to_cachedWithImActorRuntimeCryptoPrimitivesCurve25519ge_cached:(ImActorRuntimeCryptoPrimitivesCurve25519ge_cached *)r
                           withImActorRuntimeCryptoPrimitivesCurve25519ge_p3:(ImActorRuntimeCryptoPrimitivesCurve25519ge_p3 *)p;

@end

J2OBJC_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached)

inline IOSIntArray *ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached_get_d2();
inline IOSIntArray *ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached_set_d2(IOSIntArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached_d2;
J2OBJC_STATIC_FIELD_OBJ(ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached, d2, IOSIntArray *)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached_ge_p3_to_cachedWithImActorRuntimeCryptoPrimitivesCurve25519ge_cached_withImActorRuntimeCryptoPrimitivesCurve25519ge_p3_(ImActorRuntimeCryptoPrimitivesCurve25519ge_cached *r, ImActorRuntimeCryptoPrimitivesCurve25519ge_p3 *p);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached_init(ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached *new_ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached *create_ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Ge_p3_to_cached ImActorRuntimeCryptoPrimitivesCurve25519ge_p3_to_cached;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p3_to_cached")

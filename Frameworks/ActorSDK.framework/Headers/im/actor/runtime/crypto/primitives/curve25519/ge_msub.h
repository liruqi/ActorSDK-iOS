//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/ge_msub.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_msub")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_msub
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_msub 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_msub 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_msub

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519ge_msub_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_msub || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519ge_msub))
#define ImActorRuntimeCryptoPrimitivesCurve25519ge_msub_

@class ImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1;
@class ImActorRuntimeCryptoPrimitivesCurve25519ge_p3;
@class ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp;

@interface ImActorRuntimeCryptoPrimitivesCurve25519ge_msub : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)ge_msubWithImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1:(ImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1 *)r
                 withImActorRuntimeCryptoPrimitivesCurve25519ge_p3:(ImActorRuntimeCryptoPrimitivesCurve25519ge_p3 *)p
            withImActorRuntimeCryptoPrimitivesCurve25519ge_precomp:(ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp *)q;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519ge_msub)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_msub_ge_msubWithImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1_withImActorRuntimeCryptoPrimitivesCurve25519ge_p3_withImActorRuntimeCryptoPrimitivesCurve25519ge_precomp_(ImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1 *r, ImActorRuntimeCryptoPrimitivesCurve25519ge_p3 *p, ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp *q);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_msub_init(ImActorRuntimeCryptoPrimitivesCurve25519ge_msub *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_msub *new_ImActorRuntimeCryptoPrimitivesCurve25519ge_msub_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_msub *create_ImActorRuntimeCryptoPrimitivesCurve25519ge_msub_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519ge_msub)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Ge_msub ImActorRuntimeCryptoPrimitivesCurve25519ge_msub;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_msub")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/ge_p2_dbl.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p2_dbl")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p2_dbl
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p2_dbl 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p2_dbl 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p2_dbl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p2_dbl || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl))
#define ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl_

@class ImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1;
@class ImActorRuntimeCryptoPrimitivesCurve25519ge_p2;

@interface ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)ge_p2_dblWithImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1:(ImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1 *)r
                   withImActorRuntimeCryptoPrimitivesCurve25519ge_p2:(ImActorRuntimeCryptoPrimitivesCurve25519ge_p2 *)p;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl_ge_p2_dblWithImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1_withImActorRuntimeCryptoPrimitivesCurve25519ge_p2_(ImActorRuntimeCryptoPrimitivesCurve25519ge_p1p1 *r, ImActorRuntimeCryptoPrimitivesCurve25519ge_p2 *p);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl_init(ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl *new_ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl *create_ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Ge_p2_dbl ImActorRuntimeCryptoPrimitivesCurve25519ge_p2_dbl;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_p2_dbl")

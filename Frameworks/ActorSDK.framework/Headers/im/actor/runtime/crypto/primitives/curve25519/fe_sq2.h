//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/fe_sq2.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sq2")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sq2
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sq2 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sq2 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sq2

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sq2 || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2))
#define ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2_

@class IOSIntArray;

@interface ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2 : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)fe_sq2WithIntArray:(IOSIntArray *)h
              withIntArray:(IOSIntArray *)f;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2_fe_sq2WithIntArray_withIntArray_(IOSIntArray *h, IOSIntArray *f);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2_init(ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2 *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2 *new_ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2 *create_ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Fe_sq2 ImActorRuntimeCryptoPrimitivesCurve25519fe_sq2;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sq2")

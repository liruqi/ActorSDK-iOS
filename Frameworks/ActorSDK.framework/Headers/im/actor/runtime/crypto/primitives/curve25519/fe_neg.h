//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/fe_neg.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_neg")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_neg
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_neg 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_neg 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_neg

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519fe_neg_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_neg || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519fe_neg))
#define ImActorRuntimeCryptoPrimitivesCurve25519fe_neg_

@class IOSIntArray;

@interface ImActorRuntimeCryptoPrimitivesCurve25519fe_neg : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)fe_negWithIntArray:(IOSIntArray *)h
              withIntArray:(IOSIntArray *)f;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519fe_neg)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_neg_fe_negWithIntArray_withIntArray_(IOSIntArray *h, IOSIntArray *f);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_neg_init(ImActorRuntimeCryptoPrimitivesCurve25519fe_neg *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_neg *new_ImActorRuntimeCryptoPrimitivesCurve25519fe_neg_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_neg *create_ImActorRuntimeCryptoPrimitivesCurve25519fe_neg_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519fe_neg)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Fe_neg ImActorRuntimeCryptoPrimitivesCurve25519fe_neg;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_neg")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/fe_sub.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sub")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sub
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sub 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sub 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sub

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519fe_sub_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sub || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519fe_sub))
#define ImActorRuntimeCryptoPrimitivesCurve25519fe_sub_

@class IOSIntArray;

@interface ImActorRuntimeCryptoPrimitivesCurve25519fe_sub : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)fe_subWithIntArray:(IOSIntArray *)h
              withIntArray:(IOSIntArray *)f
              withIntArray:(IOSIntArray *)g;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519fe_sub)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_sub_fe_subWithIntArray_withIntArray_withIntArray_(IOSIntArray *h, IOSIntArray *f, IOSIntArray *g);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_sub_init(ImActorRuntimeCryptoPrimitivesCurve25519fe_sub *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_sub *new_ImActorRuntimeCryptoPrimitivesCurve25519fe_sub_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_sub *create_ImActorRuntimeCryptoPrimitivesCurve25519fe_sub_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519fe_sub)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Fe_sub ImActorRuntimeCryptoPrimitivesCurve25519fe_sub;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_sub")

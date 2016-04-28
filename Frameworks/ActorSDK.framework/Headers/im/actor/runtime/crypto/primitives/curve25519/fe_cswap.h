//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/fe_cswap.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_cswap")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_cswap
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_cswap 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_cswap 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_cswap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_cswap || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap))
#define ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap_

@class IOSIntArray;

@interface ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)fe_cswapWithIntArray:(IOSIntArray *)f
                withIntArray:(IOSIntArray *)g
                     withInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap_fe_cswapWithIntArray_withIntArray_withInt_(IOSIntArray *f, IOSIntArray *g, jint b);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap_init(ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap *new_ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap *create_ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Fe_cswap ImActorRuntimeCryptoPrimitivesCurve25519fe_cswap;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_cswap")

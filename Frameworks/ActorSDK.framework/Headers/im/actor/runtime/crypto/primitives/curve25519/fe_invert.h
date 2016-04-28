//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/fe_invert.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_invert")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_invert
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_invert 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_invert 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Fe_invert

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519fe_invert_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_invert || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519fe_invert))
#define ImActorRuntimeCryptoPrimitivesCurve25519fe_invert_

@class IOSIntArray;

@interface ImActorRuntimeCryptoPrimitivesCurve25519fe_invert : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)fe_invertWithIntArray:(IOSIntArray *)outArg
                 withIntArray:(IOSIntArray *)z;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519fe_invert)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_invert_fe_invertWithIntArray_withIntArray_(IOSIntArray *outArg, IOSIntArray *z);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519fe_invert_init(ImActorRuntimeCryptoPrimitivesCurve25519fe_invert *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_invert *new_ImActorRuntimeCryptoPrimitivesCurve25519fe_invert_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519fe_invert *create_ImActorRuntimeCryptoPrimitivesCurve25519fe_invert_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519fe_invert)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Fe_invert ImActorRuntimeCryptoPrimitivesCurve25519fe_invert;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Fe_invert")

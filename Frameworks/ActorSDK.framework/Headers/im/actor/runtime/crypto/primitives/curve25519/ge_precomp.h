//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/ge_precomp.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_precomp")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_precomp
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_precomp 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_precomp 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_precomp

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_precomp || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp))
#define ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp_

@class IOSIntArray;

@interface ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp : NSObject {
 @public
  IOSIntArray *yplusx_;
  IOSIntArray *yminusx_;
  IOSIntArray *xy2d_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithIntArray:(IOSIntArray *)new_yplusx
                    withIntArray:(IOSIntArray *)new_yminusx
                    withIntArray:(IOSIntArray *)new_xy2d;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp)

J2OBJC_FIELD_SETTER(ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp, yplusx_, IOSIntArray *)
J2OBJC_FIELD_SETTER(ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp, yminusx_, IOSIntArray *)
J2OBJC_FIELD_SETTER(ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp, xy2d_, IOSIntArray *)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp_init(ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp *new_ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp *create_ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp_init();

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp_initWithIntArray_withIntArray_withIntArray_(ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp *self, IOSIntArray *new_yplusx, IOSIntArray *new_yminusx, IOSIntArray *new_xy2d);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp *new_ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp_initWithIntArray_withIntArray_withIntArray_(IOSIntArray *new_yplusx, IOSIntArray *new_yminusx, IOSIntArray *new_xy2d) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp *create_ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp_initWithIntArray_withIntArray_withIntArray_(IOSIntArray *new_yplusx, IOSIntArray *new_yminusx, IOSIntArray *new_xy2d);

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Ge_precomp ImActorRuntimeCryptoPrimitivesCurve25519ge_precomp;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_precomp")

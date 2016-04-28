//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/ge_double_scalarmult.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_double_scalarmult")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_double_scalarmult
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_double_scalarmult 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_double_scalarmult 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Ge_double_scalarmult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_double_scalarmult || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult))
#define ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_

@class IOSByteArray;
@class IOSObjectArray;
@class ImActorRuntimeCryptoPrimitivesCurve25519ge_p2;
@class ImActorRuntimeCryptoPrimitivesCurve25519ge_p3;

@interface ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult : NSObject

+ (IOSObjectArray *)Bi;

+ (void)setBi:(IOSObjectArray *)value;

#pragma mark Public

- (instancetype)init;

+ (void)ge_double_scalarmult_vartimeWithImActorRuntimeCryptoPrimitivesCurve25519ge_p2:(ImActorRuntimeCryptoPrimitivesCurve25519ge_p2 *)r
                                                                        withByteArray:(IOSByteArray *)a
                                    withImActorRuntimeCryptoPrimitivesCurve25519ge_p3:(ImActorRuntimeCryptoPrimitivesCurve25519ge_p3 *)A
                                                                        withByteArray:(IOSByteArray *)b;

+ (void)slideWithByteArray:(IOSByteArray *)r
             withByteArray:(IOSByteArray *)a;

@end

J2OBJC_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult)

inline IOSObjectArray *ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_get_Bi();
inline IOSObjectArray *ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_set_Bi(IOSObjectArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_Bi;
J2OBJC_STATIC_FIELD_OBJ(ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult, Bi, IOSObjectArray *)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_slideWithByteArray_withByteArray_(IOSByteArray *r, IOSByteArray *a);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_ge_double_scalarmult_vartimeWithImActorRuntimeCryptoPrimitivesCurve25519ge_p2_withByteArray_withImActorRuntimeCryptoPrimitivesCurve25519ge_p3_withByteArray_(ImActorRuntimeCryptoPrimitivesCurve25519ge_p2 *r, IOSByteArray *a, ImActorRuntimeCryptoPrimitivesCurve25519ge_p3 *A, IOSByteArray *b);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_init(ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult *new_ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult *create_ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Ge_double_scalarmult ImActorRuntimeCryptoPrimitivesCurve25519ge_double_scalarmult;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Ge_double_scalarmult")

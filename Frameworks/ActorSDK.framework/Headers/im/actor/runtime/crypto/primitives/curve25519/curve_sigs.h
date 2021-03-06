//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/curve25519/curve_sigs.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Curve_sigs")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Curve_sigs
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Curve_sigs 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Curve_sigs 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesCurve25519Curve_sigs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Curve_sigs || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs))
#define ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs_

@class IOSByteArray;
@protocol ImActorRuntimeCryptoPrimitivesCurve25519Sha512;

@interface ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)curve25519_keygenWithByteArray:(IOSByteArray *)curve25519_pubkey_out
                         withByteArray:(IOSByteArray *)curve25519_privkey_in;

+ (jint)curve25519_signWithImActorRuntimeCryptoPrimitivesCurve25519Sha512:(id<ImActorRuntimeCryptoPrimitivesCurve25519Sha512>)sha512provider
                                                            withByteArray:(IOSByteArray *)signature_out
                                                            withByteArray:(IOSByteArray *)curve25519_privkey
                                                            withByteArray:(IOSByteArray *)msg
                                                                  withInt:(jint)msg_len
                                                            withByteArray:(IOSByteArray *)random;

+ (jint)curve25519_verifyWithImActorRuntimeCryptoPrimitivesCurve25519Sha512:(id<ImActorRuntimeCryptoPrimitivesCurve25519Sha512>)sha512provider
                                                              withByteArray:(IOSByteArray *)signature
                                                              withByteArray:(IOSByteArray *)curve25519_pubkey
                                                              withByteArray:(IOSByteArray *)msg
                                                                    withInt:(jint)msg_len;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs_curve25519_keygenWithByteArray_withByteArray_(IOSByteArray *curve25519_pubkey_out, IOSByteArray *curve25519_privkey_in);

FOUNDATION_EXPORT jint ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs_curve25519_signWithImActorRuntimeCryptoPrimitivesCurve25519Sha512_withByteArray_withByteArray_withByteArray_withInt_withByteArray_(id<ImActorRuntimeCryptoPrimitivesCurve25519Sha512> sha512provider, IOSByteArray *signature_out, IOSByteArray *curve25519_privkey, IOSByteArray *msg, jint msg_len, IOSByteArray *random);

FOUNDATION_EXPORT jint ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs_curve25519_verifyWithImActorRuntimeCryptoPrimitivesCurve25519Sha512_withByteArray_withByteArray_withByteArray_withInt_(id<ImActorRuntimeCryptoPrimitivesCurve25519Sha512> sha512provider, IOSByteArray *signature, IOSByteArray *curve25519_pubkey, IOSByteArray *msg, jint msg_len);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs_init(ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs *new_ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs *create_ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs)

@compatibility_alias ImActorRuntimeCryptoPrimitivesCurve25519Curve_sigs ImActorRuntimeCryptoPrimitivesCurve25519curve_sigs;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesCurve25519Curve_sigs")

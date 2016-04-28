//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/Curve25519.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoCurve25519")
#ifdef RESTRICT_ImActorRuntimeCryptoCurve25519
#define INCLUDE_ALL_ImActorRuntimeCryptoCurve25519 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoCurve25519 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoCurve25519

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCurve25519_) && (INCLUDE_ALL_ImActorRuntimeCryptoCurve25519 || defined(INCLUDE_ARCurve25519))
#define ARCurve25519_

@class ARCurve25519KeyPair;
@class IOSByteArray;

@interface ARCurve25519 : NSObject

#pragma mark Public

/*!
 @brief Calculating DH agreement
 @param ourPrivate  Our Private Key
 @param theirPublic Theirs Public key
 @return calculated agreement
 */
+ (IOSByteArray *)calculateAgreementWithByteArray:(IOSByteArray *)ourPrivate
                                    withByteArray:(IOSByteArray *)theirPublic;

/*!
 @brief Calculating signature
 @param random     random seed for signature
 @param privateKey private key for signature
 @param message    message to sign
 @return signature
 */
+ (IOSByteArray *)calculateSignatureWithByteArray:(IOSByteArray *)random
                                    withByteArray:(IOSByteArray *)privateKey
                                    withByteArray:(IOSByteArray *)message;

/*!
 @brief Generating KeyPair
 @param randomBytes 32 random bytes
 @return generated key pair
 */
+ (ARCurve25519KeyPair *)keyGenWithByteArray:(IOSByteArray *)randomBytes;

/*!
 @brief Generating private key.
 Source: https://cr.yp.to/ecdh.html
 @param randomBytes random bytes (32+ bytes)
 @return generated private key
 */
+ (IOSByteArray *)keyGenPrivateWithByteArray:(IOSByteArray *)randomBytes;

/*!
 @brief Building public key with private key
 @param privateKey private key
 @return generated public key
 */
+ (IOSByteArray *)keyGenPublicWithByteArray:(IOSByteArray *)privateKey;

/*!
 @brief Verification of signature
 @param publicKey public key of signature
 @param message   message
 @param signature signature of a message
 @return true if signature correct
 */
+ (jboolean)verifySignatureWithByteArray:(IOSByteArray *)publicKey
                           withByteArray:(IOSByteArray *)message
                           withByteArray:(IOSByteArray *)signature;

@end

J2OBJC_STATIC_INIT(ARCurve25519)

FOUNDATION_EXPORT ARCurve25519KeyPair *ARCurve25519_keyGenWithByteArray_(IOSByteArray *randomBytes);

FOUNDATION_EXPORT IOSByteArray *ARCurve25519_keyGenPrivateWithByteArray_(IOSByteArray *randomBytes);

FOUNDATION_EXPORT IOSByteArray *ARCurve25519_keyGenPublicWithByteArray_(IOSByteArray *privateKey);

FOUNDATION_EXPORT IOSByteArray *ARCurve25519_calculateAgreementWithByteArray_withByteArray_(IOSByteArray *ourPrivate, IOSByteArray *theirPublic);

FOUNDATION_EXPORT IOSByteArray *ARCurve25519_calculateSignatureWithByteArray_withByteArray_withByteArray_(IOSByteArray *random, IOSByteArray *privateKey, IOSByteArray *message);

FOUNDATION_EXPORT jboolean ARCurve25519_verifySignatureWithByteArray_withByteArray_withByteArray_(IOSByteArray *publicKey, IOSByteArray *message, IOSByteArray *signature);

J2OBJC_TYPE_LITERAL_HEADER(ARCurve25519)

@compatibility_alias ImActorRuntimeCryptoCurve25519 ARCurve25519;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoCurve25519")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/CryptoKeyPair.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoCryptoKeyPair")
#ifdef RESTRICT_ImActorRuntimeCryptoCryptoKeyPair
#define INCLUDE_ALL_ImActorRuntimeCryptoCryptoKeyPair 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoCryptoKeyPair 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoCryptoKeyPair

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCryptoKeyPair_) && (INCLUDE_ALL_ImActorRuntimeCryptoCryptoKeyPair || defined(INCLUDE_ARCryptoKeyPair))
#define ARCryptoKeyPair_

@class IOSByteArray;

@interface ARCryptoKeyPair : NSObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)publicKey
                    withByteArray:(IOSByteArray *)privateKey;

- (IOSByteArray *)getPrivateKey;

- (IOSByteArray *)getPublicKey;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCryptoKeyPair)

FOUNDATION_EXPORT void ARCryptoKeyPair_initWithByteArray_withByteArray_(ARCryptoKeyPair *self, IOSByteArray *publicKey, IOSByteArray *privateKey);

FOUNDATION_EXPORT ARCryptoKeyPair *new_ARCryptoKeyPair_initWithByteArray_withByteArray_(IOSByteArray *publicKey, IOSByteArray *privateKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCryptoKeyPair *create_ARCryptoKeyPair_initWithByteArray_withByteArray_(IOSByteArray *publicKey, IOSByteArray *privateKey);

J2OBJC_TYPE_LITERAL_HEADER(ARCryptoKeyPair)

@compatibility_alias ImActorRuntimeCryptoCryptoKeyPair ARCryptoKeyPair;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoCryptoKeyPair")

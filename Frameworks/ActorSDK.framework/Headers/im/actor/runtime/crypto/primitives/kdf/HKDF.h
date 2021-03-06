//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/kdf/HKDF.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKdfHKDF")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesKdfHKDF
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKdfHKDF 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKdfHKDF 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesKdfHKDF

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesKdfHKDF_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKdfHKDF || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesKdfHKDF))
#define ImActorRuntimeCryptoPrimitivesKdfHKDF_

@class IOSByteArray;
@protocol ARDigest;

/*!
 @brief HKDF implementation based on RFC 5869: https://tools.ietf.org/html/rfc5869
 @author Steve Kite (steve@@actor.im)
 */
@interface ImActorRuntimeCryptoPrimitivesKdfHKDF : NSObject

#pragma mark Public

- (instancetype)initWithARDigest:(id<ARDigest>)baseDigest;

- (IOSByteArray *)deriveSecretsWithByteArray:(IOSByteArray *)keyMaterial
                               withByteArray:(IOSByteArray *)salt
                               withByteArray:(IOSByteArray *)info
                                     withInt:(jint)outputLength;

- (IOSByteArray *)deriveSecretsWithByteArray:(IOSByteArray *)keyMaterial
                               withByteArray:(IOSByteArray *)info
                                     withInt:(jint)outputLength;

- (IOSByteArray *)deriveSecretsWithByteArray:(IOSByteArray *)keyMaterial
                                     withInt:(jint)outputLength;

#pragma mark Package-Private

- (IOSByteArray *)hkdfExpandWithByteArray:(IOSByteArray *)prk
                            withByteArray:(IOSByteArray *)info
                                  withInt:(jint)outputSize;

- (IOSByteArray *)hkdfExtractWithByteArray:(IOSByteArray *)keyMaterial
                             withByteArray:(IOSByteArray *)salt;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesKdfHKDF)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesKdfHKDF_initWithARDigest_(ImActorRuntimeCryptoPrimitivesKdfHKDF *self, id<ARDigest> baseDigest);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesKdfHKDF *new_ImActorRuntimeCryptoPrimitivesKdfHKDF_initWithARDigest_(id<ARDigest> baseDigest) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesKdfHKDF *create_ImActorRuntimeCryptoPrimitivesKdfHKDF_initWithARDigest_(id<ARDigest> baseDigest);

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesKdfHKDF)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKdfHKDF")

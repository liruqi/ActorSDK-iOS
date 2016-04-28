//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/digest/SHA256Digest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesDigestSHA256Digest_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest))
#define ImActorRuntimeCryptoPrimitivesDigestSHA256Digest_

#define RESTRICT_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest 1
#define INCLUDE_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest 1
#include "../../../../../../im/actor/runtime/crypto/primitives/digest/GeneralDigest.h"

@class IOSByteArray;
@class IOSIntArray;

/*!
 @brief FIPS 180-2 implementation of SHA-256.
 <p>
 @code

         block  word  digest
  SHA-1   512    32    160
  SHA-256 512    32    256
  SHA-384 1024   64    384
  SHA-512 1024   64    512
  
@endcode
 */
@interface ImActorRuntimeCryptoPrimitivesDigestSHA256Digest : ImActorRuntimeCryptoPrimitivesDigestGeneralDigest

+ (IOSIntArray *)K;

#pragma mark Public

/*!
 @brief Standard constructor
 */
- (instancetype)init;

- (jint)doFinalWithByteArray:(IOSByteArray *)outArg
                     withInt:(jint)outOff;

- (NSString *)getAlgorithmName;

- (jint)getDigestSize;

/*!
 @brief reset the chaining variables
 */
- (void)reset;

#pragma mark Protected

- (void)processBlock;

- (void)processLengthWithLong:(jlong)bitLength;

- (void)processWordWithByteArray:(IOSByteArray *)inArg
                         withInt:(jint)inOff;

@end

J2OBJC_STATIC_INIT(ImActorRuntimeCryptoPrimitivesDigestSHA256Digest)

inline IOSIntArray *ImActorRuntimeCryptoPrimitivesDigestSHA256Digest_get_K();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ImActorRuntimeCryptoPrimitivesDigestSHA256Digest_K;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImActorRuntimeCryptoPrimitivesDigestSHA256Digest, K, IOSIntArray *)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesDigestSHA256Digest_init(ImActorRuntimeCryptoPrimitivesDigestSHA256Digest *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesDigestSHA256Digest *new_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesDigestSHA256Digest *create_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesDigestSHA256Digest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestSHA256Digest")

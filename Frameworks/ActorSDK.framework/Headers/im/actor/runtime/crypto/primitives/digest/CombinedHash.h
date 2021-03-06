//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/digest/CombinedHash.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestCombinedHash")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesDigestCombinedHash
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestCombinedHash 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestCombinedHash 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesDigestCombinedHash

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesDigestCombinedHash_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestCombinedHash || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesDigestCombinedHash))
#define ImActorRuntimeCryptoPrimitivesDigestCombinedHash_

#define RESTRICT_ImActorRuntimeCryptoDigest 1
#define INCLUDE_ARDigest 1
#include "../../../../../../im/actor/runtime/crypto/Digest.h"

@class IOSByteArray;
@class IOSObjectArray;

@interface ImActorRuntimeCryptoPrimitivesDigestCombinedHash : NSObject < ARDigest >

#pragma mark Public

- (instancetype)initWithARDigestArray:(IOSObjectArray *)digests;

- (void)doFinal:(IOSByteArray *)dest
     withOffset:(jint)destOffset;

- (jint)getDigestSize;

- (void)reset;

- (void)update:(IOSByteArray *)src
    withOffset:(jint)offset
    withLength:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesDigestCombinedHash)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesDigestCombinedHash_initWithARDigestArray_(ImActorRuntimeCryptoPrimitivesDigestCombinedHash *self, IOSObjectArray *digests);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesDigestCombinedHash *new_ImActorRuntimeCryptoPrimitivesDigestCombinedHash_initWithARDigestArray_(IOSObjectArray *digests) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesDigestCombinedHash *create_ImActorRuntimeCryptoPrimitivesDigestCombinedHash_initWithARDigestArray_(IOSObjectArray *digests);

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesDigestCombinedHash)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestCombinedHash")

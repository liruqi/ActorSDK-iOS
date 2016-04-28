//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/kuznechik/KuznechikFastEngine.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine))
#define ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_

#define RESTRICT_ImActorRuntimeCryptoBlockCipher 1
#define INCLUDE_ARBlockCipher 1
#include "../../../../../../im/actor/runtime/crypto/BlockCipher.h"

@class IOSByteArray;
@class IOSIntArray;
@class IOSObjectArray;

@interface ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine : NSObject < ARBlockCipher >

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)key;

- (void)decryptBlock:(IOSByteArray *)data
          withOffset:(jint)offset
              toDest:(IOSByteArray *)dest
          withOffset:(jint)destOffset;

- (void)encryptBlock:(IOSByteArray *)data
          withOffset:(jint)offset
              toDest:(IOSByteArray *)dest
          withOffset:(jint)destOffset;

- (jint)getBlockSize;

+ (void)initCalc OBJC_METHOD_FAMILY_NONE;

+ (void)initDumpWithByteArray:(IOSByteArray *)data OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

+ (IOSObjectArray *)convertKeyWithByteArray:(IOSByteArray *)key;

- (IOSObjectArray *)getKey;

+ (void)kuz_lWithByteArray:(IOSByteArray *)w;

+ (void)kuz_l_fastWithIntArray:(IOSIntArray *)w;

+ (void)kuz_l_invWithByteArray:(IOSByteArray *)w;

+ (jbyte)kuz_mul_gf256_fastWithByte:(jbyte)a
                           withByte:(jbyte)b;

@end

J2OBJC_STATIC_INIT(ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_initCalc();

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_initDumpWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_kuz_l_fastWithIntArray_(IOSIntArray *w);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_kuz_lWithByteArray_(IOSByteArray *w);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_kuz_l_invWithByteArray_(IOSByteArray *w);

FOUNDATION_EXPORT jbyte ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_kuz_mul_gf256_fastWithByte_withByte_(jbyte a, jbyte b);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_initWithByteArray_(ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine *self, IOSByteArray *key);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine *new_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_initWithByteArray_(IOSByteArray *key) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine *create_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_initWithByteArray_(IOSByteArray *key);

FOUNDATION_EXPORT IOSObjectArray *ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine_convertKeyWithByteArray_(IOSByteArray *key);

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesKuznechikKuznechikFastEngine")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/encryption/entity/PublicKey.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEntityPublicKey")
#ifdef RESTRICT_ImActorCoreModulesEncryptionEntityPublicKey
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEntityPublicKey 0
#else
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEntityPublicKey 1
#endif
#undef RESTRICT_ImActorCoreModulesEncryptionEntityPublicKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesEncryptionEntityPublicKey_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEntityPublicKey || defined(INCLUDE_ImActorCoreModulesEncryptionEntityPublicKey))
#define ImActorCoreModulesEncryptionEntityPublicKey_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/actor/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ImActorCoreModulesEncryptionEntityPublicKey : ARBserObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithLong:(jlong)keyId
                withNSString:(NSString *)keyAlg
               withByteArray:(IOSByteArray *)publicKey;

- (NSString *)getKeyAlg;

- (jlong)getKeyId;

- (IOSByteArray *)getPublicKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEntityPublicKey)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEntityPublicKey_initWithLong_withNSString_withByteArray_(ImActorCoreModulesEncryptionEntityPublicKey *self, jlong keyId, NSString *keyAlg, IOSByteArray *publicKey);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityPublicKey *new_ImActorCoreModulesEncryptionEntityPublicKey_initWithLong_withNSString_withByteArray_(jlong keyId, NSString *keyAlg, IOSByteArray *publicKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityPublicKey *create_ImActorCoreModulesEncryptionEntityPublicKey_initWithLong_withNSString_withByteArray_(jlong keyId, NSString *keyAlg, IOSByteArray *publicKey);

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEntityPublicKey_initWithByteArray_(ImActorCoreModulesEncryptionEntityPublicKey *self, IOSByteArray *data);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityPublicKey *new_ImActorCoreModulesEncryptionEntityPublicKey_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityPublicKey *create_ImActorCoreModulesEncryptionEntityPublicKey_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEntityPublicKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEntityPublicKey")

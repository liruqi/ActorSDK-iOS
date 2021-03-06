//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/encryption/entity/UserKeysGroup.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeysGroup")
#ifdef RESTRICT_ImActorCoreModulesEncryptionEntityUserKeysGroup
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeysGroup 0
#else
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeysGroup 1
#endif
#undef RESTRICT_ImActorCoreModulesEncryptionEntityUserKeysGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesEncryptionEntityUserKeysGroup_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeysGroup || defined(INCLUDE_ImActorCoreModulesEncryptionEntityUserKeysGroup))
#define ImActorCoreModulesEncryptionEntityUserKeysGroup_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/actor/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class IOSObjectArray;
@class ImActorCoreModulesEncryptionEntityPublicKey;
@protocol ARPredicate;

@interface ImActorCoreModulesEncryptionEntityUserKeysGroup : ARBserObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithInt:(jint)keyGroupId
withImActorCoreModulesEncryptionEntityPublicKey:(ImActorCoreModulesEncryptionEntityPublicKey *)identityKey
withImActorCoreModulesEncryptionEntityPublicKeyArray:(IOSObjectArray *)keys
withImActorCoreModulesEncryptionEntityPublicKeyArray:(IOSObjectArray *)ephemeralKeys;

- (ImActorCoreModulesEncryptionEntityUserKeysGroup *)addPublicKeyWithImActorCoreModulesEncryptionEntityPublicKey:(ImActorCoreModulesEncryptionEntityPublicKey *)publicKey;

+ (id<ARPredicate>)BY_KEY_GROUPWithInt:(jint)keyGroupId;

- (IOSObjectArray *)getEphemeralKeys;

- (ImActorCoreModulesEncryptionEntityPublicKey *)getIdentityKey;

- (jint)getKeyGroupId;

- (IOSObjectArray *)getKeys;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEntityUserKeysGroup)

FOUNDATION_EXPORT id<ARPredicate> ImActorCoreModulesEncryptionEntityUserKeysGroup_BY_KEY_GROUPWithInt_(jint keyGroupId);

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEntityUserKeysGroup_initWithInt_withImActorCoreModulesEncryptionEntityPublicKey_withImActorCoreModulesEncryptionEntityPublicKeyArray_withImActorCoreModulesEncryptionEntityPublicKeyArray_(ImActorCoreModulesEncryptionEntityUserKeysGroup *self, jint keyGroupId, ImActorCoreModulesEncryptionEntityPublicKey *identityKey, IOSObjectArray *keys, IOSObjectArray *ephemeralKeys);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityUserKeysGroup *new_ImActorCoreModulesEncryptionEntityUserKeysGroup_initWithInt_withImActorCoreModulesEncryptionEntityPublicKey_withImActorCoreModulesEncryptionEntityPublicKeyArray_withImActorCoreModulesEncryptionEntityPublicKeyArray_(jint keyGroupId, ImActorCoreModulesEncryptionEntityPublicKey *identityKey, IOSObjectArray *keys, IOSObjectArray *ephemeralKeys) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityUserKeysGroup *create_ImActorCoreModulesEncryptionEntityUserKeysGroup_initWithInt_withImActorCoreModulesEncryptionEntityPublicKey_withImActorCoreModulesEncryptionEntityPublicKeyArray_withImActorCoreModulesEncryptionEntityPublicKeyArray_(jint keyGroupId, ImActorCoreModulesEncryptionEntityPublicKey *identityKey, IOSObjectArray *keys, IOSObjectArray *ephemeralKeys);

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEntityUserKeysGroup_initWithByteArray_(ImActorCoreModulesEncryptionEntityUserKeysGroup *self, IOSByteArray *data);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityUserKeysGroup *new_ImActorCoreModulesEncryptionEntityUserKeysGroup_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityUserKeysGroup *create_ImActorCoreModulesEncryptionEntityUserKeysGroup_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEntityUserKeysGroup)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeysGroup")

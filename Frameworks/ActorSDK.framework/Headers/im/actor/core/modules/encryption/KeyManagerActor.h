//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/encryption/KeyManagerActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor")
#ifdef RESTRICT_ImActorCoreModulesEncryptionKeyManagerActor
#define INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor 1
#endif
#undef RESTRICT_ImActorCoreModulesEncryptionKeyManagerActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor))
#define ImActorCoreModulesEncryptionKeyManagerActor_

#define RESTRICT_ImActorCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/actor/core/modules/ModuleActor.h"

@class ARPromise;
@protocol ACModuleContext;

/*!
 @brief Key Management Actor.
 1) Generates and uploads own keys.
 2) Downloads and manages updates about foreign keys
 */
@interface ImActorCoreModulesEncryptionKeyManagerActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (ARPromise *)onAskWithId:(id)message;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_initWithACModuleContext_(ImActorCoreModulesEncryptionKeyManagerActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor *new_ImActorCoreModulesEncryptionKeyManagerActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor *create_ImActorCoreModulesEncryptionKeyManagerActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey))
#define ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey_

#define RESTRICT_ImActorRuntimeActorsAskAskMessage 1
#define INCLUDE_ImActorRuntimeActorsAskAskMessage 1
#include "../../../../../im/actor/runtime/actors/ask/AskMessage.h"

@interface ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey : NSObject < ImActorRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey_init(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey *self);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey *new_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey *create_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnKey)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity))
#define ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity_

#define RESTRICT_ImActorRuntimeActorsAskAskResult 1
#define INCLUDE_ImActorRuntimeActorsAskAskResult 1
#include "../../../../../im/actor/runtime/actors/ask/AskResult.h"

@class ImActorCoreModulesEncryptionEntityPrivateKey;

@interface ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity : ImActorRuntimeActorsAskAskResult

#pragma mark Public

- (instancetype)initWithInt:(jint)keyGroup
withImActorCoreModulesEncryptionEntityPrivateKey:(ImActorCoreModulesEncryptionEntityPrivateKey *)identityKey;

- (ImActorCoreModulesEncryptionEntityPrivateKey *)getIdentityKey;

- (jint)getKeyGroup;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity_initWithInt_withImActorCoreModulesEncryptionEntityPrivateKey_(ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity *self, jint keyGroup, ImActorCoreModulesEncryptionEntityPrivateKey *identityKey);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity *new_ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity_initWithInt_withImActorCoreModulesEncryptionEntityPrivateKey_(jint keyGroup, ImActorCoreModulesEncryptionEntityPrivateKey *identityKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity *create_ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity_initWithInt_withImActorCoreModulesEncryptionEntityPrivateKey_(jint keyGroup, ImActorCoreModulesEncryptionEntityPrivateKey *identityKey);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_OwnIdentity)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey))
#define ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey_

#define RESTRICT_ImActorRuntimeActorsAskAskMessage 1
#define INCLUDE_ImActorRuntimeActorsAskAskMessage 1
#include "../../../../../im/actor/runtime/actors/ask/AskMessage.h"

@interface ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey : NSObject < ImActorRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey_init(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey *self);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey *new_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey *create_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnRandomPreKey)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic))
#define ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic_

#define RESTRICT_ImActorRuntimeActorsAskAskMessage 1
#define INCLUDE_ImActorRuntimeActorsAskAskMessage 1
#include "../../../../../im/actor/runtime/actors/ask/AskMessage.h"

@class IOSByteArray;

@interface ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic : NSObject < ImActorRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)publicKey;

- (IOSByteArray *)getPublicKey;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic_initWithByteArray_(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic *self, IOSByteArray *publicKey);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic *new_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic_initWithByteArray_(IOSByteArray *publicKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic *create_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic_initWithByteArray_(IOSByteArray *publicKey);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyByPublic)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById))
#define ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById_

#define RESTRICT_ImActorRuntimeActorsAskAskMessage 1
#define INCLUDE_ImActorRuntimeActorsAskAskMessage 1
#include "../../../../../im/actor/runtime/actors/ask/AskMessage.h"

@interface ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById : NSObject < ImActorRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)initWithLong:(jlong)keyId;

- (jlong)getKeyId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById_initWithLong_(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById *self, jlong keyId);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById *new_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById_initWithLong_(jlong keyId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById *create_ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById_initWithLong_(jlong keyId);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_FetchOwnPreKeyById)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys))
#define ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys_

#define RESTRICT_ImActorRuntimeActorsAskAskMessage 1
#define INCLUDE_ImActorRuntimeActorsAskAskMessage 1
#include "../../../../../im/actor/runtime/actors/ask/AskMessage.h"

@interface ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys : NSObject < ImActorRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)initWithInt:(jint)uid;

- (jint)getUid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys_initWithInt_(ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys *self, jint uid);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys *new_ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys_initWithInt_(jint uid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys *create_ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys_initWithInt_(jint uid);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_FetchUserKeys)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey))
#define ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey_

#define RESTRICT_ImActorRuntimeActorsAskAskMessage 1
#define INCLUDE_ImActorRuntimeActorsAskAskMessage 1
#include "../../../../../im/actor/runtime/actors/ask/AskMessage.h"

@interface ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey : NSObject < ImActorRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
                    withInt:(jint)keyGroup
                   withLong:(jlong)keyId;

- (jint)getKeyGroup;

- (jlong)getKeyId;

- (jint)getUid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey_initWithInt_withInt_withLong_(ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey *self, jint uid, jint keyGroup, jlong keyId);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey *new_ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey_initWithInt_withInt_withLong_(jint uid, jint keyGroup, jlong keyId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey *create_ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey_initWithInt_withInt_withLong_(jint uid, jint keyGroup, jlong keyId);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKey)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom))
#define ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom_

#define RESTRICT_ImActorRuntimeActorsAskAskMessage 1
#define INCLUDE_ImActorRuntimeActorsAskAskMessage 1
#include "../../../../../im/actor/runtime/actors/ask/AskMessage.h"

@interface ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom : NSObject < ImActorRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
                    withInt:(jint)keyGroup;

- (jint)getKeyGroup;

- (jint)getUid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom_initWithInt_withInt_(ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom *self, jint uid, jint keyGroup);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom *new_ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom_initWithInt_withInt_(jint uid, jint keyGroup) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom *create_ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom_initWithInt_withInt_(jint uid, jint keyGroup);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_FetchUserPreKeyRandom)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded))
#define ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded_

@class ARApiEncryptionKeyGroup;

@interface ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
withARApiEncryptionKeyGroup:(ARApiEncryptionKeyGroup *)publicKeyGroup;

- (ARApiEncryptionKeyGroup *)getPublicKeyGroup;

- (jint)getUid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded_initWithInt_withARApiEncryptionKeyGroup_(ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded *self, jint uid, ARApiEncryptionKeyGroup *publicKeyGroup);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded *new_ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded_initWithInt_withARApiEncryptionKeyGroup_(jint uid, ARApiEncryptionKeyGroup *publicKeyGroup) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded *create_ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded_initWithInt_withARApiEncryptionKeyGroup_(jint uid, ARApiEncryptionKeyGroup *publicKeyGroup);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupAdded)

#endif

#if !defined (ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor || defined(INCLUDE_ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved))
#define ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved_

@interface ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
                    withInt:(jint)keyGroupId;

- (jint)getKeyGroupId;

- (jint)getUid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved_initWithInt_withInt_(ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved *self, jint uid, jint keyGroupId);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved *new_ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved_initWithInt_withInt_(jint uid, jint keyGroupId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved *create_ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved_initWithInt_withInt_(jint uid, jint keyGroupId);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionKeyManagerActor_PublicKeysGroupRemoved)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionKeyManagerActor")

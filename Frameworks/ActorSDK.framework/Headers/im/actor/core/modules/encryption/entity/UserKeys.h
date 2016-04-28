//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/encryption/entity/UserKeys.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeys")
#ifdef RESTRICT_ImActorCoreModulesEncryptionEntityUserKeys
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeys 0
#else
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeys 1
#endif
#undef RESTRICT_ImActorCoreModulesEncryptionEntityUserKeys

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesEncryptionEntityUserKeys_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeys || defined(INCLUDE_ImActorCoreModulesEncryptionEntityUserKeys))
#define ImActorCoreModulesEncryptionEntityUserKeys_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/actor/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class IOSObjectArray;
@class ImActorCoreModulesEncryptionEntityUserKeysGroup;

@interface ImActorCoreModulesEncryptionEntityUserKeys : ARBserObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithInt:(jint)uid
withImActorCoreModulesEncryptionEntityUserKeysGroupArray:(IOSObjectArray *)userKeysGroups;

- (ImActorCoreModulesEncryptionEntityUserKeys *)addUserKeyGroupWithImActorCoreModulesEncryptionEntityUserKeysGroup:(ImActorCoreModulesEncryptionEntityUserKeysGroup *)keysGroup;

- (jint)getUid;

- (IOSObjectArray *)getUserKeysGroups;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (ImActorCoreModulesEncryptionEntityUserKeys *)removeUserKeyGroupWithInt:(jint)keyGroupId;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEntityUserKeys)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEntityUserKeys_initWithInt_withImActorCoreModulesEncryptionEntityUserKeysGroupArray_(ImActorCoreModulesEncryptionEntityUserKeys *self, jint uid, IOSObjectArray *userKeysGroups);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityUserKeys *new_ImActorCoreModulesEncryptionEntityUserKeys_initWithInt_withImActorCoreModulesEncryptionEntityUserKeysGroupArray_(jint uid, IOSObjectArray *userKeysGroups) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityUserKeys *create_ImActorCoreModulesEncryptionEntityUserKeys_initWithInt_withImActorCoreModulesEncryptionEntityUserKeysGroupArray_(jint uid, IOSObjectArray *userKeysGroups);

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEntityUserKeys_initWithByteArray_(ImActorCoreModulesEncryptionEntityUserKeys *self, IOSByteArray *data);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityUserKeys *new_ImActorCoreModulesEncryptionEntityUserKeys_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityUserKeys *create_ImActorCoreModulesEncryptionEntityUserKeys_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEntityUserKeys)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEntityUserKeys")

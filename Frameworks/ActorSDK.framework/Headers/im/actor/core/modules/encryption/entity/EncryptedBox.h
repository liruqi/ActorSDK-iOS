//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/encryption/entity/EncryptedBox.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEntityEncryptedBox")
#ifdef RESTRICT_ImActorCoreModulesEncryptionEntityEncryptedBox
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEntityEncryptedBox 0
#else
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEntityEncryptedBox 1
#endif
#undef RESTRICT_ImActorCoreModulesEncryptionEntityEncryptedBox

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesEncryptionEntityEncryptedBox_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEntityEncryptedBox || defined(INCLUDE_ImActorCoreModulesEncryptionEntityEncryptedBox))
#define ImActorCoreModulesEncryptionEntityEncryptedBox_

@class IOSByteArray;
@class IOSObjectArray;

@interface ImActorCoreModulesEncryptionEntityEncryptedBox : NSObject

#pragma mark Public

- (instancetype)initWithImActorCoreModulesEncryptionEntityEncryptedBoxKeyArray:(IOSObjectArray *)keys
                                                                 withByteArray:(IOSByteArray *)encryptedPackage;

- (IOSByteArray *)getEncryptedPackage;

- (IOSObjectArray *)getKeys;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEntityEncryptedBox)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEntityEncryptedBox_initWithImActorCoreModulesEncryptionEntityEncryptedBoxKeyArray_withByteArray_(ImActorCoreModulesEncryptionEntityEncryptedBox *self, IOSObjectArray *keys, IOSByteArray *encryptedPackage);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityEncryptedBox *new_ImActorCoreModulesEncryptionEntityEncryptedBox_initWithImActorCoreModulesEncryptionEntityEncryptedBoxKeyArray_withByteArray_(IOSObjectArray *keys, IOSByteArray *encryptedPackage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEntityEncryptedBox *create_ImActorCoreModulesEncryptionEntityEncryptedBox_initWithImActorCoreModulesEncryptionEntityEncryptedBoxKeyArray_withByteArray_(IOSObjectArray *keys, IOSByteArray *encryptedPackage);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEntityEncryptedBox)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEntityEncryptedBox")

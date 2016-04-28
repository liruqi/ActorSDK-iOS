//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/encryption/EncryptedMsgActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedMsgActor")
#ifdef RESTRICT_ImActorCoreModulesEncryptionEncryptedMsgActor
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedMsgActor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedMsgActor 1
#endif
#undef RESTRICT_ImActorCoreModulesEncryptionEncryptedMsgActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesEncryptionEncryptedMsgActor_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedMsgActor || defined(INCLUDE_ImActorCoreModulesEncryptionEncryptedMsgActor))
#define ImActorCoreModulesEncryptionEncryptedMsgActor_

#define RESTRICT_ImActorCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/actor/core/modules/ModuleActor.h"

@class ARApiEncryptedMessage;
@class ARPromise;
@protocol ACModuleContext;

@interface ImActorCoreModulesEncryptionEncryptedMsgActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (ARPromise *)onAskWithId:(id)message;

- (void)onDecryptWithInt:(jint)uid
withARApiEncryptedMessage:(ARApiEncryptedMessage *)message;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEncryptedMsgActor)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEncryptedMsgActor_initWithACModuleContext_(ImActorCoreModulesEncryptionEncryptedMsgActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor *new_ImActorCoreModulesEncryptionEncryptedMsgActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor *create_ImActorCoreModulesEncryptionEncryptedMsgActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEncryptedMsgActor)

#endif

#if !defined (ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedMsgActor || defined(INCLUDE_ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage))
#define ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage_

@class ACPeer;
@class ARApiEncryptedMessage;

@interface ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)date
                       withInt:(jint)senderUid
                      withLong:(jlong)rid
     withARApiEncryptedMessage:(ARApiEncryptedMessage *)encryptedMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage_initWithACPeer_withLong_withInt_withLong_withARApiEncryptedMessage_(ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage *self, ACPeer *peer, jlong date, jint senderUid, jlong rid, ARApiEncryptedMessage *encryptedMessage);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage *new_ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage_initWithACPeer_withLong_withInt_withLong_withARApiEncryptedMessage_(ACPeer *peer, jlong date, jint senderUid, jlong rid, ARApiEncryptedMessage *encryptedMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage *create_ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage_initWithACPeer_withLong_withInt_withLong_withARApiEncryptedMessage_(ACPeer *peer, jlong date, jint senderUid, jlong rid, ARApiEncryptedMessage *encryptedMessage);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEncryptedMsgActor_InMessage)

#endif

#if !defined (ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedMsgActor || defined(INCLUDE_ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage))
#define ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage_

@class ARApiMessage;

@interface ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
           withARApiMessage:(ARApiMessage *)message;

- (ARApiMessage *)getMessage;

- (jint)getUid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage_initWithInt_withARApiMessage_(ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage *self, jint uid, ARApiMessage *message);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage *new_ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage_initWithInt_withARApiMessage_(jint uid, ARApiMessage *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage *create_ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage_initWithInt_withARApiMessage_(jint uid, ARApiMessage *message);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptMessage)

#endif

#if !defined (ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedMsgActor || defined(INCLUDE_ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage))
#define ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage_

@class ARApiEncryptedMessage;

@interface ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage : NSObject

#pragma mark Public

- (instancetype)initWithARApiEncryptedMessage:(ARApiEncryptedMessage *)encryptedMessage;

- (ARApiEncryptedMessage *)getEncryptedMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage_initWithARApiEncryptedMessage_(ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage *self, ARApiEncryptedMessage *encryptedMessage);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage *new_ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage_initWithARApiEncryptedMessage_(ARApiEncryptedMessage *encryptedMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage *create_ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage_initWithARApiEncryptedMessage_(ARApiEncryptedMessage *encryptedMessage);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEncryptedMsgActor_EncryptedMessage)

#endif

#if !defined (ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedMsgActor || defined(INCLUDE_ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage))
#define ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage_

@class ARApiEncryptedMessage;

@interface ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage : NSObject

#pragma mark Public

- (instancetype)initWithARApiEncryptedMessage:(ARApiEncryptedMessage *)encryptedMessage;

- (ARApiEncryptedMessage *)getEncryptedMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage_initWithARApiEncryptedMessage_(ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage *self, ARApiEncryptedMessage *encryptedMessage);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage *new_ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage_initWithARApiEncryptedMessage_(ARApiEncryptedMessage *encryptedMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage *create_ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage_initWithARApiEncryptedMessage_(ARApiEncryptedMessage *encryptedMessage);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEncryptedMsgActor_DecryptMessage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedMsgActor")

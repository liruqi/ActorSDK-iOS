//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/encryption/PeerSessionsStorage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSessionsStorage")
#ifdef RESTRICT_ImActorCoreEntityEncryptionPeerSessionsStorage
#define INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSessionsStorage 0
#else
#define INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSessionsStorage 1
#endif
#undef RESTRICT_ImActorCoreEntityEncryptionPeerSessionsStorage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreEntityEncryptionPeerSessionsStorage_) && (INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSessionsStorage || defined(INCLUDE_ImActorCoreEntityEncryptionPeerSessionsStorage))
#define ImActorCoreEntityEncryptionPeerSessionsStorage_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../im/actor/runtime/bser/BserObject.h"

#define RESTRICT_ImActorRuntimeStorageKeyValueItem 1
#define INCLUDE_ARKeyValueItem 1
#include "../../../../../im/actor/runtime/storage/KeyValueItem.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class IOSObjectArray;
@class ImActorCoreEntityEncryptionPeerSession;
@protocol ARFunction;
@protocol JavaUtilList;

@interface ImActorCoreEntityEncryptionPeerSessionsStorage : ARBserObject < ARKeyValueItem >

+ (id<ARFunction>)SESSIONS;

+ (void)setSESSIONS:(id<ARFunction>)value;

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithInt:(jint)uid
           withJavaUtilList:(id<JavaUtilList>)sessions;

- (ImActorCoreEntityEncryptionPeerSessionsStorage *)addSessionWithImActorCoreEntityEncryptionPeerSession:(ImActorCoreEntityEncryptionPeerSession *)session;

- (jlong)getEngineId;

- (IOSObjectArray *)getSessions;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_STATIC_INIT(ImActorCoreEntityEncryptionPeerSessionsStorage)

inline id<ARFunction> ImActorCoreEntityEncryptionPeerSessionsStorage_get_SESSIONS();
inline id<ARFunction> ImActorCoreEntityEncryptionPeerSessionsStorage_set_SESSIONS(id<ARFunction> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARFunction> ImActorCoreEntityEncryptionPeerSessionsStorage_SESSIONS;
J2OBJC_STATIC_FIELD_OBJ(ImActorCoreEntityEncryptionPeerSessionsStorage, SESSIONS, id<ARFunction>)

FOUNDATION_EXPORT void ImActorCoreEntityEncryptionPeerSessionsStorage_initWithInt_withJavaUtilList_(ImActorCoreEntityEncryptionPeerSessionsStorage *self, jint uid, id<JavaUtilList> sessions);

FOUNDATION_EXPORT ImActorCoreEntityEncryptionPeerSessionsStorage *new_ImActorCoreEntityEncryptionPeerSessionsStorage_initWithInt_withJavaUtilList_(jint uid, id<JavaUtilList> sessions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreEntityEncryptionPeerSessionsStorage *create_ImActorCoreEntityEncryptionPeerSessionsStorage_initWithInt_withJavaUtilList_(jint uid, id<JavaUtilList> sessions);

FOUNDATION_EXPORT void ImActorCoreEntityEncryptionPeerSessionsStorage_initWithByteArray_(ImActorCoreEntityEncryptionPeerSessionsStorage *self, IOSByteArray *data);

FOUNDATION_EXPORT ImActorCoreEntityEncryptionPeerSessionsStorage *new_ImActorCoreEntityEncryptionPeerSessionsStorage_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreEntityEncryptionPeerSessionsStorage *create_ImActorCoreEntityEncryptionPeerSessionsStorage_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreEntityEncryptionPeerSessionsStorage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSessionsStorage")

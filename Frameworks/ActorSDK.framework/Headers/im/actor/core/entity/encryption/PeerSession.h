//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/encryption/PeerSession.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSession")
#ifdef RESTRICT_ImActorCoreEntityEncryptionPeerSession
#define INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSession 0
#else
#define INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSession 1
#endif
#undef RESTRICT_ImActorCoreEntityEncryptionPeerSession

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreEntityEncryptionPeerSession_) && (INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSession || defined(INCLUDE_ImActorCoreEntityEncryptionPeerSession))
#define ImActorCoreEntityEncryptionPeerSession_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../im/actor/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol ARPredicate;
@protocol JavaUtilComparator;

@interface ImActorCoreEntityEncryptionPeerSession : ARBserObject

+ (id<JavaUtilComparator>)COMPARATOR;

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithLong:(jlong)sid
                     withInt:(jint)uid
                     withInt:(jint)ownKeyGroupId
                     withInt:(jint)theirKeyGroupId
                    withLong:(jlong)ownPreKeyId
                    withLong:(jlong)theirPreKeyId
               withByteArray:(IOSByteArray *)masterKey;

+ (id<ARPredicate>)BY_IDSWithInt:(jint)theirKeyGroupId
                        withLong:(jlong)ownPreKeyId
                        withLong:(jlong)theirPreKeyId;

+ (id<ARPredicate>)BY_THEIR_GROUPWithInt:(jint)theirKeyGroupId;

- (IOSByteArray *)getMasterKey;

- (jint)getOwnKeyGroupId;

- (jlong)getOwnPreKeyId;

- (jlong)getSid;

- (jint)getTheirKeyGroupId;

- (jlong)getTheirPreKeyId;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_STATIC_INIT(ImActorCoreEntityEncryptionPeerSession)

inline id<JavaUtilComparator> ImActorCoreEntityEncryptionPeerSession_get_COMPARATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilComparator> ImActorCoreEntityEncryptionPeerSession_COMPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImActorCoreEntityEncryptionPeerSession, COMPARATOR, id<JavaUtilComparator>)

FOUNDATION_EXPORT id<ARPredicate> ImActorCoreEntityEncryptionPeerSession_BY_THEIR_GROUPWithInt_(jint theirKeyGroupId);

FOUNDATION_EXPORT id<ARPredicate> ImActorCoreEntityEncryptionPeerSession_BY_IDSWithInt_withLong_withLong_(jint theirKeyGroupId, jlong ownPreKeyId, jlong theirPreKeyId);

FOUNDATION_EXPORT void ImActorCoreEntityEncryptionPeerSession_initWithLong_withInt_withInt_withInt_withLong_withLong_withByteArray_(ImActorCoreEntityEncryptionPeerSession *self, jlong sid, jint uid, jint ownKeyGroupId, jint theirKeyGroupId, jlong ownPreKeyId, jlong theirPreKeyId, IOSByteArray *masterKey);

FOUNDATION_EXPORT ImActorCoreEntityEncryptionPeerSession *new_ImActorCoreEntityEncryptionPeerSession_initWithLong_withInt_withInt_withInt_withLong_withLong_withByteArray_(jlong sid, jint uid, jint ownKeyGroupId, jint theirKeyGroupId, jlong ownPreKeyId, jlong theirPreKeyId, IOSByteArray *masterKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreEntityEncryptionPeerSession *create_ImActorCoreEntityEncryptionPeerSession_initWithLong_withInt_withInt_withInt_withLong_withLong_withByteArray_(jlong sid, jint uid, jint ownKeyGroupId, jint theirKeyGroupId, jlong ownPreKeyId, jlong theirPreKeyId, IOSByteArray *masterKey);

FOUNDATION_EXPORT void ImActorCoreEntityEncryptionPeerSession_initWithByteArray_(ImActorCoreEntityEncryptionPeerSession *self, IOSByteArray *data);

FOUNDATION_EXPORT ImActorCoreEntityEncryptionPeerSession *new_ImActorCoreEntityEncryptionPeerSession_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreEntityEncryptionPeerSession *create_ImActorCoreEntityEncryptionPeerSession_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreEntityEncryptionPeerSession)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityEncryptionPeerSession")

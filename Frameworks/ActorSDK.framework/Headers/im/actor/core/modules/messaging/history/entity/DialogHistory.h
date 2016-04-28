//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/history/entity/DialogHistory.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingHistoryEntityDialogHistory")
#ifdef RESTRICT_ImActorCoreModulesMessagingHistoryEntityDialogHistory
#define INCLUDE_ALL_ImActorCoreModulesMessagingHistoryEntityDialogHistory 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingHistoryEntityDialogHistory 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingHistoryEntityDialogHistory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingHistoryEntityDialogHistory_) && (INCLUDE_ALL_ImActorCoreModulesMessagingHistoryEntityDialogHistory || defined(INCLUDE_ImActorCoreModulesMessagingHistoryEntityDialogHistory))
#define ImActorCoreModulesMessagingHistoryEntityDialogHistory_

@class ACAbsContent;
@class ACPeer;

@interface ImActorCoreModulesMessagingHistoryEntityDialogHistory : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                       withInt:(jint)unreadCount
                      withLong:(jlong)sortDate
                      withLong:(jlong)rid
                      withLong:(jlong)date
                       withInt:(jint)senderId
              withACAbsContent:(ACAbsContent *)content
                   withBoolean:(jboolean)isRead
                   withBoolean:(jboolean)isReceived;

- (ACAbsContent *)getContent;

- (jlong)getDate;

- (ACPeer *)getPeer;

- (jlong)getRid;

- (jint)getSenderId;

- (jlong)getSortDate;

- (jint)getUnreadCount;

- (jboolean)isRead;

- (jboolean)isReceived;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingHistoryEntityDialogHistory)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingHistoryEntityDialogHistory_initWithACPeer_withInt_withLong_withLong_withLong_withInt_withACAbsContent_withBoolean_withBoolean_(ImActorCoreModulesMessagingHistoryEntityDialogHistory *self, ACPeer *peer, jint unreadCount, jlong sortDate, jlong rid, jlong date, jint senderId, ACAbsContent *content, jboolean isRead, jboolean isReceived);

FOUNDATION_EXPORT ImActorCoreModulesMessagingHistoryEntityDialogHistory *new_ImActorCoreModulesMessagingHistoryEntityDialogHistory_initWithACPeer_withInt_withLong_withLong_withLong_withInt_withACAbsContent_withBoolean_withBoolean_(ACPeer *peer, jint unreadCount, jlong sortDate, jlong rid, jlong date, jint senderId, ACAbsContent *content, jboolean isRead, jboolean isReceived) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingHistoryEntityDialogHistory *create_ImActorCoreModulesMessagingHistoryEntityDialogHistory_initWithACPeer_withInt_withLong_withLong_withLong_withInt_withACAbsContent_withBoolean_withBoolean_(ACPeer *peer, jint unreadCount, jlong sortDate, jlong rid, jlong date, jint senderId, ACAbsContent *content, jboolean isRead, jboolean isReceived);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingHistoryEntityDialogHistory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingHistoryEntityDialogHistory")

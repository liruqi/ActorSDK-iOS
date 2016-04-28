//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/i18n/I18nEngine.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreI18nI18nEngine")
#ifdef RESTRICT_ImActorCoreI18nI18nEngine
#define INCLUDE_ALL_ImActorCoreI18nI18nEngine 0
#else
#define INCLUDE_ALL_ImActorCoreI18nI18nEngine 1
#endif
#undef RESTRICT_ImActorCoreI18nI18nEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACI18nEngine_) && (INCLUDE_ALL_ImActorCoreI18nI18nEngine || defined(INCLUDE_ACI18nEngine))
#define ACI18nEngine_

@class ACContentType;
@class ACDialog;
@class ACModules;
@class ACNotification;
@class ACServiceContent;
@class ACSex;
@class ACUserPresence;
@class IOSObjectArray;
@class JavaUtilDate;

@interface ACI18nEngine : NSObject

#pragma mark Public

- (instancetype)initWithModules:(ACModules *)modules;

- (NSString *)formatContentTextWithSenderId:(jint)senderId
                            withContentType:(ACContentType *)contentType
                                   withText:(NSString *)text
                             withRelatedUid:(jint)relatedUid;

- (NSString *)formatDate:(jlong)date;

- (NSString *)formatDialogText:(ACDialog *)dialog;

- (NSString *)formatDuration:(jint)duration;

- (NSString *)formatErrorTextWithError:(id)o;

- (NSString *)formatErrorTextWithTag:(NSString *)tag;

- (NSString *)formatFastName:(NSString *)name;

- (NSString *)formatFileSize:(jint)bytes;

- (NSString *)formatFullServiceMessageWithSenderId:(jint)senderId
                                       withContent:(ACServiceContent *)content;

- (NSString *)formatGroupMembers:(jint)count;

- (NSString *)formatGroupOnline:(jint)count;

- (NSString *)formatMessagesExport:(IOSObjectArray *)messages;

- (NSString *)formatMonth:(JavaUtilDate *)date;

- (NSString *)formatNotificationText:(ACNotification *)pendingNotification;

- (NSString *)formatPerformerNameWithUid:(jint)uid;

- (NSString *)formatPresence:(ACUserPresence *)value
                     withSex:(ACSex *)sex;

- (NSString *)formatShortDate:(jlong)date;

- (NSString *)formatTime:(jlong)date;

- (NSString *)formatTyping;

- (NSString *)formatTypingWithCount:(jint)count;

- (NSString *)formatTypingWithName:(NSString *)name;

- (NSString *)getApplicationName;

- (NSString *)getSubjectNameWithUid:(jint)uid;

- (jboolean)isLargeDialogMessage:(ACContentType *)contentType;

@end

J2OBJC_STATIC_INIT(ACI18nEngine)

FOUNDATION_EXPORT void ACI18nEngine_initWithModules_(ACI18nEngine *self, ACModules *modules);

FOUNDATION_EXPORT ACI18nEngine *new_ACI18nEngine_initWithModules_(ACModules *modules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACI18nEngine *create_ACI18nEngine_initWithModules_(ACModules *modules);

J2OBJC_TYPE_LITERAL_HEADER(ACI18nEngine)

@compatibility_alias ImActorCoreI18nI18nEngine ACI18nEngine;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreI18nI18nEngine")

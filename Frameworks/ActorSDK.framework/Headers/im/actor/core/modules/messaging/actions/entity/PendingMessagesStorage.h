//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/actions/entity/PendingMessagesStorage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage")
#ifdef RESTRICT_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage
#define INCLUDE_ALL_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage_) && (INCLUDE_ALL_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage || defined(INCLUDE_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage))
#define ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../../im/actor/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class JavaUtilArrayList;

@interface ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage : ARBserObject

#pragma mark Public

- (instancetype)init;

+ (ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage *)fromBytesWithByteArray:(IOSByteArray *)data;

- (JavaUtilArrayList *)getPendingMessages;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage)

FOUNDATION_EXPORT ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage *ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage_init(ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage *self);

FOUNDATION_EXPORT ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage *new_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage *create_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingActionsEntityPendingMessagesStorage")

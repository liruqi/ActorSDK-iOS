//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/history/ArchivedDialogsActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingHistoryArchivedDialogsActor")
#ifdef RESTRICT_ImActorCoreModulesMessagingHistoryArchivedDialogsActor
#define INCLUDE_ALL_ImActorCoreModulesMessagingHistoryArchivedDialogsActor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingHistoryArchivedDialogsActor 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingHistoryArchivedDialogsActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingHistoryArchivedDialogsActor_) && (INCLUDE_ALL_ImActorCoreModulesMessagingHistoryArchivedDialogsActor || defined(INCLUDE_ImActorCoreModulesMessagingHistoryArchivedDialogsActor))
#define ImActorCoreModulesMessagingHistoryArchivedDialogsActor_

#define RESTRICT_ImActorCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../../im/actor/core/modules/ModuleActor.h"

@protocol ACModuleContext;
@protocol ACRpcCallback;

@interface ImActorCoreModulesMessagingHistoryArchivedDialogsActor : ACModuleActor {
 @public
  id<ACRpcCallback> lastCallback_;
}

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingHistoryArchivedDialogsActor)

J2OBJC_FIELD_SETTER(ImActorCoreModulesMessagingHistoryArchivedDialogsActor, lastCallback_, id<ACRpcCallback>)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingHistoryArchivedDialogsActor_initWithACModuleContext_(ImActorCoreModulesMessagingHistoryArchivedDialogsActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesMessagingHistoryArchivedDialogsActor *new_ImActorCoreModulesMessagingHistoryArchivedDialogsActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingHistoryArchivedDialogsActor *create_ImActorCoreModulesMessagingHistoryArchivedDialogsActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingHistoryArchivedDialogsActor)

#endif

#if !defined (ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore_) && (INCLUDE_ALL_ImActorCoreModulesMessagingHistoryArchivedDialogsActor || defined(INCLUDE_ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore))
#define ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore_

@protocol ACRpcCallback;

@interface ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore : NSObject {
 @public
  id<ACRpcCallback> callback_;
  jboolean init__;
}

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)init_
              withACRpcCallback:(id<ACRpcCallback>)callback;

- (id<ACRpcCallback>)getCallback;

- (jboolean)isInit;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore)

J2OBJC_FIELD_SETTER(ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore, callback_, id<ACRpcCallback>)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore_initWithBoolean_withACRpcCallback_(ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore *self, jboolean init_, id<ACRpcCallback> callback);

FOUNDATION_EXPORT ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore *new_ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore_initWithBoolean_withACRpcCallback_(jboolean init_, id<ACRpcCallback> callback) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore *create_ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore_initWithBoolean_withACRpcCallback_(jboolean init_, id<ACRpcCallback> callback);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingHistoryArchivedDialogsActor_LoadMore)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingHistoryArchivedDialogsActor")

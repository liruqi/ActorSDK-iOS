//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/router/entity/RouterOutgoingMessage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage")
#ifdef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage_) && (INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage || defined(INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage))
#define ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage_

#define RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#define INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#include "../../../../../../../im/actor/core/modules/messaging/router/entity/RouterMessageOnlyActive.h"

@class ACMessage;
@class ACPeer;

@interface ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage : NSObject < ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive >

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                 withACMessage:(ACMessage *)message;

- (ACMessage *)getMessage;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage_initWithACPeer_withACMessage_(ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage *self, ACPeer *peer, ACMessage *message);

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage *new_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage_initWithACPeer_withACMessage_(ACPeer *peer, ACMessage *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage *create_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage_initWithACPeer_withACMessage_(ACPeer *peer, ACMessage *message);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingMessage")

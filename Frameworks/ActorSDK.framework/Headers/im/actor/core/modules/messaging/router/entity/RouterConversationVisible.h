//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/router/entity/RouterConversationVisible.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible")
#ifdef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingRouterEntityRouterConversationVisible_) && (INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible || defined(INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible))
#define ImActorCoreModulesMessagingRouterEntityRouterConversationVisible_

@class ACPeer;

@interface ImActorCoreModulesMessagingRouterEntityRouterConversationVisible : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingRouterEntityRouterConversationVisible)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingRouterEntityRouterConversationVisible_initWithACPeer_(ImActorCoreModulesMessagingRouterEntityRouterConversationVisible *self, ACPeer *peer);

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterConversationVisible *new_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible_initWithACPeer_(ACPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterConversationVisible *create_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible_initWithACPeer_(ACPeer *peer);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingRouterEntityRouterConversationVisible)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterConversationVisible")

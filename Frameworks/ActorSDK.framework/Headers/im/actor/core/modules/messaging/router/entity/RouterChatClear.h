//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/router/entity/RouterChatClear.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterChatClear")
#ifdef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterChatClear
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterChatClear 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterChatClear 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterChatClear

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingRouterEntityRouterChatClear_) && (INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterChatClear || defined(INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterChatClear))
#define ImActorCoreModulesMessagingRouterEntityRouterChatClear_

#define RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#define INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#include "../../../../../../../im/actor/core/modules/messaging/router/entity/RouterMessageOnlyActive.h"

@class ACPeer;

@interface ImActorCoreModulesMessagingRouterEntityRouterChatClear : NSObject < ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive >

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingRouterEntityRouterChatClear)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingRouterEntityRouterChatClear_initWithACPeer_(ImActorCoreModulesMessagingRouterEntityRouterChatClear *self, ACPeer *peer);

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterChatClear *new_ImActorCoreModulesMessagingRouterEntityRouterChatClear_initWithACPeer_(ACPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterChatClear *create_ImActorCoreModulesMessagingRouterEntityRouterChatClear_initWithACPeer_(ACPeer *peer);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingRouterEntityRouterChatClear)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterChatClear")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/router/entity/RouterNewMessages.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterNewMessages")
#ifdef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterNewMessages
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterNewMessages 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterNewMessages 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterNewMessages

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingRouterEntityRouterNewMessages_) && (INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterNewMessages || defined(INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterNewMessages))
#define ImActorCoreModulesMessagingRouterEntityRouterNewMessages_

#define RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#define INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#include "../../../../../../../im/actor/core/modules/messaging/router/entity/RouterMessageOnlyActive.h"

@class ACPeer;
@protocol JavaUtilList;

@interface ImActorCoreModulesMessagingRouterEntityRouterNewMessages : NSObject < ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive >

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
              withJavaUtilList:(id<JavaUtilList>)messages;

- (id<JavaUtilList>)getMessages;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingRouterEntityRouterNewMessages)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingRouterEntityRouterNewMessages_initWithACPeer_withJavaUtilList_(ImActorCoreModulesMessagingRouterEntityRouterNewMessages *self, ACPeer *peer, id<JavaUtilList> messages);

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterNewMessages *new_ImActorCoreModulesMessagingRouterEntityRouterNewMessages_initWithACPeer_withJavaUtilList_(ACPeer *peer, id<JavaUtilList> messages) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterNewMessages *create_ImActorCoreModulesMessagingRouterEntityRouterNewMessages_initWithACPeer_withJavaUtilList_(ACPeer *peer, id<JavaUtilList> messages);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingRouterEntityRouterNewMessages)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterNewMessages")

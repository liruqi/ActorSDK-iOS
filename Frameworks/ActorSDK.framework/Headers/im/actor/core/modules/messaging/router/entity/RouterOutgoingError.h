//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/router/entity/RouterOutgoingError.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError")
#ifdef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingRouterEntityRouterOutgoingError_) && (INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError || defined(INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError))
#define ImActorCoreModulesMessagingRouterEntityRouterOutgoingError_

#define RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#define INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#include "../../../../../../../im/actor/core/modules/messaging/router/entity/RouterMessageOnlyActive.h"

@class ACPeer;

@interface ImActorCoreModulesMessagingRouterEntityRouterOutgoingError : NSObject < ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive >

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)rid;

- (ACPeer *)getPeer;

- (jlong)getRid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingRouterEntityRouterOutgoingError)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingRouterEntityRouterOutgoingError_initWithACPeer_withLong_(ImActorCoreModulesMessagingRouterEntityRouterOutgoingError *self, ACPeer *peer, jlong rid);

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterOutgoingError *new_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError_initWithACPeer_withLong_(ACPeer *peer, jlong rid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterOutgoingError *create_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError_initWithACPeer_withLong_(ACPeer *peer, jlong rid);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingRouterEntityRouterOutgoingError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterOutgoingError")

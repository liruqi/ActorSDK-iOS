//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/router/entity/RouterMessageRead.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterMessageRead")
#ifdef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterMessageRead
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterMessageRead 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterMessageRead 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterMessageRead

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingRouterEntityRouterMessageRead_) && (INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterMessageRead || defined(INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterMessageRead))
#define ImActorCoreModulesMessagingRouterEntityRouterMessageRead_

#define RESTRICT_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#define INCLUDE_ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive 1
#include "../../../../../../../im/actor/core/modules/messaging/router/entity/RouterMessageOnlyActive.h"

@class ACPeer;

@interface ImActorCoreModulesMessagingRouterEntityRouterMessageRead : NSObject < ImActorCoreModulesMessagingRouterEntityRouterMessageOnlyActive >

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)date;

- (jlong)getDate;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingRouterEntityRouterMessageRead)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingRouterEntityRouterMessageRead_initWithACPeer_withLong_(ImActorCoreModulesMessagingRouterEntityRouterMessageRead *self, ACPeer *peer, jlong date);

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterMessageRead *new_ImActorCoreModulesMessagingRouterEntityRouterMessageRead_initWithACPeer_withLong_(ACPeer *peer, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingRouterEntityRouterMessageRead *create_ImActorCoreModulesMessagingRouterEntityRouterMessageRead_initWithACPeer_withLong_(ACPeer *peer, jlong date);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingRouterEntityRouterMessageRead)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingRouterEntityRouterMessageRead")

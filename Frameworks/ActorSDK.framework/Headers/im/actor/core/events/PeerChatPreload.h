//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/events/PeerChatPreload.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEventsPeerChatPreload")
#ifdef RESTRICT_ImActorCoreEventsPeerChatPreload
#define INCLUDE_ALL_ImActorCoreEventsPeerChatPreload 0
#else
#define INCLUDE_ALL_ImActorCoreEventsPeerChatPreload 1
#endif
#undef RESTRICT_ImActorCoreEventsPeerChatPreload

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreEventsPeerChatPreload_) && (INCLUDE_ALL_ImActorCoreEventsPeerChatPreload || defined(INCLUDE_ImActorCoreEventsPeerChatPreload))
#define ImActorCoreEventsPeerChatPreload_

#define RESTRICT_ImActorRuntimeEventbusEvent 1
#define INCLUDE_ImActorRuntimeEventbusEvent 1
#include "../../../../im/actor/runtime/eventbus/Event.h"

@class ACPeer;

@interface ImActorCoreEventsPeerChatPreload : ImActorRuntimeEventbusEvent

+ (NSString *)EVENT;

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer;

- (ACPeer *)getPeer;

- (NSString *)getType;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreEventsPeerChatPreload)

inline NSString *ImActorCoreEventsPeerChatPreload_get_EVENT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ImActorCoreEventsPeerChatPreload_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImActorCoreEventsPeerChatPreload, EVENT, NSString *)

FOUNDATION_EXPORT void ImActorCoreEventsPeerChatPreload_initWithACPeer_(ImActorCoreEventsPeerChatPreload *self, ACPeer *peer);

FOUNDATION_EXPORT ImActorCoreEventsPeerChatPreload *new_ImActorCoreEventsPeerChatPreload_initWithACPeer_(ACPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreEventsPeerChatPreload *create_ImActorCoreEventsPeerChatPreload_initWithACPeer_(ACPeer *peer);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreEventsPeerChatPreload)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEventsPeerChatPreload")

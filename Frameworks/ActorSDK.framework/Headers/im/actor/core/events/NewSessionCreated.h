//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/events/NewSessionCreated.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEventsNewSessionCreated")
#ifdef RESTRICT_ImActorCoreEventsNewSessionCreated
#define INCLUDE_ALL_ImActorCoreEventsNewSessionCreated 0
#else
#define INCLUDE_ALL_ImActorCoreEventsNewSessionCreated 1
#endif
#undef RESTRICT_ImActorCoreEventsNewSessionCreated

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreEventsNewSessionCreated_) && (INCLUDE_ALL_ImActorCoreEventsNewSessionCreated || defined(INCLUDE_ImActorCoreEventsNewSessionCreated))
#define ImActorCoreEventsNewSessionCreated_

#define RESTRICT_ImActorRuntimeEventbusEvent 1
#define INCLUDE_ImActorRuntimeEventbusEvent 1
#include "../../../../im/actor/runtime/eventbus/Event.h"

@interface ImActorCoreEventsNewSessionCreated : ImActorRuntimeEventbusEvent

+ (NSString *)EVENT;

#pragma mark Public

- (instancetype)init;

- (NSString *)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreEventsNewSessionCreated)

inline NSString *ImActorCoreEventsNewSessionCreated_get_EVENT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ImActorCoreEventsNewSessionCreated_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImActorCoreEventsNewSessionCreated, EVENT, NSString *)

FOUNDATION_EXPORT void ImActorCoreEventsNewSessionCreated_init(ImActorCoreEventsNewSessionCreated *self);

FOUNDATION_EXPORT ImActorCoreEventsNewSessionCreated *new_ImActorCoreEventsNewSessionCreated_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreEventsNewSessionCreated *create_ImActorCoreEventsNewSessionCreated_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreEventsNewSessionCreated)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEventsNewSessionCreated")

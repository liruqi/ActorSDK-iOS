//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/events/DialogsOpened.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEventsDialogsOpened")
#ifdef RESTRICT_ImActorCoreEventsDialogsOpened
#define INCLUDE_ALL_ImActorCoreEventsDialogsOpened 0
#else
#define INCLUDE_ALL_ImActorCoreEventsDialogsOpened 1
#endif
#undef RESTRICT_ImActorCoreEventsDialogsOpened

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreEventsDialogsOpened_) && (INCLUDE_ALL_ImActorCoreEventsDialogsOpened || defined(INCLUDE_ImActorCoreEventsDialogsOpened))
#define ImActorCoreEventsDialogsOpened_

#define RESTRICT_ImActorRuntimeEventbusEvent 1
#define INCLUDE_ImActorRuntimeEventbusEvent 1
#include "../../../../im/actor/runtime/eventbus/Event.h"

@interface ImActorCoreEventsDialogsOpened : ImActorRuntimeEventbusEvent

+ (NSString *)EVENT;

#pragma mark Public

- (instancetype)init;

- (NSString *)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreEventsDialogsOpened)

inline NSString *ImActorCoreEventsDialogsOpened_get_EVENT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ImActorCoreEventsDialogsOpened_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImActorCoreEventsDialogsOpened, EVENT, NSString *)

FOUNDATION_EXPORT void ImActorCoreEventsDialogsOpened_init(ImActorCoreEventsDialogsOpened *self);

FOUNDATION_EXPORT ImActorCoreEventsDialogsOpened *new_ImActorCoreEventsDialogsOpened_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreEventsDialogsOpened *create_ImActorCoreEventsDialogsOpened_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreEventsDialogsOpened)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEventsDialogsOpened")

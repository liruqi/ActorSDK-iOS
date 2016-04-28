//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/messaging/actions/CursorReaderActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMessagingActionsCursorReaderActor")
#ifdef RESTRICT_ImActorCoreModulesMessagingActionsCursorReaderActor
#define INCLUDE_ALL_ImActorCoreModulesMessagingActionsCursorReaderActor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMessagingActionsCursorReaderActor 1
#endif
#undef RESTRICT_ImActorCoreModulesMessagingActionsCursorReaderActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMessagingActionsCursorReaderActor_) && (INCLUDE_ALL_ImActorCoreModulesMessagingActionsCursorReaderActor || defined(INCLUDE_ImActorCoreModulesMessagingActionsCursorReaderActor))
#define ImActorCoreModulesMessagingActionsCursorReaderActor_

#define RESTRICT_ImActorCoreModulesMessagingActionsCursorActor 1
#define INCLUDE_ImActorCoreModulesMessagingActionsCursorActor 1
#include "../../../../../../im/actor/core/modules/messaging/actions/CursorActor.h"

@class ACPeer;
@protocol ACModuleContext;

@interface ImActorCoreModulesMessagingActionsCursorReaderActor : ImActorCoreModulesMessagingActionsCursorActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

#pragma mark Protected

- (void)performWithACPeer:(ACPeer *)peer
                 withLong:(jlong)date;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingActionsCursorReaderActor)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingActionsCursorReaderActor_initWithACModuleContext_(ImActorCoreModulesMessagingActionsCursorReaderActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesMessagingActionsCursorReaderActor *new_ImActorCoreModulesMessagingActionsCursorReaderActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingActionsCursorReaderActor *create_ImActorCoreModulesMessagingActionsCursorReaderActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingActionsCursorReaderActor)

#endif

#if !defined (ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead_) && (INCLUDE_ALL_ImActorCoreModulesMessagingActionsCursorReaderActor || defined(INCLUDE_ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead))
#define ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead_

@class ACPeer;

@interface ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)date;

- (jlong)getDate;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead)

FOUNDATION_EXPORT void ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead_initWithACPeer_withLong_(ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead *self, ACPeer *peer, jlong date);

FOUNDATION_EXPORT ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead *new_ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead_initWithACPeer_withLong_(ACPeer *peer, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead *create_ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead_initWithACPeer_withLong_(ACPeer *peer, jlong date);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMessagingActionsCursorReaderActor_MarkRead)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMessagingActionsCursorReaderActor")

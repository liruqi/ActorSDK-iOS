//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/ModuleActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesModuleActor")
#ifdef RESTRICT_ImActorCoreModulesModuleActor
#define INCLUDE_ALL_ImActorCoreModulesModuleActor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesModuleActor 1
#endif
#undef RESTRICT_ImActorCoreModulesModuleActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACModuleActor_) && (INCLUDE_ALL_ImActorCoreModulesModuleActor || defined(INCLUDE_ACModuleActor))
#define ACModuleActor_

#define RESTRICT_ImActorRuntimeActorsAskcableActor 1
#define INCLUDE_ARAskcableActor 1
#include "../../../../im/actor/runtime/actors/AskcableActor.h"

#define RESTRICT_ImActorRuntimeEventbusBusSubscriber 1
#define INCLUDE_ImActorRuntimeEventbusBusSubscriber 1
#include "../../../../im/actor/runtime/eventbus/BusSubscriber.h"

@class ACConfiguration;
@class ACGroup;
@class ACGroupVM;
@class ACPeer;
@class ACRequest;
@class ACUser;
@class ACUserVM;
@class ARApiOutPeer;
@class ARApiPeer;
@class ARPromise;
@class ImActorCoreModulesSequenceUpdates;
@class ImActorRuntimeEventbusEvent;
@protocol ACModuleContext;
@protocol ACRpcCallback;
@protocol ARKeyValueEngine;
@protocol ARPreferencesStorage;
@protocol JavaUtilList;

@interface ACModuleActor : ARAskcableActor < ImActorRuntimeEventbusBusSubscriber >

+ (jlong)CURSOR_RECEIVED;

+ (jlong)CURSOR_READ;

+ (jlong)CURSOR_OWN_READ;

+ (jlong)CURSOR_DELETE;

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (ARPromise *)apiWithACRequest:(ACRequest *)request;

- (ARApiOutPeer *)buidOutPeerWithACPeer:(ACPeer *)peer;

- (ARApiPeer *)buildApiPeerWithACPeer:(ACPeer *)peer;

- (void)cancelRequestWithLong:(jlong)rid;

- (ACConfiguration *)config;

- (id<ACModuleContext>)context;

- (ACGroup *)getGroupWithInt:(jint)gid;

- (ACGroupVM *)getGroupVMWithInt:(jint)gid;

- (ACUser *)getUserWithInt:(jint)uid;

- (ACUserVM *)getUserVMWithInt:(jint)uid;

- (id<ARKeyValueEngine>)groups;

- (ARPromise *)loadRequiredPeersWithJavaUtilList:(id<JavaUtilList>)users
                                withJavaUtilList:(id<JavaUtilList>)groups;

- (jint)myUid;

- (void)onBusEventWithImActorRuntimeEventbusEvent:(ImActorRuntimeEventbusEvent *)event;

- (id<ARPreferencesStorage>)preferences;

- (jlong)requestWithACRequest:(ACRequest *)request;

- (jlong)requestWithACRequest:(ACRequest *)request
            withACRpcCallback:(id<ACRpcCallback>)callback;

- (void)subscribeWithNSString:(NSString *)eventType;

- (ImActorCoreModulesSequenceUpdates *)updates;

- (id<ARKeyValueEngine>)users;

@end

J2OBJC_EMPTY_STATIC_INIT(ACModuleActor)

inline jlong ACModuleActor_get_CURSOR_RECEIVED();
#define ACModuleActor_CURSOR_RECEIVED 0LL
J2OBJC_STATIC_FIELD_CONSTANT(ACModuleActor, CURSOR_RECEIVED, jlong)

inline jlong ACModuleActor_get_CURSOR_READ();
#define ACModuleActor_CURSOR_READ 1LL
J2OBJC_STATIC_FIELD_CONSTANT(ACModuleActor, CURSOR_READ, jlong)

inline jlong ACModuleActor_get_CURSOR_OWN_READ();
#define ACModuleActor_CURSOR_OWN_READ 2LL
J2OBJC_STATIC_FIELD_CONSTANT(ACModuleActor, CURSOR_OWN_READ, jlong)

inline jlong ACModuleActor_get_CURSOR_DELETE();
#define ACModuleActor_CURSOR_DELETE 3LL
J2OBJC_STATIC_FIELD_CONSTANT(ACModuleActor, CURSOR_DELETE, jlong)

FOUNDATION_EXPORT void ACModuleActor_initWithACModuleContext_(ACModuleActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ACModuleActor *new_ACModuleActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACModuleActor *create_ACModuleActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ACModuleActor)

@compatibility_alias ImActorCoreModulesModuleActor ACModuleActor;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesModuleActor")

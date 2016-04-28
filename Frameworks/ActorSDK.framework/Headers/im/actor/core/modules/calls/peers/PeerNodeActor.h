//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/calls/peers/PeerNodeActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerNodeActor")
#ifdef RESTRICT_ImActorCoreModulesCallsPeersPeerNodeActor
#define INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerNodeActor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerNodeActor 1
#endif
#undef RESTRICT_ImActorCoreModulesCallsPeersPeerNodeActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesCallsPeersPeerNodeActor_) && (INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerNodeActor || defined(INCLUDE_ImActorCoreModulesCallsPeersPeerNodeActor))
#define ImActorCoreModulesCallsPeersPeerNodeActor_

#define RESTRICT_ImActorCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../../im/actor/core/modules/ModuleActor.h"

#define RESTRICT_ImActorCoreModulesCallsPeersPeerConnectionCallback 1
#define INCLUDE_ImActorCoreModulesCallsPeersPeerConnectionCallback 1
#include "../../../../../../im/actor/core/modules/calls/peers/PeerConnectionCallback.h"

@class ImActorCoreModulesCallsPeersPeerSettings;
@protocol ACModuleContext;
@protocol ARWebRTCMediaStream;
@protocol ImActorCoreModulesCallsPeersPeerNodeCallback;
@protocol JavaUtilList;

/*!
 @brief Proxy Actor for simplifying state of PeerConnection by careful peer connection initialization
 and handling case when we want to establish connection before call answering
 */
@interface ImActorCoreModulesCallsPeersPeerNodeActor : ACModuleActor < ImActorCoreModulesCallsPeersPeerConnectionCallback >

#pragma mark Public

- (instancetype)initWithLong:(jlong)deviceId
withImActorCoreModulesCallsPeersPeerSettings:(ImActorCoreModulesCallsPeersPeerSettings *)ownSettings
withImActorCoreModulesCallsPeersPeerNodeCallback:(id<ImActorCoreModulesCallsPeersPeerNodeCallback>)callback
         withACModuleContext:(id<ACModuleContext>)context;

- (void)addOwnStreamWithARWebRTCMediaStream:(id<ARWebRTCMediaStream>)mediaStream;

- (void)onAdvertisedWithImActorCoreModulesCallsPeersPeerSettings:(ImActorCoreModulesCallsPeersPeerSettings *)settings;

- (void)onAnswerWithLong:(jlong)sessionId
            withNSString:(NSString *)sdp;

- (void)onCandidateWithInt:(jint)mdpIndex
              withNSString:(NSString *)id_
              withNSString:(NSString *)sdp;

- (void)onCloseSessionWithLong:(jlong)sessionId;

- (void)onEnabled;

- (void)onMasterAdvertisedWithJavaUtilList:(id<JavaUtilList>)iceServers;

- (void)onNegotiationSuccessfulWithLong:(jlong)sessionId;

- (void)onOfferWithLong:(jlong)sessionId
           withNSString:(NSString *)sdp;

- (void)onReceiveWithId:(id)message;

- (void)onStreamAddedWithARWebRTCMediaStream:(id<ARWebRTCMediaStream>)stream;

- (void)onStreamRemovedWithARWebRTCMediaStream:(id<ARWebRTCMediaStream>)stream;

- (void)postStop;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesCallsPeersPeerNodeActor)

FOUNDATION_EXPORT void ImActorCoreModulesCallsPeersPeerNodeActor_initWithLong_withImActorCoreModulesCallsPeersPeerSettings_withImActorCoreModulesCallsPeersPeerNodeCallback_withACModuleContext_(ImActorCoreModulesCallsPeersPeerNodeActor *self, jlong deviceId, ImActorCoreModulesCallsPeersPeerSettings *ownSettings, id<ImActorCoreModulesCallsPeersPeerNodeCallback> callback, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerNodeActor *new_ImActorCoreModulesCallsPeersPeerNodeActor_initWithLong_withImActorCoreModulesCallsPeersPeerSettings_withImActorCoreModulesCallsPeersPeerNodeCallback_withACModuleContext_(jlong deviceId, ImActorCoreModulesCallsPeersPeerSettings *ownSettings, id<ImActorCoreModulesCallsPeersPeerNodeCallback> callback, id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerNodeActor *create_ImActorCoreModulesCallsPeersPeerNodeActor_initWithLong_withImActorCoreModulesCallsPeersPeerSettings_withImActorCoreModulesCallsPeersPeerNodeCallback_withACModuleContext_(jlong deviceId, ImActorCoreModulesCallsPeersPeerSettings *ownSettings, id<ImActorCoreModulesCallsPeersPeerNodeCallback> callback, id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsPeersPeerNodeActor)

#endif

#if !defined (ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream_) && (INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerNodeActor || defined(INCLUDE_ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream))
#define ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream_

@protocol ARWebRTCMediaStream;

@interface ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream : NSObject

#pragma mark Public

- (instancetype)initWithARWebRTCMediaStream:(id<ARWebRTCMediaStream>)mediaStream;

- (id<ARWebRTCMediaStream>)getMediaStream;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream)

FOUNDATION_EXPORT void ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream_initWithARWebRTCMediaStream_(ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream *self, id<ARWebRTCMediaStream> mediaStream);

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream *new_ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream_initWithARWebRTCMediaStream_(id<ARWebRTCMediaStream> mediaStream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream *create_ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream_initWithARWebRTCMediaStream_(id<ARWebRTCMediaStream> mediaStream);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsPeersPeerNodeActor_AddOwnStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerNodeActor")

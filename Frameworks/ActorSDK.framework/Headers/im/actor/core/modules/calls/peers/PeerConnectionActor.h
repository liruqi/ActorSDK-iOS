//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/calls/peers/PeerConnectionActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor")
#ifdef RESTRICT_ImActorCoreModulesCallsPeersPeerConnectionActor
#define INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor 1
#endif
#undef RESTRICT_ImActorCoreModulesCallsPeersPeerConnectionActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesCallsPeersPeerConnectionActor_) && (INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor || defined(INCLUDE_ImActorCoreModulesCallsPeersPeerConnectionActor))
#define ImActorCoreModulesCallsPeersPeerConnectionActor_

#define RESTRICT_ImActorCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../../im/actor/core/modules/ModuleActor.h"

@class ImActorCoreModulesCallsPeersPeerSettings;
@protocol ACModuleContext;
@protocol ARActorCreator;
@protocol ARWebRTCMediaStream;
@protocol ImActorCoreModulesCallsPeersPeerConnectionCallback;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ImActorCoreModulesCallsPeersPeerConnectionActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)iceServers
withImActorCoreModulesCallsPeersPeerSettings:(ImActorCoreModulesCallsPeersPeerSettings * __nonnull)selfSettings
withImActorCoreModulesCallsPeersPeerSettings:(ImActorCoreModulesCallsPeersPeerSettings * __nonnull)theirSettings
             withARWebRTCMediaStream:(id<ARWebRTCMediaStream> __nonnull)mediaStream
withImActorCoreModulesCallsPeersPeerConnectionCallback:(id<ImActorCoreModulesCallsPeersPeerConnectionCallback> __nonnull)callback
                 withACModuleContext:(id<ACModuleContext> __nonnull)context;

+ (id<ARActorCreator> __nonnull)CONSTRUCTORWithJavaUtilList:(id<JavaUtilList> __nonnull)iceServers
               withImActorCoreModulesCallsPeersPeerSettings:(ImActorCoreModulesCallsPeersPeerSettings * __nonnull)selfSettings
               withImActorCoreModulesCallsPeersPeerSettings:(ImActorCoreModulesCallsPeersPeerSettings * __nonnull)theirSettings
                                    withARWebRTCMediaStream:(id<ARWebRTCMediaStream> __nonnull)mediaStream
     withImActorCoreModulesCallsPeersPeerConnectionCallback:(id<ImActorCoreModulesCallsPeersPeerConnectionCallback> __nonnull)callback
                                        withACModuleContext:(id<ACModuleContext> __nonnull)context;

- (void)onAnswerWithLong:(jlong)sessionId
            withNSString:(NSString * __nonnull)sdp;

- (void)onCandidateWithInt:(jint)index
              withNSString:(NSString * __nonnull)id_
              withNSString:(NSString * __nonnull)sdp;

- (void)onOfferWithLong:(jlong)sessionId
           withNSString:(NSString * __nonnull)sdp;

- (void)onOfferNeededWithLong:(jlong)sessionId;

- (void)onReceiveWithId:(id)message;

- (void)onResetState;

- (void)postStop;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesCallsPeersPeerConnectionActor)

FOUNDATION_EXPORT id<ARActorCreator> ImActorCoreModulesCallsPeersPeerConnectionActor_CONSTRUCTORWithJavaUtilList_withImActorCoreModulesCallsPeersPeerSettings_withImActorCoreModulesCallsPeersPeerSettings_withARWebRTCMediaStream_withImActorCoreModulesCallsPeersPeerConnectionCallback_withACModuleContext_(id<JavaUtilList> iceServers, ImActorCoreModulesCallsPeersPeerSettings *selfSettings, ImActorCoreModulesCallsPeersPeerSettings *theirSettings, id<ARWebRTCMediaStream> mediaStream, id<ImActorCoreModulesCallsPeersPeerConnectionCallback> callback, id<ACModuleContext> context);

FOUNDATION_EXPORT void ImActorCoreModulesCallsPeersPeerConnectionActor_initWithJavaUtilList_withImActorCoreModulesCallsPeersPeerSettings_withImActorCoreModulesCallsPeersPeerSettings_withARWebRTCMediaStream_withImActorCoreModulesCallsPeersPeerConnectionCallback_withACModuleContext_(ImActorCoreModulesCallsPeersPeerConnectionActor *self, id<JavaUtilList> iceServers, ImActorCoreModulesCallsPeersPeerSettings *selfSettings, ImActorCoreModulesCallsPeersPeerSettings *theirSettings, id<ARWebRTCMediaStream> mediaStream, id<ImActorCoreModulesCallsPeersPeerConnectionCallback> callback, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor *new_ImActorCoreModulesCallsPeersPeerConnectionActor_initWithJavaUtilList_withImActorCoreModulesCallsPeersPeerSettings_withImActorCoreModulesCallsPeersPeerSettings_withARWebRTCMediaStream_withImActorCoreModulesCallsPeersPeerConnectionCallback_withACModuleContext_(id<JavaUtilList> iceServers, ImActorCoreModulesCallsPeersPeerSettings *selfSettings, ImActorCoreModulesCallsPeersPeerSettings *theirSettings, id<ARWebRTCMediaStream> mediaStream, id<ImActorCoreModulesCallsPeersPeerConnectionCallback> callback, id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor *create_ImActorCoreModulesCallsPeersPeerConnectionActor_initWithJavaUtilList_withImActorCoreModulesCallsPeersPeerSettings_withImActorCoreModulesCallsPeersPeerSettings_withARWebRTCMediaStream_withImActorCoreModulesCallsPeersPeerConnectionCallback_withACModuleContext_(id<JavaUtilList> iceServers, ImActorCoreModulesCallsPeersPeerSettings *selfSettings, ImActorCoreModulesCallsPeersPeerSettings *theirSettings, id<ARWebRTCMediaStream> mediaStream, id<ImActorCoreModulesCallsPeersPeerConnectionCallback> callback, id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsPeersPeerConnectionActor)

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif

#if !defined (ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded_) && (INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor || defined(INCLUDE_ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded))
#define ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded_

@interface ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded : NSObject
@property (readonly, nonatomic, getter=getSessionId) jlong sessionId;

#pragma mark Public

- (instancetype)initWithLong:(jlong)sessionId;

- (jlong)getSessionId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded)

FOUNDATION_EXPORT void ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded_initWithLong_(ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded *self, jlong sessionId);

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded *new_ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded_initWithLong_(jlong sessionId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded *create_ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded_initWithLong_(jlong sessionId);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsPeersPeerConnectionActor_OnOfferNeeded)

#endif

#if !defined (ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer_) && (INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor || defined(INCLUDE_ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer))
#define ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer_

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer : NSObject
@property (readonly, nonatomic, getter=getSessionId) jlong sessionId;
@property (readonly, copy, nonatomic, getter=getSdp) NSString *sdp;

#pragma mark Public

- (instancetype)initWithLong:(jlong)sessionId
                withNSString:(NSString * __nonnull)sdp;

- (NSString * __nonnull)getSdp;

- (jlong)getSessionId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer)

FOUNDATION_EXPORT void ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer_initWithLong_withNSString_(ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer *self, jlong sessionId, NSString *sdp);

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer *new_ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer_initWithLong_withNSString_(jlong sessionId, NSString *sdp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer *create_ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer_initWithLong_withNSString_(jlong sessionId, NSString *sdp);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsPeersPeerConnectionActor_OnOffer)

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif

#if !defined (ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer_) && (INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor || defined(INCLUDE_ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer))
#define ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer_

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer : NSObject
@property (readonly, nonatomic, getter=getSessionId) jlong sessionId;
@property (readonly, copy, nonatomic, getter=getSdp) NSString *sdp;

#pragma mark Public

- (instancetype)initWithLong:(jlong)sessionId
                withNSString:(NSString * __nonnull)sdp;

- (NSString * __nonnull)getSdp;

- (jlong)getSessionId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer)

FOUNDATION_EXPORT void ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer_initWithLong_withNSString_(ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer *self, jlong sessionId, NSString *sdp);

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer *new_ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer_initWithLong_withNSString_(jlong sessionId, NSString *sdp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer *create_ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer_initWithLong_withNSString_(jlong sessionId, NSString *sdp);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsPeersPeerConnectionActor_OnAnswer)

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif

#if !defined (ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate_) && (INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor || defined(INCLUDE_ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate))
#define ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate_

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate : NSObject
@property (readonly, nonatomic, getter=getIndex) jint index;
@property (readonly, copy, nonatomic, getter=getSdp) NSString *sdp;
@property (readonly, copy, nonatomic) NSString *id_;

#pragma mark Public

- (instancetype)initWithInt:(jint)index
               withNSString:(NSString * __nonnull)id_
               withNSString:(NSString * __nonnull)sdp;

- (NSString * __nonnull)getId;

- (jint)getIndex;

- (NSString * __nonnull)getSdp;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate)

FOUNDATION_EXPORT void ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate_initWithInt_withNSString_withNSString_(ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate *self, jint index, NSString *id_, NSString *sdp);

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate *new_ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate_initWithInt_withNSString_withNSString_(jint index, NSString *id_, NSString *sdp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate *create_ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate_initWithInt_withNSString_withNSString_(jint index, NSString *id_, NSString *sdp);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsPeersPeerConnectionActor_OnCandidate)

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif

#if !defined (ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState_) && (INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor || defined(INCLUDE_ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState))
#define ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState_

@interface ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState)

FOUNDATION_EXPORT void ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState_init(ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState *self);

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState *new_ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState *create_ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsPeersPeerConnectionActor_ResetState)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerConnectionActor")

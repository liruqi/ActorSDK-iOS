//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/webrtc/WebRTCSessionDescription.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSessionDescription")
#ifdef RESTRICT_ImActorRuntimeWebrtcWebRTCSessionDescription
#define INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSessionDescription 0
#else
#define INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSessionDescription 1
#endif
#undef RESTRICT_ImActorRuntimeWebrtcWebRTCSessionDescription

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARWebRTCSessionDescription_) && (INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSessionDescription || defined(INCLUDE_ARWebRTCSessionDescription))
#define ARWebRTCSessionDescription_

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief WebRTC Session description
 */
@interface ARWebRTCSessionDescription : NSObject
@property (readonly, copy, nonatomic, getter=getType) NSString *type;
@property (readonly, copy, nonatomic, getter=getSdp) NSString *sdp;

#pragma mark Public

/*!
 @brief Default Constructor for session description
 @param type type of description. Usually "answer" or "offer".
 @param sdp  SDP value
 */
- (instancetype)initWithType:(NSString * __nonnull)type
                     withSDP:(NSString * __nonnull)sdp;

/*!
 @brief Get SDP value
 @return SDP value
 */
- (NSString * __nonnull)getSdp;

/*!
 @brief Get Description type
 @return description type
 */
- (NSString * __nonnull)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(ARWebRTCSessionDescription)

FOUNDATION_EXPORT void ARWebRTCSessionDescription_initWithType_withSDP_(ARWebRTCSessionDescription *self, NSString *type, NSString *sdp);

FOUNDATION_EXPORT ARWebRTCSessionDescription *new_ARWebRTCSessionDescription_initWithType_withSDP_(NSString *type, NSString *sdp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARWebRTCSessionDescription *create_ARWebRTCSessionDescription_initWithType_withSDP_(NSString *type, NSString *sdp);

J2OBJC_TYPE_LITERAL_HEADER(ARWebRTCSessionDescription)

@compatibility_alias ImActorRuntimeWebrtcWebRTCSessionDescription ARWebRTCSessionDescription;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSessionDescription")

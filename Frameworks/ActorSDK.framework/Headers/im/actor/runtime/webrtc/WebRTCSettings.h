//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/webrtc/WebRTCSettings.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSettings")
#ifdef RESTRICT_ImActorRuntimeWebrtcWebRTCSettings
#define INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSettings 0
#else
#define INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSettings 1
#endif
#undef RESTRICT_ImActorRuntimeWebrtcWebRTCSettings

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARWebRTCSettings_) && (INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSettings || defined(INCLUDE_ARWebRTCSettings))
#define ARWebRTCSettings_

@interface ARWebRTCSettings : NSObject
@property (readonly, nonatomic, getter=is3DESEnabled) jboolean is3DESEnabled;
@property (readonly, nonatomic, getter=isDataChannelsEnabled) jboolean isDataChannelsEnabled;

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)is3DESEnabled
                    withBoolean:(jboolean)isDataChannelsEnabled;

- (jboolean)is3DESEnabled;

- (jboolean)isDataChannelsEnabled;

@end

J2OBJC_EMPTY_STATIC_INIT(ARWebRTCSettings)

FOUNDATION_EXPORT void ARWebRTCSettings_initWithBoolean_withBoolean_(ARWebRTCSettings *self, jboolean is3DESEnabled, jboolean isDataChannelsEnabled);

FOUNDATION_EXPORT ARWebRTCSettings *new_ARWebRTCSettings_initWithBoolean_withBoolean_(jboolean is3DESEnabled, jboolean isDataChannelsEnabled) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARWebRTCSettings *create_ARWebRTCSettings_initWithBoolean_withBoolean_(jboolean is3DESEnabled, jboolean isDataChannelsEnabled);

J2OBJC_TYPE_LITERAL_HEADER(ARWebRTCSettings)

@compatibility_alias ImActorRuntimeWebrtcWebRTCSettings ARWebRTCSettings;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeWebrtcWebRTCSettings")

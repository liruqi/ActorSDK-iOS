//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/webrtc/sdp/SDPScheme.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeWebrtcSdpSDPScheme")
#ifdef RESTRICT_ImActorRuntimeWebrtcSdpSDPScheme
#define INCLUDE_ALL_ImActorRuntimeWebrtcSdpSDPScheme 0
#else
#define INCLUDE_ALL_ImActorRuntimeWebrtcSdpSDPScheme 1
#endif
#undef RESTRICT_ImActorRuntimeWebrtcSdpSDPScheme

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARSDPScheme_) && (INCLUDE_ALL_ImActorRuntimeWebrtcSdpSDPScheme || defined(INCLUDE_ARSDPScheme))
#define ARSDPScheme_

@class ImActorRuntimeWebrtcSdpEntitiesSDPSession;
@class JavaUtilArrayList;
@protocol JavaUtilList;

@interface ARSDPScheme : NSObject {
 @public
  ImActorRuntimeWebrtcSdpEntitiesSDPSession *sessionLevel_;
  JavaUtilArrayList *mediaLevel_;
}

#pragma mark Public

- (instancetype)initWithImActorRuntimeWebrtcSdpEntitiesSDPSession:(ImActorRuntimeWebrtcSdpEntitiesSDPSession *)sessionLevel
                                                 withJavaUtilList:(id<JavaUtilList>)mediaLevel;

- (JavaUtilArrayList *)getMediaLevel;

- (ImActorRuntimeWebrtcSdpEntitiesSDPSession *)getSessionLevel;

- (NSString *)toSDP;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARSDPScheme)

J2OBJC_FIELD_SETTER(ARSDPScheme, sessionLevel_, ImActorRuntimeWebrtcSdpEntitiesSDPSession *)
J2OBJC_FIELD_SETTER(ARSDPScheme, mediaLevel_, JavaUtilArrayList *)

FOUNDATION_EXPORT void ARSDPScheme_initWithImActorRuntimeWebrtcSdpEntitiesSDPSession_withJavaUtilList_(ARSDPScheme *self, ImActorRuntimeWebrtcSdpEntitiesSDPSession *sessionLevel, id<JavaUtilList> mediaLevel);

FOUNDATION_EXPORT ARSDPScheme *new_ARSDPScheme_initWithImActorRuntimeWebrtcSdpEntitiesSDPSession_withJavaUtilList_(ImActorRuntimeWebrtcSdpEntitiesSDPSession *sessionLevel, id<JavaUtilList> mediaLevel) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARSDPScheme *create_ARSDPScheme_initWithImActorRuntimeWebrtcSdpEntitiesSDPSession_withJavaUtilList_(ImActorRuntimeWebrtcSdpEntitiesSDPSession *sessionLevel, id<JavaUtilList> mediaLevel);

J2OBJC_TYPE_LITERAL_HEADER(ARSDPScheme)

@compatibility_alias ImActorRuntimeWebrtcSdpSDPScheme ARSDPScheme;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeWebrtcSdpSDPScheme")

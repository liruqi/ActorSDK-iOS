//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/webrtc/sdp/entities/SDPRawRecord.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord")
#ifdef RESTRICT_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord
#define INCLUDE_ALL_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord 0
#else
#define INCLUDE_ALL_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord 1
#endif
#undef RESTRICT_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord_) && (INCLUDE_ALL_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord || defined(INCLUDE_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord))
#define ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord_

@interface ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord : NSObject

#pragma mark Public

- (instancetype)initWithChar:(jchar)type
                withNSString:(NSString *)value;

- (jchar)getType;

- (NSString *)getValue;

- (NSString *)toSDP;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord)

FOUNDATION_EXPORT void ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord_initWithChar_withNSString_(ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord *self, jchar type, NSString *value);

FOUNDATION_EXPORT ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord *new_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord_initWithChar_withNSString_(jchar type, NSString *value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord *create_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord_initWithChar_withNSString_(jchar type, NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeWebrtcSdpEntitiesSDPRawRecord")

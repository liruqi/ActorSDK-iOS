//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/content/internal/LocalVideo.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityContentInternalLocalVideo")
#ifdef RESTRICT_ImActorCoreEntityContentInternalLocalVideo
#define INCLUDE_ALL_ImActorCoreEntityContentInternalLocalVideo 0
#else
#define INCLUDE_ALL_ImActorCoreEntityContentInternalLocalVideo 1
#endif
#undef RESTRICT_ImActorCoreEntityContentInternalLocalVideo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACLocalVideo_) && (INCLUDE_ALL_ImActorCoreEntityContentInternalLocalVideo || defined(INCLUDE_ACLocalVideo))
#define ACLocalVideo_

#define RESTRICT_ImActorCoreEntityContentInternalLocalDocument 1
#define INCLUDE_ACLocalDocument 1
#include "../../../../../../im/actor/core/entity/content/internal/LocalDocument.h"

@class ACLocalFastThumb;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ACLocalVideo : ACLocalDocument

#pragma mark Public

- (instancetype)initWithARBserValues:(ARBserValues *)values;

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithNSString:(NSString *)fileName
                    withNSString:(NSString *)fileDescriptor
                         withInt:(jint)fileSize
                    withNSString:(NSString *)mimeType
            withACLocalFastThumb:(ACLocalFastThumb *)fastThumb
                         withInt:(jint)w
                         withInt:(jint)h
                         withInt:(jint)duration;

- (jint)getDuration;

- (jint)getH;

- (jint)getW;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ACLocalVideo)

FOUNDATION_EXPORT void ACLocalVideo_initWithNSString_withNSString_withInt_withNSString_withACLocalFastThumb_withInt_withInt_withInt_(ACLocalVideo *self, NSString *fileName, NSString *fileDescriptor, jint fileSize, NSString *mimeType, ACLocalFastThumb *fastThumb, jint w, jint h, jint duration);

FOUNDATION_EXPORT ACLocalVideo *new_ACLocalVideo_initWithNSString_withNSString_withInt_withNSString_withACLocalFastThumb_withInt_withInt_withInt_(NSString *fileName, NSString *fileDescriptor, jint fileSize, NSString *mimeType, ACLocalFastThumb *fastThumb, jint w, jint h, jint duration) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACLocalVideo *create_ACLocalVideo_initWithNSString_withNSString_withInt_withNSString_withACLocalFastThumb_withInt_withInt_withInt_(NSString *fileName, NSString *fileDescriptor, jint fileSize, NSString *mimeType, ACLocalFastThumb *fastThumb, jint w, jint h, jint duration);

FOUNDATION_EXPORT void ACLocalVideo_initWithByteArray_(ACLocalVideo *self, IOSByteArray *data);

FOUNDATION_EXPORT ACLocalVideo *new_ACLocalVideo_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACLocalVideo *create_ACLocalVideo_initWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ACLocalVideo_initWithARBserValues_(ACLocalVideo *self, ARBserValues *values);

FOUNDATION_EXPORT ACLocalVideo *new_ACLocalVideo_initWithARBserValues_(ARBserValues *values) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACLocalVideo *create_ACLocalVideo_initWithARBserValues_(ARBserValues *values);

J2OBJC_TYPE_LITERAL_HEADER(ACLocalVideo)

@compatibility_alias ImActorCoreEntityContentInternalLocalVideo ACLocalVideo;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityContentInternalLocalVideo")

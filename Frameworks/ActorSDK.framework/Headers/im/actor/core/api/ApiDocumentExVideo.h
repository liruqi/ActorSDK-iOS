//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiDocumentExVideo.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiDocumentExVideo")
#ifdef RESTRICT_ImActorCoreApiApiDocumentExVideo
#define INCLUDE_ALL_ImActorCoreApiApiDocumentExVideo 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiDocumentExVideo 1
#endif
#undef RESTRICT_ImActorCoreApiApiDocumentExVideo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiDocumentExVideo_) && (INCLUDE_ALL_ImActorCoreApiApiDocumentExVideo || defined(INCLUDE_ARApiDocumentExVideo))
#define ARApiDocumentExVideo_

#define RESTRICT_ImActorCoreApiApiDocumentEx 1
#define INCLUDE_ARApiDocumentEx 1
#include "../../../../im/actor/core/api/ApiDocumentEx.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiDocumentExVideo : ARApiDocumentEx

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)w
                    withInt:(jint)h
                    withInt:(jint)duration;

- (jint)getDuration;

- (jint)getH;

- (jint)getHeader;

- (jint)getW;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiDocumentExVideo)

FOUNDATION_EXPORT void ARApiDocumentExVideo_initWithInt_withInt_withInt_(ARApiDocumentExVideo *self, jint w, jint h, jint duration);

FOUNDATION_EXPORT ARApiDocumentExVideo *new_ARApiDocumentExVideo_initWithInt_withInt_withInt_(jint w, jint h, jint duration) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiDocumentExVideo *create_ARApiDocumentExVideo_initWithInt_withInt_withInt_(jint w, jint h, jint duration);

FOUNDATION_EXPORT void ARApiDocumentExVideo_init(ARApiDocumentExVideo *self);

FOUNDATION_EXPORT ARApiDocumentExVideo *new_ARApiDocumentExVideo_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiDocumentExVideo *create_ARApiDocumentExVideo_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiDocumentExVideo)

@compatibility_alias ImActorCoreApiApiDocumentExVideo ARApiDocumentExVideo;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiDocumentExVideo")

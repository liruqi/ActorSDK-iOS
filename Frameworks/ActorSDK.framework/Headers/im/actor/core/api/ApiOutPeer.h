//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiOutPeer.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiOutPeer")
#ifdef RESTRICT_ImActorCoreApiApiOutPeer
#define INCLUDE_ALL_ImActorCoreApiApiOutPeer 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiOutPeer 1
#endif
#undef RESTRICT_ImActorCoreApiApiOutPeer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiOutPeer_) && (INCLUDE_ALL_ImActorCoreApiApiOutPeer || defined(INCLUDE_ARApiOutPeer))
#define ARApiOutPeer_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/actor/runtime/bser/BserObject.h"

@class ARApiPeerType;
@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiOutPeer : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiPeerType:(ARApiPeerType * __nonnull)type
                              withInt:(jint)id_
                             withLong:(jlong)accessHash;

- (jlong)getAccessHash;

- (jint)getId;

- (ARApiPeerType * __nonnull)getType;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiOutPeer)

FOUNDATION_EXPORT void ARApiOutPeer_initWithARApiPeerType_withInt_withLong_(ARApiOutPeer *self, ARApiPeerType *type, jint id_, jlong accessHash);

FOUNDATION_EXPORT ARApiOutPeer *new_ARApiOutPeer_initWithARApiPeerType_withInt_withLong_(ARApiPeerType *type, jint id_, jlong accessHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiOutPeer *create_ARApiOutPeer_initWithARApiPeerType_withInt_withLong_(ARApiPeerType *type, jint id_, jlong accessHash);

FOUNDATION_EXPORT void ARApiOutPeer_init(ARApiOutPeer *self);

FOUNDATION_EXPORT ARApiOutPeer *new_ARApiOutPeer_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiOutPeer *create_ARApiOutPeer_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiOutPeer)

@compatibility_alias ImActorCoreApiApiOutPeer ARApiOutPeer;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiOutPeer")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/actors/ask/AskIntRequest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeActorsAskAskIntRequest")
#ifdef RESTRICT_ImActorRuntimeActorsAskAskIntRequest
#define INCLUDE_ALL_ImActorRuntimeActorsAskAskIntRequest 0
#else
#define INCLUDE_ALL_ImActorRuntimeActorsAskAskIntRequest 1
#endif
#undef RESTRICT_ImActorRuntimeActorsAskAskIntRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeActorsAskAskIntRequest_) && (INCLUDE_ALL_ImActorRuntimeActorsAskAskIntRequest || defined(INCLUDE_ImActorRuntimeActorsAskAskIntRequest))
#define ImActorRuntimeActorsAskAskIntRequest_

@class ARPromiseResolver;

@interface ImActorRuntimeActorsAskAskIntRequest : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)message
     withARPromiseResolver:(ARPromiseResolver *)future;

- (ARPromiseResolver *)getFuture;

- (id)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeActorsAskAskIntRequest)

FOUNDATION_EXPORT void ImActorRuntimeActorsAskAskIntRequest_initWithId_withARPromiseResolver_(ImActorRuntimeActorsAskAskIntRequest *self, id message, ARPromiseResolver *future);

FOUNDATION_EXPORT ImActorRuntimeActorsAskAskIntRequest *new_ImActorRuntimeActorsAskAskIntRequest_initWithId_withARPromiseResolver_(id message, ARPromiseResolver *future) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeActorsAskAskIntRequest *create_ImActorRuntimeActorsAskAskIntRequest_initWithId_withARPromiseResolver_(id message, ARPromiseResolver *future);

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeActorsAskAskIntRequest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeActorsAskAskIntRequest")

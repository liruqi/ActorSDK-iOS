//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/actors/ask/AskCallback.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeActorsAskAskCallback")
#ifdef RESTRICT_ImActorRuntimeActorsAskAskCallback
#define INCLUDE_ALL_ImActorRuntimeActorsAskAskCallback 0
#else
#define INCLUDE_ALL_ImActorRuntimeActorsAskAskCallback 1
#endif
#undef RESTRICT_ImActorRuntimeActorsAskAskCallback

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeActorsAskAskCallback_) && (INCLUDE_ALL_ImActorRuntimeActorsAskAskCallback || defined(INCLUDE_ImActorRuntimeActorsAskAskCallback))
#define ImActorRuntimeActorsAskAskCallback_

@class JavaLangException;

@protocol ImActorRuntimeActorsAskAskCallback < NSObject, JavaObject >

- (void)onResultWithId:(id)obj;

- (void)onErrorWithJavaLangException:(JavaLangException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeActorsAskAskCallback)

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeActorsAskAskCallback)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeActorsAskAskCallback")

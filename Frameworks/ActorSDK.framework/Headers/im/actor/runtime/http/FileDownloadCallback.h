//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/http/FileDownloadCallback.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeHttpFileDownloadCallback")
#ifdef RESTRICT_ImActorRuntimeHttpFileDownloadCallback
#define INCLUDE_ALL_ImActorRuntimeHttpFileDownloadCallback 0
#else
#define INCLUDE_ALL_ImActorRuntimeHttpFileDownloadCallback 1
#endif
#undef RESTRICT_ImActorRuntimeHttpFileDownloadCallback

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARFileDownloadCallback_) && (INCLUDE_ALL_ImActorRuntimeHttpFileDownloadCallback || defined(INCLUDE_ARFileDownloadCallback))
#define ARFileDownloadCallback_

@class IOSByteArray;

@protocol ARFileDownloadCallback < NSObject, JavaObject >

- (void)onDownloadedWithByteArray:(IOSByteArray *)data;

- (void)onDownloadFailureWithError:(jint)error
                       withRetryIn:(jint)retryInSecs;

@end

J2OBJC_EMPTY_STATIC_INIT(ARFileDownloadCallback)

J2OBJC_TYPE_LITERAL_HEADER(ARFileDownloadCallback)

#define ImActorRuntimeHttpFileDownloadCallback ARFileDownloadCallback

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeHttpFileDownloadCallback")

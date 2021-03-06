//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-cocoa/src/main/java/im/actor/runtime/cocoa/CocoaFileSystemProxyProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCocoaCocoaFileSystemProxyProvider")
#ifdef RESTRICT_ImActorRuntimeCocoaCocoaFileSystemProxyProvider
#define INCLUDE_ALL_ImActorRuntimeCocoaCocoaFileSystemProxyProvider 0
#else
#define INCLUDE_ALL_ImActorRuntimeCocoaCocoaFileSystemProxyProvider 1
#endif
#undef RESTRICT_ImActorRuntimeCocoaCocoaFileSystemProxyProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCocoaFileSystemProxyProvider_) && (INCLUDE_ALL_ImActorRuntimeCocoaCocoaFileSystemProxyProvider || defined(INCLUDE_ARCocoaFileSystemProxyProvider))
#define ARCocoaFileSystemProxyProvider_

#define RESTRICT_ImActorRuntimeFileSystemRuntime 1
#define INCLUDE_ARFileSystemRuntime 1
#include "../../../../im/actor/runtime/FileSystemRuntime.h"

@protocol ARFileSystemReference;

@interface ARCocoaFileSystemProxyProvider : NSObject < ARFileSystemRuntime >

#pragma mark Public

- (instancetype)init;

- (id<ARFileSystemReference>)commitTempFile:(id<ARFileSystemReference>)sourceFile
                                 withFileId:(jlong)fileId
                               withFileName:(NSString *)fileName;

- (id<ARFileSystemReference>)createTempFile;

- (id<ARFileSystemReference>)fileFromDescriptor:(NSString *)descriptor;

- (jboolean)isFsPersistent;

+ (void)setFileSystemRuntime:(id<ARFileSystemRuntime>)runtime;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCocoaFileSystemProxyProvider)

FOUNDATION_EXPORT void ARCocoaFileSystemProxyProvider_setFileSystemRuntime_(id<ARFileSystemRuntime> runtime);

FOUNDATION_EXPORT void ARCocoaFileSystemProxyProvider_init(ARCocoaFileSystemProxyProvider *self);

FOUNDATION_EXPORT ARCocoaFileSystemProxyProvider *new_ARCocoaFileSystemProxyProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCocoaFileSystemProxyProvider *create_ARCocoaFileSystemProxyProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARCocoaFileSystemProxyProvider)

@compatibility_alias ImActorRuntimeCocoaCocoaFileSystemProxyProvider ARCocoaFileSystemProxyProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCocoaCocoaFileSystemProxyProvider")

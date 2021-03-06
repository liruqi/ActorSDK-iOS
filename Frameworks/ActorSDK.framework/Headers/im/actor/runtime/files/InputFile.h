//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/files/InputFile.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeFilesInputFile")
#ifdef RESTRICT_ImActorRuntimeFilesInputFile
#define INCLUDE_ALL_ImActorRuntimeFilesInputFile 0
#else
#define INCLUDE_ALL_ImActorRuntimeFilesInputFile 1
#endif
#undef RESTRICT_ImActorRuntimeFilesInputFile

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARInputFile_) && (INCLUDE_ALL_ImActorRuntimeFilesInputFile || defined(INCLUDE_ARInputFile))
#define ARInputFile_

@class IOSByteArray;
@protocol ARFileReadCallback;

@protocol ARInputFile < NSObject, JavaObject >

- (void)readWithOffset:(jint)fileOffset
              withData:(IOSByteArray *)data
        withDataOffset:(jint)offset
            withLength:(jint)len
          withCallback:(id<ARFileReadCallback>)callback;

- (jboolean)close;

@end

J2OBJC_EMPTY_STATIC_INIT(ARInputFile)

J2OBJC_TYPE_LITERAL_HEADER(ARInputFile)

#define ImActorRuntimeFilesInputFile ARInputFile

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeFilesInputFile")

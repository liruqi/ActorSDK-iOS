//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/FileSystemRuntime.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeFileSystemRuntime")
#ifdef RESTRICT_ImActorRuntimeFileSystemRuntime
#define INCLUDE_ALL_ImActorRuntimeFileSystemRuntime 0
#else
#define INCLUDE_ALL_ImActorRuntimeFileSystemRuntime 1
#endif
#undef RESTRICT_ImActorRuntimeFileSystemRuntime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARFileSystemRuntime_) && (INCLUDE_ALL_ImActorRuntimeFileSystemRuntime || defined(INCLUDE_ARFileSystemRuntime))
#define ARFileSystemRuntime_

@protocol ARFileSystemReference;

/*!
 @brief Provider for File System support
 */
@protocol ARFileSystemRuntime < NSObject, JavaObject >

/*!
 @brief Create temp file for upload/download operation
 @return created temp file
 */
- (id<ARFileSystemReference>)createTempFile;

/*!
 @brief Commit temp file
 @param sourceFile source temp file (created by createTempFile())
 @param fileId     file id
 @param fileName   file name
 @return result file system reference
 */
- (id<ARFileSystemReference>)commitTempFile:(id<ARFileSystemReference>)sourceFile
                                 withFileId:(jlong)fileId
                               withFileName:(NSString *)fileName;

/*!
 @brief Is file system persist data
 @return is file system persist
 */
- (jboolean)isFsPersistent;

/*!
 @brief Create FileSystemReference from descriptor
 @param descriptor descriptor
 @return the FileSystemReference
 */
- (id<ARFileSystemReference>)fileFromDescriptor:(NSString *)descriptor;

@end

J2OBJC_EMPTY_STATIC_INIT(ARFileSystemRuntime)

J2OBJC_TYPE_LITERAL_HEADER(ARFileSystemRuntime)

#define ImActorRuntimeFileSystemRuntime ARFileSystemRuntime

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeFileSystemRuntime")

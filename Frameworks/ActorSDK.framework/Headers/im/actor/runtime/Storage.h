//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/Storage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeStorage")
#ifdef RESTRICT_ImActorRuntimeStorage
#define INCLUDE_ALL_ImActorRuntimeStorage 0
#else
#define INCLUDE_ALL_ImActorRuntimeStorage 1
#endif
#undef RESTRICT_ImActorRuntimeStorage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARStorage_) && (INCLUDE_ALL_ImActorRuntimeStorage || defined(INCLUDE_ARStorage))
#define ARStorage_

@class ARMVVMCollection;
@protocol ARBserCreator;
@protocol AREnginesRuntime;
@protocol ARFileSystemReference;
@protocol ARFileSystemRuntime;
@protocol ARKeyValueStorage;
@protocol ARListEngine;
@protocol ARPlatformDisplayList;
@protocol ARPreferencesStorage;
@protocol ARStorageRuntime;
@protocol ARValueDefaultCreator;
@protocol ARValueModelCreator;

@interface ARStorage : NSObject

#pragma mark Public

- (instancetype)init;

+ (id<ARFileSystemReference>)commitTempFileWithARFileSystemReference:(id<ARFileSystemReference>)sourceFile
                                                            withLong:(jlong)fileId
                                                        withNSString:(NSString *)fileName;

+ (id<ARPlatformDisplayList>)createDisplayListWithARListEngine:(id<ARListEngine>)engine
                                                   withBoolean:(jboolean)isSharedInstance
                                                  withNSString:(NSString *)entityName;

+ (id<ARKeyValueStorage>)createKeyValueWithNSString:(NSString *)name;

+ (ARMVVMCollection *)createKeyValueWithNSString:(NSString *)name
                         withARValueModelCreator:(id<ARValueModelCreator>)wrapperCreator
                               withARBserCreator:(id<ARBserCreator>)creator;

+ (ARMVVMCollection *)createKeyValueWithNSString:(NSString *)name
                         withARValueModelCreator:(id<ARValueModelCreator>)wrapperCreator
                               withARBserCreator:(id<ARBserCreator>)creator
                       withARValueDefaultCreator:(id<ARValueDefaultCreator>)defaultCreator;

+ (id<ARListEngine>)createListWithNSString:(NSString *)name
                         withARBserCreator:(id<ARBserCreator>)creator;

+ (id<ARPreferencesStorage>)createPreferencesStorage;

+ (id<ARFileSystemReference>)createTempFile;

+ (id<ARFileSystemReference>)fileFromDescriptorWithNSString:(NSString *)descriptor;

+ (id<AREnginesRuntime>)getEnginesRuntime;

+ (id<ARFileSystemRuntime>)getFileSystemRuntime;

+ (id<ARStorageRuntime>)getStorageRuntime;

+ (jboolean)isFsPersistent;

+ (void)resetStorage;

@end

J2OBJC_STATIC_INIT(ARStorage)

FOUNDATION_EXPORT id<ARStorageRuntime> ARStorage_getStorageRuntime();

FOUNDATION_EXPORT id<AREnginesRuntime> ARStorage_getEnginesRuntime();

FOUNDATION_EXPORT id<ARFileSystemRuntime> ARStorage_getFileSystemRuntime();

FOUNDATION_EXPORT id<ARPreferencesStorage> ARStorage_createPreferencesStorage();

FOUNDATION_EXPORT id<ARKeyValueStorage> ARStorage_createKeyValueWithNSString_(NSString *name);

FOUNDATION_EXPORT id<ARListEngine> ARStorage_createListWithNSString_withARBserCreator_(NSString *name, id<ARBserCreator> creator);

FOUNDATION_EXPORT ARMVVMCollection *ARStorage_createKeyValueWithNSString_withARValueModelCreator_withARBserCreator_(NSString *name, id<ARValueModelCreator> wrapperCreator, id<ARBserCreator> creator);

FOUNDATION_EXPORT ARMVVMCollection *ARStorage_createKeyValueWithNSString_withARValueModelCreator_withARBserCreator_withARValueDefaultCreator_(NSString *name, id<ARValueModelCreator> wrapperCreator, id<ARBserCreator> creator, id<ARValueDefaultCreator> defaultCreator);

FOUNDATION_EXPORT id<ARPlatformDisplayList> ARStorage_createDisplayListWithARListEngine_withBoolean_withNSString_(id<ARListEngine> engine, jboolean isSharedInstance, NSString *entityName);

FOUNDATION_EXPORT void ARStorage_resetStorage();

FOUNDATION_EXPORT id<ARFileSystemReference> ARStorage_createTempFile();

FOUNDATION_EXPORT jboolean ARStorage_isFsPersistent();

FOUNDATION_EXPORT id<ARFileSystemReference> ARStorage_fileFromDescriptorWithNSString_(NSString *descriptor);

FOUNDATION_EXPORT id<ARFileSystemReference> ARStorage_commitTempFileWithARFileSystemReference_withLong_withNSString_(id<ARFileSystemReference> sourceFile, jlong fileId, NSString *fileName);

FOUNDATION_EXPORT void ARStorage_init(ARStorage *self);

FOUNDATION_EXPORT ARStorage *new_ARStorage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARStorage *create_ARStorage_init();

J2OBJC_TYPE_LITERAL_HEADER(ARStorage)

@compatibility_alias ImActorRuntimeStorage ARStorage;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeStorage")

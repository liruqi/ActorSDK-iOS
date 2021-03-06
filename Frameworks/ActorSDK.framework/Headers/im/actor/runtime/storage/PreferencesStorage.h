//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/storage/PreferencesStorage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeStoragePreferencesStorage")
#ifdef RESTRICT_ImActorRuntimeStoragePreferencesStorage
#define INCLUDE_ALL_ImActorRuntimeStoragePreferencesStorage 0
#else
#define INCLUDE_ALL_ImActorRuntimeStoragePreferencesStorage 1
#endif
#undef RESTRICT_ImActorRuntimeStoragePreferencesStorage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARPreferencesStorage_) && (INCLUDE_ALL_ImActorRuntimeStoragePreferencesStorage || defined(INCLUDE_ARPreferencesStorage))
#define ARPreferencesStorage_

@class IOSByteArray;

@protocol ARPreferencesStorage < NSObject, JavaObject >

- (void)putLongWithKey:(NSString *)key
             withValue:(jlong)v;

- (jlong)getLongWithKey:(NSString *)key
            withDefault:(jlong)def;

- (void)putIntWithKey:(NSString *)key
            withValue:(jint)v;

- (jint)getIntWithKey:(NSString *)key
          withDefault:(jint)def;

- (void)putBoolWithKey:(NSString *)key
             withValue:(jboolean)v;

- (jboolean)getBoolWithKey:(NSString *)key
               withDefault:(jboolean)def;

- (void)putBytesWithKey:(NSString *)key
              withValue:(IOSByteArray *)v;

- (IOSByteArray *)getBytesWithKey:(NSString *)key;

- (void)putStringWithKey:(NSString *)key
               withValue:(NSString *)v;

- (NSString *)getStringWithKey:(NSString *)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ARPreferencesStorage)

J2OBJC_TYPE_LITERAL_HEADER(ARPreferencesStorage)

#define ImActorRuntimeStoragePreferencesStorage ARPreferencesStorage

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeStoragePreferencesStorage")

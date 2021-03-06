//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/storage/KeyValueRecord.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeStorageKeyValueRecord")
#ifdef RESTRICT_ImActorRuntimeStorageKeyValueRecord
#define INCLUDE_ALL_ImActorRuntimeStorageKeyValueRecord 0
#else
#define INCLUDE_ALL_ImActorRuntimeStorageKeyValueRecord 1
#endif
#undef RESTRICT_ImActorRuntimeStorageKeyValueRecord

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARKeyValueRecord_) && (INCLUDE_ALL_ImActorRuntimeStorageKeyValueRecord || defined(INCLUDE_ARKeyValueRecord))
#define ARKeyValueRecord_

@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARKeyValueRecord : NSObject

#pragma mark Public

- (instancetype)initWithKey:(jlong)id_
                   withData:(IOSByteArray * __nonnull)data;

- (IOSByteArray * __nonnull)getData;

- (jlong)getId;

@end

J2OBJC_EMPTY_STATIC_INIT(ARKeyValueRecord)

FOUNDATION_EXPORT void ARKeyValueRecord_initWithKey_withData_(ARKeyValueRecord *self, jlong id_, IOSByteArray *data);

FOUNDATION_EXPORT ARKeyValueRecord *new_ARKeyValueRecord_initWithKey_withData_(jlong id_, IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARKeyValueRecord *create_ARKeyValueRecord_initWithKey_withData_(jlong id_, IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ARKeyValueRecord)

@compatibility_alias ImActorRuntimeStorageKeyValueRecord ARKeyValueRecord;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeStorageKeyValueRecord")

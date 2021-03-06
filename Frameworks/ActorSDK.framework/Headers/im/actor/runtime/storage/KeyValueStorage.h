//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/storage/KeyValueStorage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeStorageKeyValueStorage")
#ifdef RESTRICT_ImActorRuntimeStorageKeyValueStorage
#define INCLUDE_ALL_ImActorRuntimeStorageKeyValueStorage 0
#else
#define INCLUDE_ALL_ImActorRuntimeStorageKeyValueStorage 1
#endif
#undef RESTRICT_ImActorRuntimeStorageKeyValueStorage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARKeyValueStorage_) && (INCLUDE_ALL_ImActorRuntimeStorageKeyValueStorage || defined(INCLUDE_ARKeyValueStorage))
#define ARKeyValueStorage_

@class IOSByteArray;
@class IOSLongArray;
@protocol JavaUtilList;

@protocol ARKeyValueStorage < NSObject, JavaObject >

/*!
 @brief Adding new or replacing old record
 @param key  record key
 @param data record raw data
 */
- (void)addOrUpdateItemWithKey:(jlong)key
                      withData:(IOSByteArray *)data;

/*!
 @brief Adding new or replacing old records
 @param values records
 */
- (void)addOrUpdateItems:(id<JavaUtilList>)values;

/*!
 @brief Removing record by key
 @param key record key
 */
- (void)removeItemWithKey:(jlong)key;

/*!
 @brief Removing records by keys
 @param keys record keys
 */
- (void)removeItemsWithKeys:(IOSLongArray *)keys;

/*!
 @brief Loading item by key
 @param key record key
 @return result or null if not found
 */
- (IOSByteArray *)loadItemWithKey:(jlong)key;

/*!
 @brief Loading items by keys
 @param keys record keys
 @return all loaded items
 */
- (id<JavaUtilList>)loadItems:(IOSLongArray *)keys;

/*!
 @brief Loading all items from storage
 @return all items
 */
- (id<JavaUtilList>)loadAllItems;

/*!
 @brief Clearing storage
 */
- (void)clear;

@end

J2OBJC_EMPTY_STATIC_INIT(ARKeyValueStorage)

J2OBJC_TYPE_LITERAL_HEADER(ARKeyValueStorage)

#define ImActorRuntimeStorageKeyValueStorage ARKeyValueStorage

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeStorageKeyValueStorage")

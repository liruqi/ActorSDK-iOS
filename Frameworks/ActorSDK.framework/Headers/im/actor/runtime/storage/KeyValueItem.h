//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/storage/KeyValueItem.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeStorageKeyValueItem")
#ifdef RESTRICT_ImActorRuntimeStorageKeyValueItem
#define INCLUDE_ALL_ImActorRuntimeStorageKeyValueItem 0
#else
#define INCLUDE_ALL_ImActorRuntimeStorageKeyValueItem 1
#endif
#undef RESTRICT_ImActorRuntimeStorageKeyValueItem

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARKeyValueItem_) && (INCLUDE_ALL_ImActorRuntimeStorageKeyValueItem || defined(INCLUDE_ARKeyValueItem))
#define ARKeyValueItem_

@protocol ARKeyValueItem < NSObject, JavaObject >

- (jlong)getEngineId;

@end

J2OBJC_EMPTY_STATIC_INIT(ARKeyValueItem)

J2OBJC_TYPE_LITERAL_HEADER(ARKeyValueItem)

#define ImActorRuntimeStorageKeyValueItem ARKeyValueItem

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeStorageKeyValueItem")

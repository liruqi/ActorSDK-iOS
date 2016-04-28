//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-generic/src/main/java/im/actor/runtime/generic/mvvm/DisplayList.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeGenericMvvmDisplayList")
#ifdef RESTRICT_ImActorRuntimeGenericMvvmDisplayList
#define INCLUDE_ALL_ImActorRuntimeGenericMvvmDisplayList 0
#else
#define INCLUDE_ALL_ImActorRuntimeGenericMvvmDisplayList 1
#endif
#undef RESTRICT_ImActorRuntimeGenericMvvmDisplayList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDisplayList_) && (INCLUDE_ALL_ImActorRuntimeGenericMvvmDisplayList || defined(INCLUDE_ARDisplayList))
#define ARDisplayList_

@class ARDisplayList_OperationMode;
@protocol ARDisplayList_AndroidChangeListener;
@protocol ARDisplayList_AppleChangeListener;
@protocol ARDisplayList_Listener;
@protocol ARListProcessor;
@protocol ARModification;
@protocol JavaLangRunnable;
@protocol JavaUtilList;

@interface ARDisplayList : NSObject

#pragma mark Public

- (instancetype)initWithMode:(ARDisplayList_OperationMode *)operationMode;

- (instancetype)initWithMode:(ARDisplayList_OperationMode *)operationMode
                  withValues:(id<JavaUtilList>)defaultValues;

- (void)addAndroidListener:(id<ARDisplayList_AndroidChangeListener>)listener;

- (void)addAppleListener:(id<ARDisplayList_AppleChangeListener>)listener;

- (void)addListener:(id<ARDisplayList_Listener>)listener;

- (void)editList:(id<ARModification>)mod;

- (void)editList:(id<ARModification>)mod
withLoadMoreFlag:(jboolean)isLoadMore;

- (void)editList:(id<ARModification>)mod
  withCompletion:(id<JavaLangRunnable>)executeAfter;

- (void)editList:(id<ARModification>)mod
  withCompletion:(id<JavaLangRunnable>)executeAfter
withLoadMoreFlag:(jboolean)isLoadMore;

- (void)forcePreprocessing;

- (id)itemWithIndex:(jint)index;

- (id<ARListProcessor>)getListProcessor;

- (jint)positionWithFind:(id)find;

- (id)getProcessedList;

- (jint)size;

- (void)removeAndroidListener:(id<ARDisplayList_AndroidChangeListener>)listener;

- (void)removeAppleListener:(id<ARDisplayList_AppleChangeListener>)listener;

- (void)removeListener:(id<ARDisplayList_Listener>)listener;

- (void)setListProcessor:(id<ARListProcessor>)listProcessor;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDisplayList)

FOUNDATION_EXPORT void ARDisplayList_initWithMode_(ARDisplayList *self, ARDisplayList_OperationMode *operationMode);

FOUNDATION_EXPORT ARDisplayList *new_ARDisplayList_initWithMode_(ARDisplayList_OperationMode *operationMode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDisplayList *create_ARDisplayList_initWithMode_(ARDisplayList_OperationMode *operationMode);

FOUNDATION_EXPORT void ARDisplayList_initWithMode_withValues_(ARDisplayList *self, ARDisplayList_OperationMode *operationMode, id<JavaUtilList> defaultValues);

FOUNDATION_EXPORT ARDisplayList *new_ARDisplayList_initWithMode_withValues_(ARDisplayList_OperationMode *operationMode, id<JavaUtilList> defaultValues) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDisplayList *create_ARDisplayList_initWithMode_withValues_(ARDisplayList_OperationMode *operationMode, id<JavaUtilList> defaultValues);

J2OBJC_TYPE_LITERAL_HEADER(ARDisplayList)

@compatibility_alias ImActorRuntimeGenericMvvmDisplayList ARDisplayList;

#endif

#if !defined (ARDisplayList_Listener_) && (INCLUDE_ALL_ImActorRuntimeGenericMvvmDisplayList || defined(INCLUDE_ARDisplayList_Listener))
#define ARDisplayList_Listener_

@protocol ARDisplayList_Listener < NSObject, JavaObject >

- (void)onCollectionChanged;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDisplayList_Listener)

J2OBJC_TYPE_LITERAL_HEADER(ARDisplayList_Listener)

#endif

#if !defined (ARDisplayList_AndroidChangeListener_) && (INCLUDE_ALL_ImActorRuntimeGenericMvvmDisplayList || defined(INCLUDE_ARDisplayList_AndroidChangeListener))
#define ARDisplayList_AndroidChangeListener_

@class ARAndroidListUpdate;

@protocol ARDisplayList_AndroidChangeListener < NSObject, JavaObject >

- (void)onCollectionChangedWithChanges:(ARAndroidListUpdate *)modification;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDisplayList_AndroidChangeListener)

J2OBJC_TYPE_LITERAL_HEADER(ARDisplayList_AndroidChangeListener)

#endif

#if !defined (ARDisplayList_AppleChangeListener_) && (INCLUDE_ALL_ImActorRuntimeGenericMvvmDisplayList || defined(INCLUDE_ARDisplayList_AppleChangeListener))
#define ARDisplayList_AppleChangeListener_

@class ARAppleListUpdate;

@protocol ARDisplayList_AppleChangeListener < NSObject, JavaObject >

- (void)onCollectionChangedWithChanges:(ARAppleListUpdate *)modification;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDisplayList_AppleChangeListener)

J2OBJC_TYPE_LITERAL_HEADER(ARDisplayList_AppleChangeListener)

#endif

#if !defined (ARDisplayList_OperationMode_) && (INCLUDE_ALL_ImActorRuntimeGenericMvvmDisplayList || defined(INCLUDE_ARDisplayList_OperationMode))
#define ARDisplayList_OperationMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARDisplayList_OperationMode_Enum) {
  ARDisplayList_OperationMode_Enum_GENERAL = 0,
  ARDisplayList_OperationMode_Enum_ANDROID = 1,
  ARDisplayList_OperationMode_Enum_IOS = 2,
};

@interface ARDisplayList_OperationMode : JavaLangEnum < NSCopying >

+ (ARDisplayList_OperationMode *)GENERAL;

+ (ARDisplayList_OperationMode *)ANDROID;

+ (ARDisplayList_OperationMode *)IOS;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARDisplayList_OperationMode *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARDisplayList_OperationMode_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARDisplayList_OperationMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARDisplayList_OperationMode *ARDisplayList_OperationMode_values_[];

inline ARDisplayList_OperationMode *ARDisplayList_OperationMode_get_GENERAL();
J2OBJC_ENUM_CONSTANT(ARDisplayList_OperationMode, GENERAL)

inline ARDisplayList_OperationMode *ARDisplayList_OperationMode_get_ANDROID();
J2OBJC_ENUM_CONSTANT(ARDisplayList_OperationMode, ANDROID)

inline ARDisplayList_OperationMode *ARDisplayList_OperationMode_get_IOS();
J2OBJC_ENUM_CONSTANT(ARDisplayList_OperationMode, IOS)

FOUNDATION_EXPORT IOSObjectArray *ARDisplayList_OperationMode_values();

FOUNDATION_EXPORT ARDisplayList_OperationMode *ARDisplayList_OperationMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARDisplayList_OperationMode *ARDisplayList_OperationMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARDisplayList_OperationMode)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeGenericMvvmDisplayList")

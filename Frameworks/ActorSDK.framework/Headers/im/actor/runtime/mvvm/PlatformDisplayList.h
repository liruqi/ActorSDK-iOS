//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/mvvm/PlatformDisplayList.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeMvvmPlatformDisplayList")
#ifdef RESTRICT_ImActorRuntimeMvvmPlatformDisplayList
#define INCLUDE_ALL_ImActorRuntimeMvvmPlatformDisplayList 0
#else
#define INCLUDE_ALL_ImActorRuntimeMvvmPlatformDisplayList 1
#endif
#undef RESTRICT_ImActorRuntimeMvvmPlatformDisplayList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARPlatformDisplayList_) && (INCLUDE_ALL_ImActorRuntimeMvvmPlatformDisplayList || defined(INCLUDE_ARPlatformDisplayList))
#define ARPlatformDisplayList_

@protocol ARPlatformDisplayList < NSObject, JavaObject >

- (void)initCenterWithLong:(jlong)rid OBJC_METHOD_FAMILY_NONE;

- (void)initTop OBJC_METHOD_FAMILY_NONE;

- (void)initEmpty OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ARPlatformDisplayList)

J2OBJC_TYPE_LITERAL_HEADER(ARPlatformDisplayList)

#define ImActorRuntimeMvvmPlatformDisplayList ARPlatformDisplayList

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeMvvmPlatformDisplayList")

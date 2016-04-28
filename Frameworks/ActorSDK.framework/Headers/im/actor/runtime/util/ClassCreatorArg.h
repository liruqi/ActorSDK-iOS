//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/util/ClassCreatorArg.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeUtilClassCreatorArg")
#ifdef RESTRICT_ImActorRuntimeUtilClassCreatorArg
#define INCLUDE_ALL_ImActorRuntimeUtilClassCreatorArg 0
#else
#define INCLUDE_ALL_ImActorRuntimeUtilClassCreatorArg 1
#endif
#undef RESTRICT_ImActorRuntimeUtilClassCreatorArg

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeUtilClassCreatorArg_) && (INCLUDE_ALL_ImActorRuntimeUtilClassCreatorArg || defined(INCLUDE_ImActorRuntimeUtilClassCreatorArg))
#define ImActorRuntimeUtilClassCreatorArg_

/*!
 @brief Interface for creating objects with one argument without reflection
 */
@protocol ImActorRuntimeUtilClassCreatorArg < NSObject, JavaObject >

/*!
 @brief Create object instance
 @param arg constructor argument
 @return creted object
 */
- (id)newInstanceWithId:(id)arg OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeUtilClassCreatorArg)

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeUtilClassCreatorArg)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeUtilClassCreatorArg")

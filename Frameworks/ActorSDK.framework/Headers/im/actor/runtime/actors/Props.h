//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/actors/Props.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeActorsProps")
#ifdef RESTRICT_ImActorRuntimeActorsProps
#define INCLUDE_ALL_ImActorRuntimeActorsProps 0
#else
#define INCLUDE_ALL_ImActorRuntimeActorsProps 1
#endif
#undef RESTRICT_ImActorRuntimeActorsProps

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARProps_) && (INCLUDE_ALL_ImActorRuntimeActorsProps || defined(INCLUDE_ARProps))
#define ARProps_

@class ARActor;
@protocol ARActorCreator;
@protocol ARActorSupervisor;

/*!
 @brief <p>Props is a configuration class to specify options for the creation of actors, think of it as an immutable and
 thus freely shareable recipe for creating an actor including associated dispatcher information.
 </p>
 For more information you may read about <a href="http://doc.akka.io/docs/akka/2.3.5/java/untyped-actors.html">Akka Props</a>.
 */
@interface ARProps : NSObject

#pragma mark Public

/*!
 @brief Changing dispatcher
 @param dispatcher dispatcher id
 @return updated props
 */
- (ARProps *)changeDispatcherWithNSString:(NSString *)dispatcher;

/*!
 @brief Changing supervisor of an Actor
 @param supervisor supervisor of actor
 @return updated props
 */
- (ARProps *)changeSupervisorWithARActorSupervisor:(id<ARActorSupervisor>)supervisor;

/*!
 @brief Creating actor from Props
 @return Actor
 @throws Exception
 */
- (ARActor *)create;

/*!
 @brief Create props from Actor creator
 @param creator Actor creator class
 @return Props object
 */
+ (ARProps *)createWithARActorCreator:(id<ARActorCreator>)creator;

/*!
 @brief Getting dispatcher id if available
 @return the dispatcher
 */
- (NSString *)getDispatcher;

/*!
 @brief Getting supervisor if available
 @return the supervisor
 */
- (id<ARActorSupervisor>)getSupervisor;

@end

J2OBJC_EMPTY_STATIC_INIT(ARProps)

FOUNDATION_EXPORT ARProps *ARProps_createWithARActorCreator_(id<ARActorCreator> creator);

J2OBJC_TYPE_LITERAL_HEADER(ARProps)

@compatibility_alias ImActorRuntimeActorsProps ARProps;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeActorsProps")

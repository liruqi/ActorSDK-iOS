//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/viewmodel/Command.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreViewmodelCommand")
#ifdef RESTRICT_ImActorCoreViewmodelCommand
#define INCLUDE_ALL_ImActorCoreViewmodelCommand 0
#else
#define INCLUDE_ALL_ImActorCoreViewmodelCommand 1
#endif
#undef RESTRICT_ImActorCoreViewmodelCommand

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACCommand_) && (INCLUDE_ALL_ImActorCoreViewmodelCommand || defined(INCLUDE_ACCommand))
#define ACCommand_

@protocol ACCommandCallback;

@protocol ACCommand < NSObject, JavaObject >

- (void)startWithCallback:(id<ACCommandCallback>)callback;

@end

J2OBJC_EMPTY_STATIC_INIT(ACCommand)

J2OBJC_TYPE_LITERAL_HEADER(ACCommand)

#define ImActorCoreViewmodelCommand ACCommand

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreViewmodelCommand")

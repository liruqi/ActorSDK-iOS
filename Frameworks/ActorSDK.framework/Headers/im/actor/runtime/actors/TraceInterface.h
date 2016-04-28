//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/actors/TraceInterface.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeActorsTraceInterface")
#ifdef RESTRICT_ImActorRuntimeActorsTraceInterface
#define INCLUDE_ALL_ImActorRuntimeActorsTraceInterface 0
#else
#define INCLUDE_ALL_ImActorRuntimeActorsTraceInterface 1
#endif
#undef RESTRICT_ImActorRuntimeActorsTraceInterface

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARTraceInterface_) && (INCLUDE_ALL_ImActorRuntimeActorsTraceInterface || defined(INCLUDE_ARTraceInterface))
#define ARTraceInterface_

@class ARActor;
@class ARActorRef;
@class ImActorRuntimeActorsDispatchEnvelope;
@class JavaLangException;

@protocol ARTraceInterface < NSObject, JavaObject >

- (void)onEnvelopeDeliveredWithImActorRuntimeActorsDispatchEnvelope:(ImActorRuntimeActorsDispatchEnvelope *)envelope;

- (void)onEnvelopeProcessedWithImActorRuntimeActorsDispatchEnvelope:(ImActorRuntimeActorsDispatchEnvelope *)envelope
                                                           withLong:(jlong)duration;

- (void)onDropWithARActorRef:(ARActorRef *)sender
                      withId:(id)message
                 withARActor:(ARActor *)actor;

- (void)onDeadLetterWithARActorRef:(ARActorRef *)receiver
                            withId:(id)message;

- (void)onActorDieWithARActorRef:(ARActorRef *)ref
withImActorRuntimeActorsDispatchEnvelope:(ImActorRuntimeActorsDispatchEnvelope *)envelope
           withJavaLangException:(JavaLangException *)e;

- (void)onMessageSentWithARActorRef:(ARActorRef *)ref
                             withId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ARTraceInterface)

J2OBJC_TYPE_LITERAL_HEADER(ARTraceInterface)

#define ImActorRuntimeActorsTraceInterface ARTraceInterface

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeActorsTraceInterface")

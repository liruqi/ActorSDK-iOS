//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/RandomRuntime.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeRandomRuntime")
#ifdef RESTRICT_ImActorRuntimeRandomRuntime
#define INCLUDE_ALL_ImActorRuntimeRandomRuntime 0
#else
#define INCLUDE_ALL_ImActorRuntimeRandomRuntime 1
#endif
#undef RESTRICT_ImActorRuntimeRandomRuntime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRandomRuntime_) && (INCLUDE_ALL_ImActorRuntimeRandomRuntime || defined(INCLUDE_ARRandomRuntime))
#define ARRandomRuntime_

@class IOSByteArray;
@class JavaMathBigInteger;

@protocol ARRandomRuntime < NSObject, JavaObject >

- (IOSByteArray *)randomBytesWithInt:(jint)length;

- (jint)randomIntWithInt:(jint)maxValue;

- (void)nextBytesWithByteArray:(IOSByteArray *)data;

- (jlong)randomLong;

- (JavaMathBigInteger *)generateBigIntegerWithInt:(jint)numBits;

- (JavaMathBigInteger *)generateBigIntegerWithInt:(jint)numBits
                                          withInt:(jint)certanity;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRandomRuntime)

J2OBJC_TYPE_LITERAL_HEADER(ARRandomRuntime)

#define ImActorRuntimeRandomRuntime ARRandomRuntime

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeRandomRuntime")

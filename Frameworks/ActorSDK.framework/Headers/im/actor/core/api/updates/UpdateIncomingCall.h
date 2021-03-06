//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateIncomingCall.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateIncomingCall")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateIncomingCall
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateIncomingCall 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateIncomingCall 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateIncomingCall

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateIncomingCall_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateIncomingCall || defined(INCLUDE_ARUpdateIncomingCall))
#define ARUpdateIncomingCall_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class JavaLangInteger;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateIncomingCall : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)callId
         withJavaLangInteger:(JavaLangInteger * __nullable)attemptIndex;

+ (ARUpdateIncomingCall *)fromBytesWithByteArray:(IOSByteArray *)data;

- (JavaLangInteger * __nullable)getAttemptIndex;

- (jlong)getCallId;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateIncomingCall)

inline jint ARUpdateIncomingCall_get_HEADER();
#define ARUpdateIncomingCall_HEADER 52
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateIncomingCall, HEADER, jint)

FOUNDATION_EXPORT ARUpdateIncomingCall *ARUpdateIncomingCall_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateIncomingCall_initWithLong_withJavaLangInteger_(ARUpdateIncomingCall *self, jlong callId, JavaLangInteger *attemptIndex);

FOUNDATION_EXPORT ARUpdateIncomingCall *new_ARUpdateIncomingCall_initWithLong_withJavaLangInteger_(jlong callId, JavaLangInteger *attemptIndex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateIncomingCall *create_ARUpdateIncomingCall_initWithLong_withJavaLangInteger_(jlong callId, JavaLangInteger *attemptIndex);

FOUNDATION_EXPORT void ARUpdateIncomingCall_init(ARUpdateIncomingCall *self);

FOUNDATION_EXPORT ARUpdateIncomingCall *new_ARUpdateIncomingCall_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateIncomingCall *create_ARUpdateIncomingCall_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateIncomingCall)

@compatibility_alias ImActorCoreApiUpdatesUpdateIncomingCall ARUpdateIncomingCall;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateIncomingCall")

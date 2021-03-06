//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/mtp/MTProto.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkMtpMTProto")
#ifdef RESTRICT_ImActorCoreNetworkMtpMTProto
#define INCLUDE_ALL_ImActorCoreNetworkMtpMTProto 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkMtpMTProto 1
#endif
#undef RESTRICT_ImActorCoreNetworkMtpMTProto

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACMTProto_) && (INCLUDE_ALL_ImActorCoreNetworkMtpMTProto || defined(INCLUDE_ACMTProto))
#define ACMTProto_

@class ACEndpoints;
@class ACNetworkState;
@class ACProtoStruct;
@class IOSByteArray;
@protocol ACMTProtoCallback;

@interface ACMTProto : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)authId
               withByteArray:(IOSByteArray *)authKey
                    withLong:(jlong)sessionId
             withACEndpoints:(ACEndpoints *)endpoints
       withACMTProtoCallback:(id<ACMTProtoCallback>)callback
                 withBoolean:(jboolean)isEnableLog
                withNSString:(NSString *)basePath
                     withInt:(jint)minDelay
                     withInt:(jint)maxDelay
                     withInt:(jint)maxFailureCount;

- (void)cancelRpcWithLong:(jlong)mtId;

- (void)forceNetworkCheck;

- (NSString *)getActorPath;

- (jlong)getAuthId;

- (IOSByteArray *)getAuthKey;

- (id<ACMTProtoCallback>)getCallback;

- (ACEndpoints *)getEndpoints;

- (jint)getMaxDelay;

- (jint)getMaxFailureCount;

- (jint)getMinDelay;

- (jlong)getSessionId;

- (jboolean)isEnableLog;

- (void)onNetworkChangedWithACNetworkState:(ACNetworkState *)state;

- (jlong)sendRpcMessageWithACProtoStruct:(ACProtoStruct *)protoStruct;

- (void)stopProto;

@end

J2OBJC_EMPTY_STATIC_INIT(ACMTProto)

FOUNDATION_EXPORT void ACMTProto_initWithLong_withByteArray_withLong_withACEndpoints_withACMTProtoCallback_withBoolean_withNSString_withInt_withInt_withInt_(ACMTProto *self, jlong authId, IOSByteArray *authKey, jlong sessionId, ACEndpoints *endpoints, id<ACMTProtoCallback> callback, jboolean isEnableLog, NSString *basePath, jint minDelay, jint maxDelay, jint maxFailureCount);

FOUNDATION_EXPORT ACMTProto *new_ACMTProto_initWithLong_withByteArray_withLong_withACEndpoints_withACMTProtoCallback_withBoolean_withNSString_withInt_withInt_withInt_(jlong authId, IOSByteArray *authKey, jlong sessionId, ACEndpoints *endpoints, id<ACMTProtoCallback> callback, jboolean isEnableLog, NSString *basePath, jint minDelay, jint maxDelay, jint maxFailureCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACMTProto *create_ACMTProto_initWithLong_withByteArray_withLong_withACEndpoints_withACMTProtoCallback_withBoolean_withNSString_withInt_withInt_withInt_(jlong authId, IOSByteArray *authKey, jlong sessionId, ACEndpoints *endpoints, id<ACMTProtoCallback> callback, jboolean isEnableLog, NSString *basePath, jint minDelay, jint maxDelay, jint maxFailureCount);

J2OBJC_TYPE_LITERAL_HEADER(ACMTProto)

@compatibility_alias ImActorCoreNetworkMtpMTProto ACMTProto;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkMtpMTProto")

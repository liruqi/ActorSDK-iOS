//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/mtp/entity/ResponseStartAuth.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkMtpEntityResponseStartAuth")
#ifdef RESTRICT_ImActorCoreNetworkMtpEntityResponseStartAuth
#define INCLUDE_ALL_ImActorCoreNetworkMtpEntityResponseStartAuth 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkMtpEntityResponseStartAuth 1
#endif
#undef RESTRICT_ImActorCoreNetworkMtpEntityResponseStartAuth

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACResponseStartAuth_) && (INCLUDE_ALL_ImActorCoreNetworkMtpEntityResponseStartAuth || defined(INCLUDE_ACResponseStartAuth))
#define ACResponseStartAuth_

#define RESTRICT_ImActorCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/actor/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;
@class IOSByteArray;
@class IOSLongArray;

@interface ACResponseStartAuth : ACProtoStruct

+ (jint)HEADER;

#pragma mark Public

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (instancetype)initWithLong:(jlong)randomId
               withLongArray:(IOSLongArray *)availableKeys
               withByteArray:(IOSByteArray *)serverNonce;

- (IOSLongArray *)getAvailableKeys;

- (jlong)getRandomId;

- (IOSByteArray *)getServerNonce;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACResponseStartAuth)

inline jint ACResponseStartAuth_get_HEADER();
#define ACResponseStartAuth_HEADER 225
J2OBJC_STATIC_FIELD_CONSTANT(ACResponseStartAuth, HEADER, jint)

FOUNDATION_EXPORT void ACResponseStartAuth_initWithARDataInput_(ACResponseStartAuth *self, ARDataInput *stream);

FOUNDATION_EXPORT ACResponseStartAuth *new_ACResponseStartAuth_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACResponseStartAuth *create_ACResponseStartAuth_initWithARDataInput_(ARDataInput *stream);

FOUNDATION_EXPORT void ACResponseStartAuth_initWithLong_withLongArray_withByteArray_(ACResponseStartAuth *self, jlong randomId, IOSLongArray *availableKeys, IOSByteArray *serverNonce);

FOUNDATION_EXPORT ACResponseStartAuth *new_ACResponseStartAuth_initWithLong_withLongArray_withByteArray_(jlong randomId, IOSLongArray *availableKeys, IOSByteArray *serverNonce) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACResponseStartAuth *create_ACResponseStartAuth_initWithLong_withLongArray_withByteArray_(jlong randomId, IOSLongArray *availableKeys, IOSByteArray *serverNonce);

J2OBJC_TYPE_LITERAL_HEADER(ACResponseStartAuth)

@compatibility_alias ImActorCoreNetworkMtpEntityResponseStartAuth ACResponseStartAuth;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkMtpEntityResponseStartAuth")

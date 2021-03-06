//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/mtp/entity/MTPush.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkMtpEntityMTPush")
#ifdef RESTRICT_ImActorCoreNetworkMtpEntityMTPush
#define INCLUDE_ALL_ImActorCoreNetworkMtpEntityMTPush 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkMtpEntityMTPush 1
#endif
#undef RESTRICT_ImActorCoreNetworkMtpEntityMTPush

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACMTPush_) && (INCLUDE_ALL_ImActorCoreNetworkMtpEntityMTPush || defined(INCLUDE_ACMTPush))
#define ACMTPush_

#define RESTRICT_ImActorCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/actor/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;
@class IOSByteArray;

@interface ACMTPush : ACProtoStruct

+ (jbyte)HEADER;

#pragma mark Public

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (IOSByteArray *)getPayload;

- (NSString *)description;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACMTPush)

inline jbyte ACMTPush_get_HEADER();
#define ACMTPush_HEADER 5
J2OBJC_STATIC_FIELD_CONSTANT(ACMTPush, HEADER, jbyte)

FOUNDATION_EXPORT void ACMTPush_initWithARDataInput_(ACMTPush *self, ARDataInput *stream);

FOUNDATION_EXPORT ACMTPush *new_ACMTPush_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACMTPush *create_ACMTPush_initWithARDataInput_(ARDataInput *stream);

J2OBJC_TYPE_LITERAL_HEADER(ACMTPush)

@compatibility_alias ImActorCoreNetworkMtpEntityMTPush ACMTPush;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkMtpEntityMTPush")

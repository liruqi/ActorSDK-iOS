//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/mtp/entity/AuthIdInvalid.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkMtpEntityAuthIdInvalid")
#ifdef RESTRICT_ImActorCoreNetworkMtpEntityAuthIdInvalid
#define INCLUDE_ALL_ImActorCoreNetworkMtpEntityAuthIdInvalid 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkMtpEntityAuthIdInvalid 1
#endif
#undef RESTRICT_ImActorCoreNetworkMtpEntityAuthIdInvalid

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACAuthIdInvalid_) && (INCLUDE_ALL_ImActorCoreNetworkMtpEntityAuthIdInvalid || defined(INCLUDE_ACAuthIdInvalid))
#define ACAuthIdInvalid_

#define RESTRICT_ImActorCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/actor/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;

@interface ACAuthIdInvalid : ACProtoStruct

+ (jbyte)HEADER;

#pragma mark Public

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACAuthIdInvalid)

inline jbyte ACAuthIdInvalid_get_HEADER();
#define ACAuthIdInvalid_HEADER 17
J2OBJC_STATIC_FIELD_CONSTANT(ACAuthIdInvalid, HEADER, jbyte)

FOUNDATION_EXPORT void ACAuthIdInvalid_initWithARDataInput_(ACAuthIdInvalid *self, ARDataInput *stream);

FOUNDATION_EXPORT ACAuthIdInvalid *new_ACAuthIdInvalid_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACAuthIdInvalid *create_ACAuthIdInvalid_initWithARDataInput_(ARDataInput *stream);

J2OBJC_TYPE_LITERAL_HEADER(ACAuthIdInvalid)

@compatibility_alias ImActorCoreNetworkMtpEntityAuthIdInvalid ACAuthIdInvalid;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkMtpEntityAuthIdInvalid")

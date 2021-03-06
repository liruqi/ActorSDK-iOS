//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/mtp/entity/Container.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkMtpEntityContainer")
#ifdef RESTRICT_ImActorCoreNetworkMtpEntityContainer
#define INCLUDE_ALL_ImActorCoreNetworkMtpEntityContainer 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkMtpEntityContainer 1
#endif
#undef RESTRICT_ImActorCoreNetworkMtpEntityContainer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACContainer_) && (INCLUDE_ALL_ImActorCoreNetworkMtpEntityContainer || defined(INCLUDE_ACContainer))
#define ACContainer_

#define RESTRICT_ImActorCoreNetworkMtpEntityProtoStruct 1
#define INCLUDE_ACProtoStruct 1
#include "../../../../../../im/actor/core/network/mtp/entity/ProtoStruct.h"

@class ARDataInput;
@class ARDataOutput;
@class IOSObjectArray;

@interface ACContainer : ACProtoStruct

+ (jbyte)HEADER;

#pragma mark Public

- (instancetype)initWithARDataInput:(ARDataInput *)stream;

- (instancetype)initWithACProtoMessageArray:(IOSObjectArray *)messages;

- (IOSObjectArray *)getMessages;

- (NSString *)description;

#pragma mark Protected

- (jbyte)getHeader;

- (void)readBodyWithARDataInput:(ARDataInput *)bs;

- (void)writeBodyWithARDataOutput:(ARDataOutput *)bs;

@end

J2OBJC_EMPTY_STATIC_INIT(ACContainer)

inline jbyte ACContainer_get_HEADER();
#define ACContainer_HEADER 10
J2OBJC_STATIC_FIELD_CONSTANT(ACContainer, HEADER, jbyte)

FOUNDATION_EXPORT void ACContainer_initWithARDataInput_(ACContainer *self, ARDataInput *stream);

FOUNDATION_EXPORT ACContainer *new_ACContainer_initWithARDataInput_(ARDataInput *stream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACContainer *create_ACContainer_initWithARDataInput_(ARDataInput *stream);

FOUNDATION_EXPORT void ACContainer_initWithACProtoMessageArray_(ACContainer *self, IOSObjectArray *messages);

FOUNDATION_EXPORT ACContainer *new_ACContainer_initWithACProtoMessageArray_(IOSObjectArray *messages) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACContainer *create_ACContainer_initWithACProtoMessageArray_(IOSObjectArray *messages);

J2OBJC_TYPE_LITERAL_HEADER(ACContainer)

@compatibility_alias ImActorCoreNetworkMtpEntityContainer ACContainer;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkMtpEntityContainer")

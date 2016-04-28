//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/PhoneBookEmail.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityPhoneBookEmail")
#ifdef RESTRICT_ImActorCoreEntityPhoneBookEmail
#define INCLUDE_ALL_ImActorCoreEntityPhoneBookEmail 0
#else
#define INCLUDE_ALL_ImActorCoreEntityPhoneBookEmail 1
#endif
#undef RESTRICT_ImActorCoreEntityPhoneBookEmail

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACPhoneBookEmail_) && (INCLUDE_ALL_ImActorCoreEntityPhoneBookEmail || defined(INCLUDE_ACPhoneBookEmail))
#define ACPhoneBookEmail_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/actor/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;

@interface ACPhoneBookEmail : ARBserObject
@property (readonly, nonatomic) jlong id_;
@property (readonly, copy, nonatomic, getter=getEmail) NSString *email;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)id_
                withNSString:(NSString *)email;

- (NSString *)getEmail;

- (jlong)getId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ACPhoneBookEmail)

FOUNDATION_EXPORT void ACPhoneBookEmail_initWithLong_withNSString_(ACPhoneBookEmail *self, jlong id_, NSString *email);

FOUNDATION_EXPORT ACPhoneBookEmail *new_ACPhoneBookEmail_initWithLong_withNSString_(jlong id_, NSString *email) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACPhoneBookEmail *create_ACPhoneBookEmail_initWithLong_withNSString_(jlong id_, NSString *email);

FOUNDATION_EXPORT void ACPhoneBookEmail_init(ACPhoneBookEmail *self);

FOUNDATION_EXPORT ACPhoneBookEmail *new_ACPhoneBookEmail_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACPhoneBookEmail *create_ACPhoneBookEmail_init();

J2OBJC_TYPE_LITERAL_HEADER(ACPhoneBookEmail)

@compatibility_alias ImActorCoreEntityPhoneBookEmail ACPhoneBookEmail;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityPhoneBookEmail")

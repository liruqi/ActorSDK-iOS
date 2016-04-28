//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiServiceExPhoneCall.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiServiceExPhoneCall")
#ifdef RESTRICT_ImActorCoreApiApiServiceExPhoneCall
#define INCLUDE_ALL_ImActorCoreApiApiServiceExPhoneCall 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiServiceExPhoneCall 1
#endif
#undef RESTRICT_ImActorCoreApiApiServiceExPhoneCall

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiServiceExPhoneCall_) && (INCLUDE_ALL_ImActorCoreApiApiServiceExPhoneCall || defined(INCLUDE_ARApiServiceExPhoneCall))
#define ARApiServiceExPhoneCall_

#define RESTRICT_ImActorCoreApiApiServiceEx 1
#define INCLUDE_ARApiServiceEx 1
#include "../../../../im/actor/core/api/ApiServiceEx.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiServiceExPhoneCall : ARApiServiceEx

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)duration;

- (jint)getDuration;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiServiceExPhoneCall)

FOUNDATION_EXPORT void ARApiServiceExPhoneCall_initWithInt_(ARApiServiceExPhoneCall *self, jint duration);

FOUNDATION_EXPORT ARApiServiceExPhoneCall *new_ARApiServiceExPhoneCall_initWithInt_(jint duration) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExPhoneCall *create_ARApiServiceExPhoneCall_initWithInt_(jint duration);

FOUNDATION_EXPORT void ARApiServiceExPhoneCall_init(ARApiServiceExPhoneCall *self);

FOUNDATION_EXPORT ARApiServiceExPhoneCall *new_ARApiServiceExPhoneCall_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExPhoneCall *create_ARApiServiceExPhoneCall_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiServiceExPhoneCall)

@compatibility_alias ImActorCoreApiApiServiceExPhoneCall ARApiServiceExPhoneCall;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiServiceExPhoneCall")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiPhoneToImport.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiPhoneToImport")
#ifdef RESTRICT_ImActorCoreApiApiPhoneToImport
#define INCLUDE_ALL_ImActorCoreApiApiPhoneToImport 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiPhoneToImport 1
#endif
#undef RESTRICT_ImActorCoreApiApiPhoneToImport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiPhoneToImport_) && (INCLUDE_ALL_ImActorCoreApiApiPhoneToImport || defined(INCLUDE_ARApiPhoneToImport))
#define ARApiPhoneToImport_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/actor/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiPhoneToImport : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)phoneNumber
                withNSString:(NSString * __nullable)name;

- (NSString * __nullable)getName;

- (jlong)getPhoneNumber;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiPhoneToImport)

FOUNDATION_EXPORT void ARApiPhoneToImport_initWithLong_withNSString_(ARApiPhoneToImport *self, jlong phoneNumber, NSString *name);

FOUNDATION_EXPORT ARApiPhoneToImport *new_ARApiPhoneToImport_initWithLong_withNSString_(jlong phoneNumber, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiPhoneToImport *create_ARApiPhoneToImport_initWithLong_withNSString_(jlong phoneNumber, NSString *name);

FOUNDATION_EXPORT void ARApiPhoneToImport_init(ARApiPhoneToImport *self);

FOUNDATION_EXPORT ARApiPhoneToImport *new_ARApiPhoneToImport_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiPhoneToImport *create_ARApiPhoneToImport_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiPhoneToImport)

@compatibility_alias ImActorCoreApiApiPhoneToImport ARApiPhoneToImport;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiPhoneToImport")

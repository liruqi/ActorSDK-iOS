//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/markdown/MDCode.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeMarkdownMDCode")
#ifdef RESTRICT_ImActorRuntimeMarkdownMDCode
#define INCLUDE_ALL_ImActorRuntimeMarkdownMDCode 0
#else
#define INCLUDE_ALL_ImActorRuntimeMarkdownMDCode 1
#endif
#undef RESTRICT_ImActorRuntimeMarkdownMDCode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARMDCode_) && (INCLUDE_ALL_ImActorRuntimeMarkdownMDCode || defined(INCLUDE_ARMDCode))
#define ARMDCode_

@interface ARMDCode : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)code;

- (NSString *)getCode;

@end

J2OBJC_EMPTY_STATIC_INIT(ARMDCode)

FOUNDATION_EXPORT void ARMDCode_initWithNSString_(ARMDCode *self, NSString *code);

FOUNDATION_EXPORT ARMDCode *new_ARMDCode_initWithNSString_(NSString *code) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARMDCode *create_ARMDCode_initWithNSString_(NSString *code);

J2OBJC_TYPE_LITERAL_HEADER(ARMDCode)

@compatibility_alias ImActorRuntimeMarkdownMDCode ARMDCode;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeMarkdownMDCode")

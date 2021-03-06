//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiTextModernAttach.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiTextModernAttach")
#ifdef RESTRICT_ImActorCoreApiApiTextModernAttach
#define INCLUDE_ALL_ImActorCoreApiApiTextModernAttach 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiTextModernAttach 1
#endif
#undef RESTRICT_ImActorCoreApiApiTextModernAttach

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiTextModernAttach_) && (INCLUDE_ALL_ImActorCoreApiApiTextModernAttach || defined(INCLUDE_ARApiTextModernAttach))
#define ARApiTextModernAttach_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/actor/runtime/bser/BserObject.h"

@class ARApiImageLocation;
@class ARApiParagraphStyle;
@class ARBserValues;
@class ARBserWriter;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiTextModernAttach : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nullable)title
                    withNSString:(NSString * __nullable)titleUrl
          withARApiImageLocation:(ARApiImageLocation * __nullable)titleIcon
                    withNSString:(NSString * __nullable)text
         withARApiParagraphStyle:(ARApiParagraphStyle * __nullable)style
                withJavaUtilList:(id<JavaUtilList> __nonnull)fields;

- (id<JavaUtilList> __nonnull)getFields;

- (ARApiParagraphStyle * __nullable)getStyle;

- (NSString * __nullable)getText;

- (NSString * __nullable)getTitle;

- (ARApiImageLocation * __nullable)getTitleIcon;

- (NSString * __nullable)getTitleUrl;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiTextModernAttach)

FOUNDATION_EXPORT void ARApiTextModernAttach_initWithNSString_withNSString_withARApiImageLocation_withNSString_withARApiParagraphStyle_withJavaUtilList_(ARApiTextModernAttach *self, NSString *title, NSString *titleUrl, ARApiImageLocation *titleIcon, NSString *text, ARApiParagraphStyle *style, id<JavaUtilList> fields);

FOUNDATION_EXPORT ARApiTextModernAttach *new_ARApiTextModernAttach_initWithNSString_withNSString_withARApiImageLocation_withNSString_withARApiParagraphStyle_withJavaUtilList_(NSString *title, NSString *titleUrl, ARApiImageLocation *titleIcon, NSString *text, ARApiParagraphStyle *style, id<JavaUtilList> fields) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiTextModernAttach *create_ARApiTextModernAttach_initWithNSString_withNSString_withARApiImageLocation_withNSString_withARApiParagraphStyle_withJavaUtilList_(NSString *title, NSString *titleUrl, ARApiImageLocation *titleIcon, NSString *text, ARApiParagraphStyle *style, id<JavaUtilList> fields);

FOUNDATION_EXPORT void ARApiTextModernAttach_init(ARApiTextModernAttach *self);

FOUNDATION_EXPORT ARApiTextModernAttach *new_ARApiTextModernAttach_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiTextModernAttach *create_ARApiTextModernAttach_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiTextModernAttach)

@compatibility_alias ImActorCoreApiApiTextModernAttach ARApiTextModernAttach;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiTextModernAttach")

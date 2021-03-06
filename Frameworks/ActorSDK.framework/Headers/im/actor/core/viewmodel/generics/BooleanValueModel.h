//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/viewmodel/generics/BooleanValueModel.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreViewmodelGenericsBooleanValueModel")
#ifdef RESTRICT_ImActorCoreViewmodelGenericsBooleanValueModel
#define INCLUDE_ALL_ImActorCoreViewmodelGenericsBooleanValueModel 0
#else
#define INCLUDE_ALL_ImActorCoreViewmodelGenericsBooleanValueModel 1
#endif
#undef RESTRICT_ImActorCoreViewmodelGenericsBooleanValueModel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACBooleanValueModel_) && (INCLUDE_ALL_ImActorCoreViewmodelGenericsBooleanValueModel || defined(INCLUDE_ACBooleanValueModel))
#define ACBooleanValueModel_

#define RESTRICT_ImActorRuntimeMvvmValueModel 1
#define INCLUDE_ARValueModel 1
#include "../../../../../im/actor/runtime/mvvm/ValueModel.h"

@class JavaLangBoolean;

@interface ACBooleanValueModel : ARValueModel

#pragma mark Public

/*!
 @brief Create ValueModel
 @param name         name of variable
 @param defaultValue default value
 */
- (instancetype)initWithNSString:(NSString *)name
             withJavaLangBoolean:(JavaLangBoolean *)defaultValue;

- (JavaLangBoolean *)get;

@end

J2OBJC_EMPTY_STATIC_INIT(ACBooleanValueModel)

FOUNDATION_EXPORT void ACBooleanValueModel_initWithNSString_withJavaLangBoolean_(ACBooleanValueModel *self, NSString *name, JavaLangBoolean *defaultValue);

FOUNDATION_EXPORT ACBooleanValueModel *new_ACBooleanValueModel_initWithNSString_withJavaLangBoolean_(NSString *name, JavaLangBoolean *defaultValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACBooleanValueModel *create_ACBooleanValueModel_initWithNSString_withJavaLangBoolean_(NSString *name, JavaLangBoolean *defaultValue);

J2OBJC_TYPE_LITERAL_HEADER(ACBooleanValueModel)

@compatibility_alias ImActorCoreViewmodelGenericsBooleanValueModel ACBooleanValueModel;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreViewmodelGenericsBooleanValueModel")

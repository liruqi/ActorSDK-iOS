//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/mvvm/ReorderListValue.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeMvvmReorderListValue")
#ifdef RESTRICT_ImActorRuntimeMvvmReorderListValue
#define INCLUDE_ALL_ImActorRuntimeMvvmReorderListValue 0
#else
#define INCLUDE_ALL_ImActorRuntimeMvvmReorderListValue 1
#endif
#undef RESTRICT_ImActorRuntimeMvvmReorderListValue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARReorderListValue_) && (INCLUDE_ALL_ImActorRuntimeMvvmReorderListValue || defined(INCLUDE_ARReorderListValue))
#define ARReorderListValue_

#define RESTRICT_ImActorRuntimeMvvmLockableValue 1
#define INCLUDE_ARLockableValue 1
#include "../../../../im/actor/runtime/mvvm/LockableValue.h"

@class ARValue;
@class JavaUtilArrayList;

@interface ARReorderListValue : ARLockableValue

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name
                     withARValue:(ARValue *)baseValue;

- (JavaUtilArrayList *)get;

- (void)moveWithInt:(jint)from
            withInt:(jint)to;

@end

J2OBJC_EMPTY_STATIC_INIT(ARReorderListValue)

FOUNDATION_EXPORT void ARReorderListValue_initWithNSString_withARValue_(ARReorderListValue *self, NSString *name, ARValue *baseValue);

FOUNDATION_EXPORT ARReorderListValue *new_ARReorderListValue_initWithNSString_withARValue_(NSString *name, ARValue *baseValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARReorderListValue *create_ARReorderListValue_initWithNSString_withARValue_(NSString *name, ARValue *baseValue);

J2OBJC_TYPE_LITERAL_HEADER(ARReorderListValue)

@compatibility_alias ImActorRuntimeMvvmReorderListValue ARReorderListValue;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeMvvmReorderListValue")

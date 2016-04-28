//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiColors.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiColors")
#ifdef RESTRICT_ImActorCoreApiApiColors
#define INCLUDE_ALL_ImActorCoreApiApiColors 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiColors 1
#endif
#undef RESTRICT_ImActorCoreApiApiColors

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiColors_) && (INCLUDE_ALL_ImActorCoreApiApiColors || defined(INCLUDE_ARApiColors))
#define ARApiColors_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARApiColors_Enum) {
  ARApiColors_Enum_RED = 0,
  ARApiColors_Enum_YELLOW = 1,
  ARApiColors_Enum_GREEN = 2,
  ARApiColors_Enum_UNSUPPORTED_VALUE = 3,
};

@interface ARApiColors : JavaLangEnum < NSCopying >

+ (ARApiColors *)RED;

+ (ARApiColors *)YELLOW;

+ (ARApiColors *)GREEN;

+ (ARApiColors *)UNSUPPORTED_VALUE;

#pragma mark Public

- (jint)getValue;

+ (ARApiColors *)parseWithInt:(jint)value;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARApiColors *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARApiColors_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARApiColors)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARApiColors *ARApiColors_values_[];

inline ARApiColors *ARApiColors_get_RED();
J2OBJC_ENUM_CONSTANT(ARApiColors, RED)

inline ARApiColors *ARApiColors_get_YELLOW();
J2OBJC_ENUM_CONSTANT(ARApiColors, YELLOW)

inline ARApiColors *ARApiColors_get_GREEN();
J2OBJC_ENUM_CONSTANT(ARApiColors, GREEN)

inline ARApiColors *ARApiColors_get_UNSUPPORTED_VALUE();
J2OBJC_ENUM_CONSTANT(ARApiColors, UNSUPPORTED_VALUE)

FOUNDATION_EXPORT ARApiColors *ARApiColors_parseWithInt_(jint value);

FOUNDATION_EXPORT IOSObjectArray *ARApiColors_values();

FOUNDATION_EXPORT ARApiColors *ARApiColors_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARApiColors *ARApiColors_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARApiColors)

@compatibility_alias ImActorCoreApiApiColors ARApiColors;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiColors")

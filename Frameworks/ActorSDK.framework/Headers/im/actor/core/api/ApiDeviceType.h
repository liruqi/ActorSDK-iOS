//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiDeviceType.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiDeviceType")
#ifdef RESTRICT_ImActorCoreApiApiDeviceType
#define INCLUDE_ALL_ImActorCoreApiApiDeviceType 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiDeviceType 1
#endif
#undef RESTRICT_ImActorCoreApiApiDeviceType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiDeviceType_) && (INCLUDE_ALL_ImActorCoreApiApiDeviceType || defined(INCLUDE_ARApiDeviceType))
#define ARApiDeviceType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARApiDeviceType_Enum) {
  ARApiDeviceType_Enum_GENERIC = 0,
  ARApiDeviceType_Enum_PC = 1,
  ARApiDeviceType_Enum_MOBILE = 2,
  ARApiDeviceType_Enum_TABLET = 3,
  ARApiDeviceType_Enum_WATCH = 4,
  ARApiDeviceType_Enum_MIRROR = 5,
  ARApiDeviceType_Enum_CAR = 6,
  ARApiDeviceType_Enum_TABLE = 7,
  ARApiDeviceType_Enum_UNSUPPORTED_VALUE = 8,
};

@interface ARApiDeviceType : JavaLangEnum < NSCopying >

+ (ARApiDeviceType *)GENERIC;

+ (ARApiDeviceType *)PC;

+ (ARApiDeviceType *)MOBILE;

+ (ARApiDeviceType *)TABLET;

+ (ARApiDeviceType *)WATCH;

+ (ARApiDeviceType *)MIRROR;

+ (ARApiDeviceType *)CAR;

+ (ARApiDeviceType *)TABLE;

+ (ARApiDeviceType *)UNSUPPORTED_VALUE;

#pragma mark Public

- (jint)getValue;

+ (ARApiDeviceType *)parseWithInt:(jint)value;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARApiDeviceType *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARApiDeviceType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARApiDeviceType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARApiDeviceType *ARApiDeviceType_values_[];

inline ARApiDeviceType *ARApiDeviceType_get_GENERIC();
J2OBJC_ENUM_CONSTANT(ARApiDeviceType, GENERIC)

inline ARApiDeviceType *ARApiDeviceType_get_PC();
J2OBJC_ENUM_CONSTANT(ARApiDeviceType, PC)

inline ARApiDeviceType *ARApiDeviceType_get_MOBILE();
J2OBJC_ENUM_CONSTANT(ARApiDeviceType, MOBILE)

inline ARApiDeviceType *ARApiDeviceType_get_TABLET();
J2OBJC_ENUM_CONSTANT(ARApiDeviceType, TABLET)

inline ARApiDeviceType *ARApiDeviceType_get_WATCH();
J2OBJC_ENUM_CONSTANT(ARApiDeviceType, WATCH)

inline ARApiDeviceType *ARApiDeviceType_get_MIRROR();
J2OBJC_ENUM_CONSTANT(ARApiDeviceType, MIRROR)

inline ARApiDeviceType *ARApiDeviceType_get_CAR();
J2OBJC_ENUM_CONSTANT(ARApiDeviceType, CAR)

inline ARApiDeviceType *ARApiDeviceType_get_TABLE();
J2OBJC_ENUM_CONSTANT(ARApiDeviceType, TABLE)

inline ARApiDeviceType *ARApiDeviceType_get_UNSUPPORTED_VALUE();
J2OBJC_ENUM_CONSTANT(ARApiDeviceType, UNSUPPORTED_VALUE)

FOUNDATION_EXPORT ARApiDeviceType *ARApiDeviceType_parseWithInt_(jint value);

FOUNDATION_EXPORT IOSObjectArray *ARApiDeviceType_values();

FOUNDATION_EXPORT ARApiDeviceType *ARApiDeviceType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARApiDeviceType *ARApiDeviceType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARApiDeviceType)

@compatibility_alias ImActorCoreApiApiDeviceType ARApiDeviceType;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiDeviceType")

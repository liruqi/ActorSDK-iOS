//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/PlatformType.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCorePlatformType")
#ifdef RESTRICT_ImActorCorePlatformType
#define INCLUDE_ALL_ImActorCorePlatformType 0
#else
#define INCLUDE_ALL_ImActorCorePlatformType 1
#endif
#undef RESTRICT_ImActorCorePlatformType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACPlatformType_) && (INCLUDE_ALL_ImActorCorePlatformType || defined(INCLUDE_ACPlatformType))
#define ACPlatformType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ACPlatformType_Enum) {
  ACPlatformType_Enum_GENERIC = 0,
  ACPlatformType_Enum_ANDROID = 1,
  ACPlatformType_Enum_IOS = 2,
  ACPlatformType_Enum_WEB = 3,
};

/*!
 @brief Application type
 */
@interface ACPlatformType : JavaLangEnum < NSCopying >

+ (ACPlatformType *)GENERIC;

+ (ACPlatformType *)ANDROID;

+ (ACPlatformType *)IOS;

+ (ACPlatformType *)WEB;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ACPlatformType *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ACPlatformType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ACPlatformType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ACPlatformType *ACPlatformType_values_[];

inline ACPlatformType *ACPlatformType_get_GENERIC();
J2OBJC_ENUM_CONSTANT(ACPlatformType, GENERIC)

inline ACPlatformType *ACPlatformType_get_ANDROID();
J2OBJC_ENUM_CONSTANT(ACPlatformType, ANDROID)

inline ACPlatformType *ACPlatformType_get_IOS();
J2OBJC_ENUM_CONSTANT(ACPlatformType, IOS)

inline ACPlatformType *ACPlatformType_get_WEB();
J2OBJC_ENUM_CONSTANT(ACPlatformType, WEB)

FOUNDATION_EXPORT IOSObjectArray *ACPlatformType_values();

FOUNDATION_EXPORT ACPlatformType *ACPlatformType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ACPlatformType *ACPlatformType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ACPlatformType)

@compatibility_alias ImActorCorePlatformType ACPlatformType;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCorePlatformType")

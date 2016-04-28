//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/ApiPeerType.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiApiPeerType")
#ifdef RESTRICT_ImActorCoreApiApiPeerType
#define INCLUDE_ALL_ImActorCoreApiApiPeerType 0
#else
#define INCLUDE_ALL_ImActorCoreApiApiPeerType 1
#endif
#undef RESTRICT_ImActorCoreApiApiPeerType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiPeerType_) && (INCLUDE_ALL_ImActorCoreApiApiPeerType || defined(INCLUDE_ARApiPeerType))
#define ARApiPeerType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARApiPeerType_Enum) {
  ARApiPeerType_Enum_PRIVATE = 0,
  ARApiPeerType_Enum_GROUP = 1,
  ARApiPeerType_Enum_ENCRYPTEDPRIVATE = 2,
  ARApiPeerType_Enum_UNSUPPORTED_VALUE = 3,
};

@interface ARApiPeerType : JavaLangEnum < NSCopying >

+ (ARApiPeerType *)PRIVATE;

+ (ARApiPeerType *)GROUP;

+ (ARApiPeerType *)ENCRYPTEDPRIVATE;

+ (ARApiPeerType *)UNSUPPORTED_VALUE;

#pragma mark Public

- (jint)getValue;

+ (ARApiPeerType *)parseWithInt:(jint)value;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARApiPeerType *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARApiPeerType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARApiPeerType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARApiPeerType *ARApiPeerType_values_[];

inline ARApiPeerType *ARApiPeerType_get_PRIVATE();
J2OBJC_ENUM_CONSTANT(ARApiPeerType, PRIVATE)

inline ARApiPeerType *ARApiPeerType_get_GROUP();
J2OBJC_ENUM_CONSTANT(ARApiPeerType, GROUP)

inline ARApiPeerType *ARApiPeerType_get_ENCRYPTEDPRIVATE();
J2OBJC_ENUM_CONSTANT(ARApiPeerType, ENCRYPTEDPRIVATE)

inline ARApiPeerType *ARApiPeerType_get_UNSUPPORTED_VALUE();
J2OBJC_ENUM_CONSTANT(ARApiPeerType, UNSUPPORTED_VALUE)

FOUNDATION_EXPORT ARApiPeerType *ARApiPeerType_parseWithInt_(jint value);

FOUNDATION_EXPORT IOSObjectArray *ARApiPeerType_values();

FOUNDATION_EXPORT ARApiPeerType *ARApiPeerType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARApiPeerType *ARApiPeerType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARApiPeerType)

@compatibility_alias ImActorCoreApiApiPeerType ARApiPeerType;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiApiPeerType")

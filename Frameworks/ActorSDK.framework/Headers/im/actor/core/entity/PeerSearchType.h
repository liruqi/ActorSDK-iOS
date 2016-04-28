//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/PeerSearchType.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityPeerSearchType")
#ifdef RESTRICT_ImActorCoreEntityPeerSearchType
#define INCLUDE_ALL_ImActorCoreEntityPeerSearchType 0
#else
#define INCLUDE_ALL_ImActorCoreEntityPeerSearchType 1
#endif
#undef RESTRICT_ImActorCoreEntityPeerSearchType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACPeerSearchType_) && (INCLUDE_ALL_ImActorCoreEntityPeerSearchType || defined(INCLUDE_ACPeerSearchType))
#define ACPeerSearchType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ACPeerSearchType_Enum) {
  ACPeerSearchType_Enum_CONTACTS = 0,
  ACPeerSearchType_Enum_GROUPS = 1,
  ACPeerSearchType_Enum_PUBLIC = 2,
};

@interface ACPeerSearchType : JavaLangEnum < NSCopying >

+ (ACPeerSearchType *)CONTACTS;

+ (ACPeerSearchType *)GROUPS;

+ (ACPeerSearchType *)PUBLIC;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ACPeerSearchType *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ACPeerSearchType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ACPeerSearchType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ACPeerSearchType *ACPeerSearchType_values_[];

inline ACPeerSearchType *ACPeerSearchType_get_CONTACTS();
J2OBJC_ENUM_CONSTANT(ACPeerSearchType, CONTACTS)

inline ACPeerSearchType *ACPeerSearchType_get_GROUPS();
J2OBJC_ENUM_CONSTANT(ACPeerSearchType, GROUPS)

inline ACPeerSearchType *ACPeerSearchType_get_PUBLIC();
J2OBJC_ENUM_CONSTANT(ACPeerSearchType, PUBLIC)

FOUNDATION_EXPORT IOSObjectArray *ACPeerSearchType_values();

FOUNDATION_EXPORT ACPeerSearchType *ACPeerSearchType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ACPeerSearchType *ACPeerSearchType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ACPeerSearchType)

@compatibility_alias ImActorCoreEntityPeerSearchType ACPeerSearchType;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityPeerSearchType")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/actors/ThreadPriority.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeActorsThreadPriority")
#ifdef RESTRICT_ImActorRuntimeActorsThreadPriority
#define INCLUDE_ALL_ImActorRuntimeActorsThreadPriority 0
#else
#define INCLUDE_ALL_ImActorRuntimeActorsThreadPriority 1
#endif
#undef RESTRICT_ImActorRuntimeActorsThreadPriority

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARThreadPriority_) && (INCLUDE_ALL_ImActorRuntimeActorsThreadPriority || defined(INCLUDE_ARThreadPriority))
#define ARThreadPriority_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARThreadPriority_Enum) {
  ARThreadPriority_Enum_HIGH = 0,
  ARThreadPriority_Enum_NORMAL = 1,
  ARThreadPriority_Enum_LOW = 2,
};

@interface ARThreadPriority : JavaLangEnum < NSCopying >

+ (ARThreadPriority *)HIGH;

+ (ARThreadPriority *)NORMAL;

+ (ARThreadPriority *)LOW;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARThreadPriority *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARThreadPriority_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARThreadPriority)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARThreadPriority *ARThreadPriority_values_[];

inline ARThreadPriority *ARThreadPriority_get_HIGH();
J2OBJC_ENUM_CONSTANT(ARThreadPriority, HIGH)

inline ARThreadPriority *ARThreadPriority_get_NORMAL();
J2OBJC_ENUM_CONSTANT(ARThreadPriority, NORMAL)

inline ARThreadPriority *ARThreadPriority_get_LOW();
J2OBJC_ENUM_CONSTANT(ARThreadPriority, LOW)

FOUNDATION_EXPORT IOSObjectArray *ARThreadPriority_values();

FOUNDATION_EXPORT ARThreadPriority *ARThreadPriority_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARThreadPriority *ARThreadPriority_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARThreadPriority)

@compatibility_alias ImActorRuntimeActorsThreadPriority ARThreadPriority;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeActorsThreadPriority")

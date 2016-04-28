//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/viewmodel/CallState.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreViewmodelCallState")
#ifdef RESTRICT_ImActorCoreViewmodelCallState
#define INCLUDE_ALL_ImActorCoreViewmodelCallState 0
#else
#define INCLUDE_ALL_ImActorCoreViewmodelCallState 1
#endif
#undef RESTRICT_ImActorCoreViewmodelCallState

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACCallState_) && (INCLUDE_ALL_ImActorCoreViewmodelCallState || defined(INCLUDE_ACCallState))
#define ACCallState_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ACCallState_Enum) {
  ACCallState_Enum_RINGING = 0,
  ACCallState_Enum_CONNECTING = 1,
  ACCallState_Enum_IN_PROGRESS = 2,
  ACCallState_Enum_ENDED = 3,
};

@interface ACCallState : JavaLangEnum < NSCopying >

+ (ACCallState *)RINGING;

+ (ACCallState *)CONNECTING;

+ (ACCallState *)IN_PROGRESS;

+ (ACCallState *)ENDED;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ACCallState *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ACCallState_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ACCallState)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ACCallState *ACCallState_values_[];

inline ACCallState *ACCallState_get_RINGING();
J2OBJC_ENUM_CONSTANT(ACCallState, RINGING)

inline ACCallState *ACCallState_get_CONNECTING();
J2OBJC_ENUM_CONSTANT(ACCallState, CONNECTING)

inline ACCallState *ACCallState_get_IN_PROGRESS();
J2OBJC_ENUM_CONSTANT(ACCallState, IN_PROGRESS)

inline ACCallState *ACCallState_get_ENDED();
J2OBJC_ENUM_CONSTANT(ACCallState, ENDED)

FOUNDATION_EXPORT IOSObjectArray *ACCallState_values();

FOUNDATION_EXPORT ACCallState *ACCallState_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ACCallState *ACCallState_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ACCallState)

@compatibility_alias ImActorCoreViewmodelCallState ACCallState;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreViewmodelCallState")

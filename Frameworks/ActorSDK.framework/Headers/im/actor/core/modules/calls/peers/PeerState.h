//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/calls/peers/PeerState.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerState")
#ifdef RESTRICT_ImActorCoreModulesCallsPeersPeerState
#define INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerState 0
#else
#define INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerState 1
#endif
#undef RESTRICT_ImActorCoreModulesCallsPeersPeerState

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesCallsPeersPeerState_) && (INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerState || defined(INCLUDE_ImActorCoreModulesCallsPeersPeerState))
#define ImActorCoreModulesCallsPeersPeerState_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ImActorCoreModulesCallsPeersPeerState_Enum) {
  ImActorCoreModulesCallsPeersPeerState_Enum_PENDING = 0,
  ImActorCoreModulesCallsPeersPeerState_Enum_CONNECTING = 1,
  ImActorCoreModulesCallsPeersPeerState_Enum_CONNECTED = 2,
  ImActorCoreModulesCallsPeersPeerState_Enum_ACTIVE = 3,
  ImActorCoreModulesCallsPeersPeerState_Enum_DISPOSED = 4,
};

@interface ImActorCoreModulesCallsPeersPeerState : JavaLangEnum < NSCopying >

+ (ImActorCoreModulesCallsPeersPeerState *)PENDING;

+ (ImActorCoreModulesCallsPeersPeerState *)CONNECTING;

+ (ImActorCoreModulesCallsPeersPeerState *)CONNECTED;

+ (ImActorCoreModulesCallsPeersPeerState *)ACTIVE;

+ (ImActorCoreModulesCallsPeersPeerState *)DISPOSED;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ImActorCoreModulesCallsPeersPeerState *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ImActorCoreModulesCallsPeersPeerState_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ImActorCoreModulesCallsPeersPeerState)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerState *ImActorCoreModulesCallsPeersPeerState_values_[];

inline ImActorCoreModulesCallsPeersPeerState *ImActorCoreModulesCallsPeersPeerState_get_PENDING();
J2OBJC_ENUM_CONSTANT(ImActorCoreModulesCallsPeersPeerState, PENDING)

inline ImActorCoreModulesCallsPeersPeerState *ImActorCoreModulesCallsPeersPeerState_get_CONNECTING();
J2OBJC_ENUM_CONSTANT(ImActorCoreModulesCallsPeersPeerState, CONNECTING)

inline ImActorCoreModulesCallsPeersPeerState *ImActorCoreModulesCallsPeersPeerState_get_CONNECTED();
J2OBJC_ENUM_CONSTANT(ImActorCoreModulesCallsPeersPeerState, CONNECTED)

inline ImActorCoreModulesCallsPeersPeerState *ImActorCoreModulesCallsPeersPeerState_get_ACTIVE();
J2OBJC_ENUM_CONSTANT(ImActorCoreModulesCallsPeersPeerState, ACTIVE)

inline ImActorCoreModulesCallsPeersPeerState *ImActorCoreModulesCallsPeersPeerState_get_DISPOSED();
J2OBJC_ENUM_CONSTANT(ImActorCoreModulesCallsPeersPeerState, DISPOSED)

FOUNDATION_EXPORT IOSObjectArray *ImActorCoreModulesCallsPeersPeerState_values();

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerState *ImActorCoreModulesCallsPeersPeerState_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ImActorCoreModulesCallsPeersPeerState *ImActorCoreModulesCallsPeersPeerState_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesCallsPeersPeerState)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesCallsPeersPeerState")

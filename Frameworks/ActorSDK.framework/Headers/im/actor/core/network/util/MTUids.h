//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/util/MTUids.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkUtilMTUids")
#ifdef RESTRICT_ImActorCoreNetworkUtilMTUids
#define INCLUDE_ALL_ImActorCoreNetworkUtilMTUids 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkUtilMTUids 1
#endif
#undef RESTRICT_ImActorCoreNetworkUtilMTUids

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACMTUids_) && (INCLUDE_ALL_ImActorCoreNetworkUtilMTUids || defined(INCLUDE_ACMTUids))
#define ACMTUids_

@interface ACMTUids : NSObject

#pragma mark Public

- (instancetype)init;

+ (jlong)nextId;

@end

J2OBJC_STATIC_INIT(ACMTUids)

FOUNDATION_EXPORT jlong ACMTUids_nextId();

FOUNDATION_EXPORT void ACMTUids_init(ACMTUids *self);

FOUNDATION_EXPORT ACMTUids *new_ACMTUids_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACMTUids *create_ACMTUids_init();

J2OBJC_TYPE_LITERAL_HEADER(ACMTUids)

@compatibility_alias ImActorCoreNetworkUtilMTUids ACMTUids;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkUtilMTUids")

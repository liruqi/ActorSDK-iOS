//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/AuthRes.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityAuthRes")
#ifdef RESTRICT_ImActorCoreEntityAuthRes
#define INCLUDE_ALL_ImActorCoreEntityAuthRes 0
#else
#define INCLUDE_ALL_ImActorCoreEntityAuthRes 1
#endif
#undef RESTRICT_ImActorCoreEntityAuthRes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACAuthRes_) && (INCLUDE_ALL_ImActorCoreEntityAuthRes || defined(INCLUDE_ACAuthRes))
#define ACAuthRes_

@class IOSByteArray;

@interface ACAuthRes : NSObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (IOSByteArray *)getData;

@end

J2OBJC_EMPTY_STATIC_INIT(ACAuthRes)

FOUNDATION_EXPORT void ACAuthRes_initWithByteArray_(ACAuthRes *self, IOSByteArray *data);

FOUNDATION_EXPORT ACAuthRes *new_ACAuthRes_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACAuthRes *create_ACAuthRes_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ACAuthRes)

@compatibility_alias ImActorCoreEntityAuthRes ACAuthRes;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityAuthRes")

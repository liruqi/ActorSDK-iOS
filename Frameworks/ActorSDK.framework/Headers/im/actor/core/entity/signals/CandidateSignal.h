//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/signals/CandidateSignal.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntitySignalsCandidateSignal")
#ifdef RESTRICT_ImActorCoreEntitySignalsCandidateSignal
#define INCLUDE_ALL_ImActorCoreEntitySignalsCandidateSignal 0
#else
#define INCLUDE_ALL_ImActorCoreEntitySignalsCandidateSignal 1
#endif
#undef RESTRICT_ImActorCoreEntitySignalsCandidateSignal

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreEntitySignalsCandidateSignal_) && (INCLUDE_ALL_ImActorCoreEntitySignalsCandidateSignal || defined(INCLUDE_ImActorCoreEntitySignalsCandidateSignal))
#define ImActorCoreEntitySignalsCandidateSignal_

#define RESTRICT_ImActorCoreEntitySignalsAbsSignal 1
#define INCLUDE_ImActorCoreEntitySignalsAbsSignal 1
#include "../../../../../im/actor/core/entity/signals/AbsSignal.h"

@class ARBserValues;
@class ARBserWriter;

@interface ImActorCoreEntitySignalsCandidateSignal : ImActorCoreEntitySignalsAbsSignal

+ (NSString *)TYPE;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)id_
                         withInt:(jint)label
                    withNSString:(NSString *)sdp;

- (NSString *)getId;

- (jint)getLabel;

- (NSString *)getSdp;

- (NSString *)getType;

- (void)parseSignalWithARBserValues:(ARBserValues *)values;

- (void)serializeSignalWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreEntitySignalsCandidateSignal)

inline NSString *ImActorCoreEntitySignalsCandidateSignal_get_TYPE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ImActorCoreEntitySignalsCandidateSignal_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImActorCoreEntitySignalsCandidateSignal, TYPE, NSString *)

FOUNDATION_EXPORT void ImActorCoreEntitySignalsCandidateSignal_initWithNSString_withInt_withNSString_(ImActorCoreEntitySignalsCandidateSignal *self, NSString *id_, jint label, NSString *sdp);

FOUNDATION_EXPORT ImActorCoreEntitySignalsCandidateSignal *new_ImActorCoreEntitySignalsCandidateSignal_initWithNSString_withInt_withNSString_(NSString *id_, jint label, NSString *sdp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreEntitySignalsCandidateSignal *create_ImActorCoreEntitySignalsCandidateSignal_initWithNSString_withInt_withNSString_(NSString *id_, jint label, NSString *sdp);

FOUNDATION_EXPORT void ImActorCoreEntitySignalsCandidateSignal_init(ImActorCoreEntitySignalsCandidateSignal *self);

FOUNDATION_EXPORT ImActorCoreEntitySignalsCandidateSignal *new_ImActorCoreEntitySignalsCandidateSignal_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreEntitySignalsCandidateSignal *create_ImActorCoreEntitySignalsCandidateSignal_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreEntitySignalsCandidateSignal)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntitySignalsCandidateSignal")

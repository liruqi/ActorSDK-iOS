//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/notifications/entity/ReadState.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesNotificationsEntityReadState")
#ifdef RESTRICT_ImActorCoreModulesNotificationsEntityReadState
#define INCLUDE_ALL_ImActorCoreModulesNotificationsEntityReadState 0
#else
#define INCLUDE_ALL_ImActorCoreModulesNotificationsEntityReadState 1
#endif
#undef RESTRICT_ImActorCoreModulesNotificationsEntityReadState

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesNotificationsEntityReadState_) && (INCLUDE_ALL_ImActorCoreModulesNotificationsEntityReadState || defined(INCLUDE_ImActorCoreModulesNotificationsEntityReadState))
#define ImActorCoreModulesNotificationsEntityReadState_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/actor/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ImActorCoreModulesNotificationsEntityReadState : ARBserObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)sortDate;

+ (ImActorCoreModulesNotificationsEntityReadState *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getSortDate;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesNotificationsEntityReadState)

FOUNDATION_EXPORT ImActorCoreModulesNotificationsEntityReadState *ImActorCoreModulesNotificationsEntityReadState_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ImActorCoreModulesNotificationsEntityReadState_initWithLong_(ImActorCoreModulesNotificationsEntityReadState *self, jlong sortDate);

FOUNDATION_EXPORT ImActorCoreModulesNotificationsEntityReadState *new_ImActorCoreModulesNotificationsEntityReadState_initWithLong_(jlong sortDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesNotificationsEntityReadState *create_ImActorCoreModulesNotificationsEntityReadState_initWithLong_(jlong sortDate);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesNotificationsEntityReadState)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesNotificationsEntityReadState")

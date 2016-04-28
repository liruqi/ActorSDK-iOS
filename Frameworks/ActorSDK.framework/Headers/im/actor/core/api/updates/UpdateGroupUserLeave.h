//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateGroupUserLeave.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupUserLeave")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateGroupUserLeave
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupUserLeave 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupUserLeave 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateGroupUserLeave

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateGroupUserLeave_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupUserLeave || defined(INCLUDE_ARUpdateGroupUserLeave))
#define ARUpdateGroupUserLeave_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARUpdateGroupUserLeave : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)groupId
                   withLong:(jlong)rid
                    withInt:(jint)uid
                   withLong:(jlong)date;

+ (ARUpdateGroupUserLeave *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (jint)getGroupId;

- (jint)getHeaderKey;

- (jlong)getRid;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateGroupUserLeave)

inline jint ARUpdateGroupUserLeave_get_HEADER();
#define ARUpdateGroupUserLeave_HEADER 23
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateGroupUserLeave, HEADER, jint)

FOUNDATION_EXPORT ARUpdateGroupUserLeave *ARUpdateGroupUserLeave_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateGroupUserLeave_initWithInt_withLong_withInt_withLong_(ARUpdateGroupUserLeave *self, jint groupId, jlong rid, jint uid, jlong date);

FOUNDATION_EXPORT ARUpdateGroupUserLeave *new_ARUpdateGroupUserLeave_initWithInt_withLong_withInt_withLong_(jint groupId, jlong rid, jint uid, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupUserLeave *create_ARUpdateGroupUserLeave_initWithInt_withLong_withInt_withLong_(jint groupId, jlong rid, jint uid, jlong date);

FOUNDATION_EXPORT void ARUpdateGroupUserLeave_init(ARUpdateGroupUserLeave *self);

FOUNDATION_EXPORT ARUpdateGroupUserLeave *new_ARUpdateGroupUserLeave_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupUserLeave *create_ARUpdateGroupUserLeave_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateGroupUserLeave)

@compatibility_alias ImActorCoreApiUpdatesUpdateGroupUserLeave ARUpdateGroupUserLeave;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupUserLeave")

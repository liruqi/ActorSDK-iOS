//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateGroupTopicChanged.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupTopicChanged")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateGroupTopicChanged
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupTopicChanged 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupTopicChanged 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateGroupTopicChanged

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateGroupTopicChanged_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupTopicChanged || defined(INCLUDE_ARUpdateGroupTopicChanged))
#define ARUpdateGroupTopicChanged_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateGroupTopicChanged : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)groupId
                   withLong:(jlong)rid
                    withInt:(jint)uid
               withNSString:(NSString * __nullable)topic
                   withLong:(jlong)date;

+ (ARUpdateGroupTopicChanged *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (jint)getGroupId;

- (jint)getHeaderKey;

- (jlong)getRid;

- (NSString * __nullable)getTopic;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateGroupTopicChanged)

inline jint ARUpdateGroupTopicChanged_get_HEADER();
#define ARUpdateGroupTopicChanged_HEADER 213
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateGroupTopicChanged, HEADER, jint)

FOUNDATION_EXPORT ARUpdateGroupTopicChanged *ARUpdateGroupTopicChanged_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateGroupTopicChanged_initWithInt_withLong_withInt_withNSString_withLong_(ARUpdateGroupTopicChanged *self, jint groupId, jlong rid, jint uid, NSString *topic, jlong date);

FOUNDATION_EXPORT ARUpdateGroupTopicChanged *new_ARUpdateGroupTopicChanged_initWithInt_withLong_withInt_withNSString_withLong_(jint groupId, jlong rid, jint uid, NSString *topic, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupTopicChanged *create_ARUpdateGroupTopicChanged_initWithInt_withLong_withInt_withNSString_withLong_(jint groupId, jlong rid, jint uid, NSString *topic, jlong date);

FOUNDATION_EXPORT void ARUpdateGroupTopicChanged_init(ARUpdateGroupTopicChanged *self);

FOUNDATION_EXPORT ARUpdateGroupTopicChanged *new_ARUpdateGroupTopicChanged_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupTopicChanged *create_ARUpdateGroupTopicChanged_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateGroupTopicChanged)

@compatibility_alias ImActorCoreApiUpdatesUpdateGroupTopicChanged ARUpdateGroupTopicChanged;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateGroupTopicChanged")

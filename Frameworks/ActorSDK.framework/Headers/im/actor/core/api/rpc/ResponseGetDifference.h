//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/ResponseGetDifference.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseGetDifference")
#ifdef RESTRICT_ImActorCoreApiRpcResponseGetDifference
#define INCLUDE_ALL_ImActorCoreApiRpcResponseGetDifference 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcResponseGetDifference 1
#endif
#undef RESTRICT_ImActorCoreApiRpcResponseGetDifference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseGetDifference_) && (INCLUDE_ALL_ImActorCoreApiRpcResponseGetDifference || defined(INCLUDE_ARResponseGetDifference))
#define ARResponseGetDifference_

#define RESTRICT_ImActorCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/actor/core/network/parser/Response.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseGetDifference : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)seq
              withByteArray:(IOSByteArray * __nonnull)state
           withJavaUtilList:(id<JavaUtilList> __nonnull)users
           withJavaUtilList:(id<JavaUtilList> __nonnull)groups
           withJavaUtilList:(id<JavaUtilList> __nonnull)updates
           withJavaUtilList:(id<JavaUtilList> __nonnull)messages
                withBoolean:(jboolean)needMore
           withJavaUtilList:(id<JavaUtilList> __nonnull)usersRefs
           withJavaUtilList:(id<JavaUtilList> __nonnull)groupsRefs;

+ (ARResponseGetDifference *)fromBytesWithByteArray:(IOSByteArray *)data;

- (id<JavaUtilList> __nonnull)getGroups;

- (id<JavaUtilList> __nonnull)getGroupsRefs;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getMessages;

- (jint)getSeq;

- (IOSByteArray * __nonnull)getState;

- (id<JavaUtilList> __nonnull)getUpdates;

- (id<JavaUtilList> __nonnull)getUsers;

- (id<JavaUtilList> __nonnull)getUsersRefs;

- (jboolean)needMore;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseGetDifference)

inline jint ARResponseGetDifference_get_HEADER();
#define ARResponseGetDifference_HEADER 12
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseGetDifference, HEADER, jint)

FOUNDATION_EXPORT ARResponseGetDifference *ARResponseGetDifference_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseGetDifference_initWithInt_withByteArray_withJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaUtilList_withBoolean_withJavaUtilList_withJavaUtilList_(ARResponseGetDifference *self, jint seq, IOSByteArray *state, id<JavaUtilList> users, id<JavaUtilList> groups, id<JavaUtilList> updates, id<JavaUtilList> messages, jboolean needMore, id<JavaUtilList> usersRefs, id<JavaUtilList> groupsRefs);

FOUNDATION_EXPORT ARResponseGetDifference *new_ARResponseGetDifference_initWithInt_withByteArray_withJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaUtilList_withBoolean_withJavaUtilList_withJavaUtilList_(jint seq, IOSByteArray *state, id<JavaUtilList> users, id<JavaUtilList> groups, id<JavaUtilList> updates, id<JavaUtilList> messages, jboolean needMore, id<JavaUtilList> usersRefs, id<JavaUtilList> groupsRefs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseGetDifference *create_ARResponseGetDifference_initWithInt_withByteArray_withJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaUtilList_withBoolean_withJavaUtilList_withJavaUtilList_(jint seq, IOSByteArray *state, id<JavaUtilList> users, id<JavaUtilList> groups, id<JavaUtilList> updates, id<JavaUtilList> messages, jboolean needMore, id<JavaUtilList> usersRefs, id<JavaUtilList> groupsRefs);

FOUNDATION_EXPORT void ARResponseGetDifference_init(ARResponseGetDifference *self);

FOUNDATION_EXPORT ARResponseGetDifference *new_ARResponseGetDifference_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseGetDifference *create_ARResponseGetDifference_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseGetDifference)

@compatibility_alias ImActorCoreApiRpcResponseGetDifference ARResponseGetDifference;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseGetDifference")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/ResponseLoadGroupedDialogs.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseLoadGroupedDialogs")
#ifdef RESTRICT_ImActorCoreApiRpcResponseLoadGroupedDialogs
#define INCLUDE_ALL_ImActorCoreApiRpcResponseLoadGroupedDialogs 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcResponseLoadGroupedDialogs 1
#endif
#undef RESTRICT_ImActorCoreApiRpcResponseLoadGroupedDialogs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseLoadGroupedDialogs_) && (INCLUDE_ALL_ImActorCoreApiRpcResponseLoadGroupedDialogs || defined(INCLUDE_ARResponseLoadGroupedDialogs))
#define ARResponseLoadGroupedDialogs_

#define RESTRICT_ImActorCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/actor/core/network/parser/Response.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class JavaLangBoolean;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseLoadGroupedDialogs : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)dialogs
                    withJavaUtilList:(id<JavaUtilList> __nonnull)users
                    withJavaUtilList:(id<JavaUtilList> __nonnull)groups
                 withJavaLangBoolean:(JavaLangBoolean * __nullable)showArchived
                 withJavaLangBoolean:(JavaLangBoolean * __nullable)showInvite;

+ (ARResponseLoadGroupedDialogs *)fromBytesWithByteArray:(IOSByteArray *)data;

- (id<JavaUtilList> __nonnull)getDialogs;

- (id<JavaUtilList> __nonnull)getGroups;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getUsers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (JavaLangBoolean * __nullable)showArchived;

- (JavaLangBoolean * __nullable)showInvite;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseLoadGroupedDialogs)

inline jint ARResponseLoadGroupedDialogs_get_HEADER();
#define ARResponseLoadGroupedDialogs_HEADER 226
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseLoadGroupedDialogs, HEADER, jint)

FOUNDATION_EXPORT ARResponseLoadGroupedDialogs *ARResponseLoadGroupedDialogs_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseLoadGroupedDialogs_initWithJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaLangBoolean_withJavaLangBoolean_(ARResponseLoadGroupedDialogs *self, id<JavaUtilList> dialogs, id<JavaUtilList> users, id<JavaUtilList> groups, JavaLangBoolean *showArchived, JavaLangBoolean *showInvite);

FOUNDATION_EXPORT ARResponseLoadGroupedDialogs *new_ARResponseLoadGroupedDialogs_initWithJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaLangBoolean_withJavaLangBoolean_(id<JavaUtilList> dialogs, id<JavaUtilList> users, id<JavaUtilList> groups, JavaLangBoolean *showArchived, JavaLangBoolean *showInvite) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseLoadGroupedDialogs *create_ARResponseLoadGroupedDialogs_initWithJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaLangBoolean_withJavaLangBoolean_(id<JavaUtilList> dialogs, id<JavaUtilList> users, id<JavaUtilList> groups, JavaLangBoolean *showArchived, JavaLangBoolean *showInvite);

FOUNDATION_EXPORT void ARResponseLoadGroupedDialogs_init(ARResponseLoadGroupedDialogs *self);

FOUNDATION_EXPORT ARResponseLoadGroupedDialogs *new_ARResponseLoadGroupedDialogs_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseLoadGroupedDialogs *create_ARResponseLoadGroupedDialogs_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseLoadGroupedDialogs)

@compatibility_alias ImActorCoreApiRpcResponseLoadGroupedDialogs ARResponseLoadGroupedDialogs;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcResponseLoadGroupedDialogs")

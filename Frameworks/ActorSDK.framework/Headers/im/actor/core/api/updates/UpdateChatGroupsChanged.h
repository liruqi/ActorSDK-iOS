//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateChatGroupsChanged.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateChatGroupsChanged")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateChatGroupsChanged
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateChatGroupsChanged 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateChatGroupsChanged 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateChatGroupsChanged

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateChatGroupsChanged_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateChatGroupsChanged || defined(INCLUDE_ARUpdateChatGroupsChanged))
#define ARUpdateChatGroupsChanged_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateChatGroupsChanged : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)dialogs;

+ (ARUpdateChatGroupsChanged *)fromBytesWithByteArray:(IOSByteArray *)data;

- (id<JavaUtilList> __nonnull)getDialogs;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateChatGroupsChanged)

inline jint ARUpdateChatGroupsChanged_get_HEADER();
#define ARUpdateChatGroupsChanged_HEADER 1
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateChatGroupsChanged, HEADER, jint)

FOUNDATION_EXPORT ARUpdateChatGroupsChanged *ARUpdateChatGroupsChanged_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateChatGroupsChanged_initWithJavaUtilList_(ARUpdateChatGroupsChanged *self, id<JavaUtilList> dialogs);

FOUNDATION_EXPORT ARUpdateChatGroupsChanged *new_ARUpdateChatGroupsChanged_initWithJavaUtilList_(id<JavaUtilList> dialogs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateChatGroupsChanged *create_ARUpdateChatGroupsChanged_initWithJavaUtilList_(id<JavaUtilList> dialogs);

FOUNDATION_EXPORT void ARUpdateChatGroupsChanged_init(ARUpdateChatGroupsChanged *self);

FOUNDATION_EXPORT ARUpdateChatGroupsChanged *new_ARUpdateChatGroupsChanged_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateChatGroupsChanged *create_ARUpdateChatGroupsChanged_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateChatGroupsChanged)

@compatibility_alias ImActorCoreApiUpdatesUpdateChatGroupsChanged ARUpdateChatGroupsChanged;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateChatGroupsChanged")

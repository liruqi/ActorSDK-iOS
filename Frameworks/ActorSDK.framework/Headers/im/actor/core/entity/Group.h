//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/Group.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityGroup")
#ifdef RESTRICT_ImActorCoreEntityGroup
#define INCLUDE_ALL_ImActorCoreEntityGroup 0
#else
#define INCLUDE_ALL_ImActorCoreEntityGroup 1
#endif
#undef RESTRICT_ImActorCoreEntityGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACGroup_) && (INCLUDE_ALL_ImActorCoreEntityGroup || defined(INCLUDE_ACGroup))
#define ACGroup_

#define RESTRICT_ImActorCoreEntityWrapperEntity 1
#define INCLUDE_ACWrapperEntity 1
#include "../../../../im/actor/core/entity/WrapperEntity.h"

#define RESTRICT_ImActorRuntimeStorageKeyValueItem 1
#define INCLUDE_ARKeyValueItem 1
#include "../../../../im/actor/runtime/storage/KeyValueItem.h"

@class ACAvatar;
@class ACPeer;
@class ARApiAvatar;
@class ARApiGroup;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol ARBserCreator;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ACGroup : ACWrapperEntity < ARKeyValueItem >
@property (readonly, nonatomic, getter=getGroupId) jint groupId;
@property (readonly, copy, nonatomic, getter=getTitle) NSString *title;
@property (readonly, nonatomic, getter=getAvatar) ACAvatar *avatar;
@property (readonly, nonatomic, getter=getCreatorId) jint creatorId;
@property (readonly, nonatomic, getter=isHidden) jboolean isHidden;
@property (readonly, copy, nonatomic, getter=getTheme) NSString *theme;
@property (readonly, copy, nonatomic, getter=getAbout) NSString *about;
@property (readonly, nonatomic, getter=getMembers) id<JavaUtilList> members;

+ (id<ARBserCreator>)CREATOR;

+ (void)setCREATOR:(id<ARBserCreator>)value;

#pragma mark Public

- (instancetype)initWithARApiGroup:(ARApiGroup * __nonnull)group;

- (instancetype)initWithByteArray:(IOSByteArray * __nonnull)data;

- (ACGroup *)addMemberWithInt:(jint)uid
                      withInt:(jint)inviterUid
                     withLong:(jlong)inviteDate;

- (ACGroup *)clearMembers;

- (ACGroup *)editAboutWithNSString:(NSString *)about;

- (ACGroup *)editAvatarWithARApiAvatar:(ARApiAvatar *)avatar;

- (ACGroup *)editThemeWithNSString:(NSString *)theme;

- (ACGroup *)editTitleWithNSString:(NSString *)title;

- (NSString * __nullable)getAbout;

- (jlong)getAccessHash;

- (ACAvatar * __nullable)getAvatar;

- (jint)getCreatorId;

- (jlong)getEngineId;

- (jint)getGroupId;

- (id<JavaUtilList> __nonnull)getMembers;

- (NSString * __nullable)getTheme;

- (NSString * __nonnull)getTitle;

- (jboolean)isHidden;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (ACPeer *)peer;

- (ACGroup *)removeMemberWithInt:(jint)uid;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (ACGroup *)updateMembersWithJavaUtilList:(id<JavaUtilList>)nMembers;

#pragma mark Protected

- (void)applyWrappedWithARBserObject:(ARApiGroup * __nonnull)wrapped;

- (ARApiGroup * __nonnull)createInstance;

@end

J2OBJC_STATIC_INIT(ACGroup)

inline id<ARBserCreator> ACGroup_get_CREATOR();
inline id<ARBserCreator> ACGroup_set_CREATOR(id<ARBserCreator> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARBserCreator> ACGroup_CREATOR;
J2OBJC_STATIC_FIELD_OBJ(ACGroup, CREATOR, id<ARBserCreator>)

FOUNDATION_EXPORT void ACGroup_initWithARApiGroup_(ACGroup *self, ARApiGroup *group);

FOUNDATION_EXPORT ACGroup *new_ACGroup_initWithARApiGroup_(ARApiGroup *group) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACGroup *create_ACGroup_initWithARApiGroup_(ARApiGroup *group);

FOUNDATION_EXPORT void ACGroup_initWithByteArray_(ACGroup *self, IOSByteArray *data);

FOUNDATION_EXPORT ACGroup *new_ACGroup_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACGroup *create_ACGroup_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ACGroup)

@compatibility_alias ImActorCoreEntityGroup ACGroup;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityGroup")

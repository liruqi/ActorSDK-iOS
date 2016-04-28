//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/SearchEntity.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntitySearchEntity")
#ifdef RESTRICT_ImActorCoreEntitySearchEntity
#define INCLUDE_ALL_ImActorCoreEntitySearchEntity 0
#else
#define INCLUDE_ALL_ImActorCoreEntitySearchEntity 1
#endif
#undef RESTRICT_ImActorCoreEntitySearchEntity

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACSearchEntity_) && (INCLUDE_ALL_ImActorCoreEntitySearchEntity || defined(INCLUDE_ACSearchEntity))
#define ACSearchEntity_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/actor/runtime/bser/BserObject.h"

#define RESTRICT_ImActorRuntimeStorageListEngineItem 1
#define INCLUDE_ARListEngineItem 1
#include "../../../../im/actor/runtime/storage/ListEngineItem.h"

@class ACAvatar;
@class ACPeer;
@class ARBserValues;
@class ARBserWriter;
@protocol ARBserCreator;

@interface ACSearchEntity : ARBserObject < ARListEngineItem >
@property (readonly, nonatomic, getter=getPeer) ACPeer *peer;
@property (readonly, nonatomic, getter=getOrder) jlong order;
@property (readonly, nonatomic, getter=getAvatar) ACAvatar *avatar;
@property (readonly, copy, nonatomic, getter=getTitle) NSString *title;

+ (id<ARBserCreator>)CREATOR;

+ (NSString *)ENTITY_NAME;

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)order
                  withACAvatar:(ACAvatar *)avatar
                  withNSString:(NSString *)title;

- (ACAvatar *)getAvatar;

- (jlong)getEngineId;

- (NSString *)getEngineSearch;

- (jlong)getEngineSort;

- (jlong)getOrder;

- (ACPeer *)getPeer;

- (NSString *)getTitle;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_STATIC_INIT(ACSearchEntity)

inline id<ARBserCreator> ACSearchEntity_get_CREATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARBserCreator> ACSearchEntity_CREATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACSearchEntity, CREATOR, id<ARBserCreator>)

inline NSString *ACSearchEntity_get_ENTITY_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACSearchEntity_ENTITY_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACSearchEntity, ENTITY_NAME, NSString *)

FOUNDATION_EXPORT void ACSearchEntity_initWithACPeer_withLong_withACAvatar_withNSString_(ACSearchEntity *self, ACPeer *peer, jlong order, ACAvatar *avatar, NSString *title);

FOUNDATION_EXPORT ACSearchEntity *new_ACSearchEntity_initWithACPeer_withLong_withACAvatar_withNSString_(ACPeer *peer, jlong order, ACAvatar *avatar, NSString *title) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACSearchEntity *create_ACSearchEntity_initWithACPeer_withLong_withACAvatar_withNSString_(ACPeer *peer, jlong order, ACAvatar *avatar, NSString *title);

J2OBJC_TYPE_LITERAL_HEADER(ACSearchEntity)

@compatibility_alias ImActorCoreEntitySearchEntity ACSearchEntity;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntitySearchEntity")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/stickers/entity/StickersStorage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesStickersEntityStickersStorage")
#ifdef RESTRICT_ImActorCoreModulesStickersEntityStickersStorage
#define INCLUDE_ALL_ImActorCoreModulesStickersEntityStickersStorage 0
#else
#define INCLUDE_ALL_ImActorCoreModulesStickersEntityStickersStorage 1
#endif
#undef RESTRICT_ImActorCoreModulesStickersEntityStickersStorage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesStickersEntityStickersStorage_) && (INCLUDE_ALL_ImActorCoreModulesStickersEntityStickersStorage || defined(INCLUDE_ImActorCoreModulesStickersEntityStickersStorage))
#define ImActorCoreModulesStickersEntityStickersStorage_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/actor/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

@interface ImActorCoreModulesStickersEntityStickersStorage : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (id<JavaUtilList>)getStickerPacks;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesStickersEntityStickersStorage)

FOUNDATION_EXPORT void ImActorCoreModulesStickersEntityStickersStorage_init(ImActorCoreModulesStickersEntityStickersStorage *self);

FOUNDATION_EXPORT ImActorCoreModulesStickersEntityStickersStorage *new_ImActorCoreModulesStickersEntityStickersStorage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesStickersEntityStickersStorage *create_ImActorCoreModulesStickersEntityStickersStorage_init();

FOUNDATION_EXPORT void ImActorCoreModulesStickersEntityStickersStorage_initWithByteArray_(ImActorCoreModulesStickersEntityStickersStorage *self, IOSByteArray *data);

FOUNDATION_EXPORT ImActorCoreModulesStickersEntityStickersStorage *new_ImActorCoreModulesStickersEntityStickersStorage_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesStickersEntityStickersStorage *create_ImActorCoreModulesStickersEntityStickersStorage_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesStickersEntityStickersStorage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesStickersEntityStickersStorage")

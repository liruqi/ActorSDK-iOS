//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/misc/DisplayLists.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMiscDisplayLists")
#ifdef RESTRICT_ImActorCoreModulesMiscDisplayLists
#define INCLUDE_ALL_ImActorCoreModulesMiscDisplayLists 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMiscDisplayLists 1
#endif
#undef RESTRICT_ImActorCoreModulesMiscDisplayLists

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMiscDisplayLists_) && (INCLUDE_ALL_ImActorCoreModulesMiscDisplayLists || defined(INCLUDE_ImActorCoreModulesMiscDisplayLists))
#define ImActorCoreModulesMiscDisplayLists_

#define RESTRICT_ImActorCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../im/actor/core/modules/AbsModule.h"

@class ACPeer;
@protocol ACModuleContext;
@protocol ARPlatformDisplayList;

@interface ImActorCoreModulesMiscDisplayLists : ACAbsModule

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (id<ARPlatformDisplayList>)buildChatDocsListWithACPeer:(ACPeer *)peer
                                             withBoolean:(jboolean)isShared;

- (id<ARPlatformDisplayList>)buildChatListWithACPeer:(ACPeer *)peer
                                         withBoolean:(jboolean)isShared;

- (id<ARPlatformDisplayList>)buildContactListWithBoolean:(jboolean)isShared;

- (id<ARPlatformDisplayList>)buildDialogsListWithBoolean:(jboolean)isShared;

- (id<ARPlatformDisplayList>)buildPhoneBookContactList;

- (id<ARPlatformDisplayList>)buildSearchListWithBoolean:(jboolean)isGlobalList;

- (id<ARPlatformDisplayList>)getContactsSharedList;

- (id<ARPlatformDisplayList>)getDialogsSharedList;

- (id<ARPlatformDisplayList>)getDocsSharedListWithACPeer:(ACPeer *)peer;

- (id<ARPlatformDisplayList>)getMessagesSharedListWithACPeer:(ACPeer *)peer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMiscDisplayLists)

FOUNDATION_EXPORT void ImActorCoreModulesMiscDisplayLists_initWithACModuleContext_(ImActorCoreModulesMiscDisplayLists *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesMiscDisplayLists *new_ImActorCoreModulesMiscDisplayLists_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMiscDisplayLists *create_ImActorCoreModulesMiscDisplayLists_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMiscDisplayLists)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMiscDisplayLists")

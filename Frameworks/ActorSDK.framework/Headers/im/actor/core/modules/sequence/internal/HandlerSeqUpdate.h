//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/sequence/internal/HandlerSeqUpdate.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesSequenceInternalHandlerSeqUpdate")
#ifdef RESTRICT_ImActorCoreModulesSequenceInternalHandlerSeqUpdate
#define INCLUDE_ALL_ImActorCoreModulesSequenceInternalHandlerSeqUpdate 0
#else
#define INCLUDE_ALL_ImActorCoreModulesSequenceInternalHandlerSeqUpdate 1
#endif
#undef RESTRICT_ImActorCoreModulesSequenceInternalHandlerSeqUpdate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesSequenceInternalHandlerSeqUpdate_) && (INCLUDE_ALL_ImActorCoreModulesSequenceInternalHandlerSeqUpdate || defined(INCLUDE_ImActorCoreModulesSequenceInternalHandlerSeqUpdate))
#define ImActorCoreModulesSequenceInternalHandlerSeqUpdate_

#define RESTRICT_ImActorRuntimeActorsAskAskMessage 1
#define INCLUDE_ImActorRuntimeActorsAskAskMessage 1
#include "../../../../../../im/actor/runtime/actors/ask/AskMessage.h"

@class ACUpdate;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ImActorCoreModulesSequenceInternalHandlerSeqUpdate : NSObject < ImActorRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)initWithACUpdate:(ACUpdate * __nonnull)update
                withJavaUtilList:(id<JavaUtilList> __nullable)users
                withJavaUtilList:(id<JavaUtilList> __nullable)groups;

- (id<JavaUtilList> __nullable)getGroups;

- (ACUpdate * __nonnull)getUpdate;

- (id<JavaUtilList> __nullable)getUsers;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesSequenceInternalHandlerSeqUpdate)

FOUNDATION_EXPORT void ImActorCoreModulesSequenceInternalHandlerSeqUpdate_initWithACUpdate_withJavaUtilList_withJavaUtilList_(ImActorCoreModulesSequenceInternalHandlerSeqUpdate *self, ACUpdate *update, id<JavaUtilList> users, id<JavaUtilList> groups);

FOUNDATION_EXPORT ImActorCoreModulesSequenceInternalHandlerSeqUpdate *new_ImActorCoreModulesSequenceInternalHandlerSeqUpdate_initWithACUpdate_withJavaUtilList_withJavaUtilList_(ACUpdate *update, id<JavaUtilList> users, id<JavaUtilList> groups) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesSequenceInternalHandlerSeqUpdate *create_ImActorCoreModulesSequenceInternalHandlerSeqUpdate_initWithACUpdate_withJavaUtilList_withJavaUtilList_(ACUpdate *update, id<JavaUtilList> users, id<JavaUtilList> groups);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesSequenceInternalHandlerSeqUpdate)

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesSequenceInternalHandlerSeqUpdate")

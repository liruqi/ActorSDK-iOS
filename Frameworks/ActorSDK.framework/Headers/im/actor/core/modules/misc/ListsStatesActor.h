//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/misc/ListsStatesActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor")
#ifdef RESTRICT_ImActorCoreModulesMiscListsStatesActor
#define INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor 1
#endif
#undef RESTRICT_ImActorCoreModulesMiscListsStatesActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesMiscListsStatesActor_) && (INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor || defined(INCLUDE_ImActorCoreModulesMiscListsStatesActor))
#define ImActorCoreModulesMiscListsStatesActor_

#define RESTRICT_ImActorCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/actor/core/modules/ModuleActor.h"

@protocol ACModuleContext;

@interface ImActorCoreModulesMiscListsStatesActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onBookImported;

- (void)onContactsChangedWithBoolean:(jboolean)isEmpty;

- (void)onContactsLoaded;

- (void)onDialogsChangedWithBoolean:(jboolean)isEmpty;

- (void)onDialogsLoaded;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMiscListsStatesActor)

FOUNDATION_EXPORT void ImActorCoreModulesMiscListsStatesActor_initWithACModuleContext_(ImActorCoreModulesMiscListsStatesActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor *new_ImActorCoreModulesMiscListsStatesActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor *create_ImActorCoreModulesMiscListsStatesActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMiscListsStatesActor)

#endif

#if !defined (ImActorCoreModulesMiscListsStatesActor_OnBookImported_) && (INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor || defined(INCLUDE_ImActorCoreModulesMiscListsStatesActor_OnBookImported))
#define ImActorCoreModulesMiscListsStatesActor_OnBookImported_

@interface ImActorCoreModulesMiscListsStatesActor_OnBookImported : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMiscListsStatesActor_OnBookImported)

FOUNDATION_EXPORT void ImActorCoreModulesMiscListsStatesActor_OnBookImported_init(ImActorCoreModulesMiscListsStatesActor_OnBookImported *self);

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnBookImported *new_ImActorCoreModulesMiscListsStatesActor_OnBookImported_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnBookImported *create_ImActorCoreModulesMiscListsStatesActor_OnBookImported_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMiscListsStatesActor_OnBookImported)

#endif

#if !defined (ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded_) && (INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor || defined(INCLUDE_ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded))
#define ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded_

@interface ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded)

FOUNDATION_EXPORT void ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded_init(ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded *self);

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded *new_ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded *create_ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMiscListsStatesActor_OnContactsLoaded)

#endif

#if !defined (ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded_) && (INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor || defined(INCLUDE_ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded))
#define ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded_

@interface ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded)

FOUNDATION_EXPORT void ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded_init(ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded *self);

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded *new_ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded *create_ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMiscListsStatesActor_OnDialogsLoaded)

#endif

#if !defined (ImActorCoreModulesMiscListsStatesActor_OnContactsChanged_) && (INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor || defined(INCLUDE_ImActorCoreModulesMiscListsStatesActor_OnContactsChanged))
#define ImActorCoreModulesMiscListsStatesActor_OnContactsChanged_

@interface ImActorCoreModulesMiscListsStatesActor_OnContactsChanged : NSObject

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)isEmpty;

- (jboolean)isEmpty;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMiscListsStatesActor_OnContactsChanged)

FOUNDATION_EXPORT void ImActorCoreModulesMiscListsStatesActor_OnContactsChanged_initWithBoolean_(ImActorCoreModulesMiscListsStatesActor_OnContactsChanged *self, jboolean isEmpty);

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnContactsChanged *new_ImActorCoreModulesMiscListsStatesActor_OnContactsChanged_initWithBoolean_(jboolean isEmpty) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnContactsChanged *create_ImActorCoreModulesMiscListsStatesActor_OnContactsChanged_initWithBoolean_(jboolean isEmpty);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMiscListsStatesActor_OnContactsChanged)

#endif

#if !defined (ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged_) && (INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor || defined(INCLUDE_ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged))
#define ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged_

@interface ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged : NSObject

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)isEmpty;

- (jboolean)isEmpty;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged)

FOUNDATION_EXPORT void ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged_initWithBoolean_(ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged *self, jboolean isEmpty);

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged *new_ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged_initWithBoolean_(jboolean isEmpty) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged *create_ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged_initWithBoolean_(jboolean isEmpty);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesMiscListsStatesActor_OnDialogsChanged)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesMiscListsStatesActor")

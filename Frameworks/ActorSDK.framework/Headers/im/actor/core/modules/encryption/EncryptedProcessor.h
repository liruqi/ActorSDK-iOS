//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/encryption/EncryptedProcessor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedProcessor")
#ifdef RESTRICT_ImActorCoreModulesEncryptionEncryptedProcessor
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedProcessor 0
#else
#define INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedProcessor 1
#endif
#undef RESTRICT_ImActorCoreModulesEncryptionEncryptedProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesEncryptionEncryptedProcessor_) && (INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedProcessor || defined(INCLUDE_ImActorCoreModulesEncryptionEncryptedProcessor))
#define ImActorCoreModulesEncryptionEncryptedProcessor_

#define RESTRICT_ImActorCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../im/actor/core/modules/AbsModule.h"

#define RESTRICT_ImActorCoreModulesSequenceProcessorSequenceProcessor 1
#define INCLUDE_ImActorCoreModulesSequenceProcessorSequenceProcessor 1
#include "../../../../../im/actor/core/modules/sequence/processor/SequenceProcessor.h"

@class ACUpdate;
@protocol ACModuleContext;

@interface ImActorCoreModulesEncryptionEncryptedProcessor : ACAbsModule < ImActorCoreModulesSequenceProcessorSequenceProcessor >

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (jboolean)processWithACUpdate:(ACUpdate *)update;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesEncryptionEncryptedProcessor)

FOUNDATION_EXPORT void ImActorCoreModulesEncryptionEncryptedProcessor_initWithACModuleContext_(ImActorCoreModulesEncryptionEncryptedProcessor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedProcessor *new_ImActorCoreModulesEncryptionEncryptedProcessor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesEncryptionEncryptedProcessor *create_ImActorCoreModulesEncryptionEncryptedProcessor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesEncryptionEncryptedProcessor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesEncryptionEncryptedProcessor")

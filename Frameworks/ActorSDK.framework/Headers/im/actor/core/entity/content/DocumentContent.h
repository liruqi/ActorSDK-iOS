//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/content/DocumentContent.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntityContentDocumentContent")
#ifdef RESTRICT_ImActorCoreEntityContentDocumentContent
#define INCLUDE_ALL_ImActorCoreEntityContentDocumentContent 0
#else
#define INCLUDE_ALL_ImActorCoreEntityContentDocumentContent 1
#endif
#undef RESTRICT_ImActorCoreEntityContentDocumentContent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACDocumentContent_) && (INCLUDE_ALL_ImActorCoreEntityContentDocumentContent || defined(INCLUDE_ACDocumentContent))
#define ACDocumentContent_

#define RESTRICT_ImActorCoreEntityContentAbsContent 1
#define INCLUDE_ACAbsContent 1
#include "../../../../../im/actor/core/entity/content/AbsContent.h"

@class ACContentLocalContainer;
@class ACContentRemoteContainer;
@class ACFastThumb;
@class ACFileReference;
@class ACFileSource;

@interface ACDocumentContent : ACAbsContent {
 @public
  ACFileSource *source_;
  NSString *mimeType_;
  NSString *name_;
  ACFastThumb *fastThumb_;
}

#pragma mark Public

- (instancetype)initWithACContentLocalContainer:(ACContentLocalContainer *)contentContainer;

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

+ (ACDocumentContent *)createLocalWithNSString:(NSString *)fileName
                                       withInt:(jint)fileSize
                                  withNSString:(NSString *)descriptor
                                  withNSString:(NSString *)mimeType
                               withACFastThumb:(ACFastThumb *)fastThumb;

+ (ACDocumentContent *)createRemoteDocumentWithACFileReference:(ACFileReference *)reference
                                               withACFastThumb:(ACFastThumb *)fastThumb;

- (NSString *)getExt;

- (ACFastThumb *)getFastThumb;

- (NSString *)getMimeType;

- (NSString *)getName;

- (ACFileSource *)getSource;

@end

J2OBJC_EMPTY_STATIC_INIT(ACDocumentContent)

J2OBJC_FIELD_SETTER(ACDocumentContent, source_, ACFileSource *)
J2OBJC_FIELD_SETTER(ACDocumentContent, mimeType_, NSString *)
J2OBJC_FIELD_SETTER(ACDocumentContent, name_, NSString *)
J2OBJC_FIELD_SETTER(ACDocumentContent, fastThumb_, ACFastThumb *)

FOUNDATION_EXPORT ACDocumentContent *ACDocumentContent_createLocalWithNSString_withInt_withNSString_withNSString_withACFastThumb_(NSString *fileName, jint fileSize, NSString *descriptor, NSString *mimeType, ACFastThumb *fastThumb);

FOUNDATION_EXPORT ACDocumentContent *ACDocumentContent_createRemoteDocumentWithACFileReference_withACFastThumb_(ACFileReference *reference, ACFastThumb *fastThumb);

FOUNDATION_EXPORT void ACDocumentContent_initWithACContentRemoteContainer_(ACDocumentContent *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACDocumentContent *new_ACDocumentContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDocumentContent *create_ACDocumentContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT void ACDocumentContent_initWithACContentLocalContainer_(ACDocumentContent *self, ACContentLocalContainer *contentContainer);

FOUNDATION_EXPORT ACDocumentContent *new_ACDocumentContent_initWithACContentLocalContainer_(ACContentLocalContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDocumentContent *create_ACDocumentContent_initWithACContentLocalContainer_(ACContentLocalContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACDocumentContent)

@compatibility_alias ImActorCoreEntityContentDocumentContent ACDocumentContent;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntityContentDocumentContent")

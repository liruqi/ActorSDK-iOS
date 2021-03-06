//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/entity/Sticker.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreEntitySticker")
#ifdef RESTRICT_ImActorCoreEntitySticker
#define INCLUDE_ALL_ImActorCoreEntitySticker 0
#else
#define INCLUDE_ALL_ImActorCoreEntitySticker 1
#endif
#undef RESTRICT_ImActorCoreEntitySticker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACSticker_) && (INCLUDE_ALL_ImActorCoreEntitySticker || defined(INCLUDE_ACSticker))
#define ACSticker_

#define RESTRICT_ImActorCoreEntityWrapperEntity 1
#define INCLUDE_ACWrapperEntity 1
#include "../../../../im/actor/core/entity/WrapperEntity.h"

@class ACFileReference;
@class ARApiStickerDescriptor;
@class ARApiStickerMessage;
@class IOSByteArray;
@class JavaLangInteger;
@class JavaLangLong;
@protocol ARBserCreator;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ACSticker : ACWrapperEntity

+ (id<ARBserCreator>)CREATOR;

#pragma mark Public

- (instancetype)initWithARApiStickerDescriptor:(ARApiStickerDescriptor *)descriptor
                           withJavaLangInteger:(JavaLangInteger *)collectionId
                              withJavaLangLong:(JavaLangLong *)collectionAccessHash;

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (JavaLangLong * __nullable)getCollectionAccessHash;

- (JavaLangInteger * __nullable)getCollectionId;

- (NSString * __nullable)getEmoji;

- (jint)getId;

- (ACFileReference * __nonnull)getImage128;

- (ACFileReference * __nullable)getImage256;

- (ACFileReference * __nullable)getImage512;

- (ARApiStickerMessage *)toMessage;

#pragma mark Protected

- (void)applyWrappedWithARBserObject:(ARApiStickerDescriptor * __nonnull)wrapped;

- (ARApiStickerDescriptor * __nonnull)createInstance;

@end

J2OBJC_STATIC_INIT(ACSticker)

inline id<ARBserCreator> ACSticker_get_CREATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARBserCreator> ACSticker_CREATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACSticker, CREATOR, id<ARBserCreator>)

FOUNDATION_EXPORT void ACSticker_initWithARApiStickerDescriptor_withJavaLangInteger_withJavaLangLong_(ACSticker *self, ARApiStickerDescriptor *descriptor, JavaLangInteger *collectionId, JavaLangLong *collectionAccessHash);

FOUNDATION_EXPORT ACSticker *new_ACSticker_initWithARApiStickerDescriptor_withJavaLangInteger_withJavaLangLong_(ARApiStickerDescriptor *descriptor, JavaLangInteger *collectionId, JavaLangLong *collectionAccessHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACSticker *create_ACSticker_initWithARApiStickerDescriptor_withJavaLangInteger_withJavaLangLong_(ARApiStickerDescriptor *descriptor, JavaLangInteger *collectionId, JavaLangLong *collectionAccessHash);

FOUNDATION_EXPORT void ACSticker_initWithByteArray_(ACSticker *self, IOSByteArray *data);

FOUNDATION_EXPORT ACSticker *new_ACSticker_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACSticker *create_ACSticker_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ACSticker)

@compatibility_alias ImActorCoreEntitySticker ACSticker;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreEntitySticker")

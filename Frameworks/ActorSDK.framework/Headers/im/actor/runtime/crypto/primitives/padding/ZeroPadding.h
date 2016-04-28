//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/padding/ZeroPadding.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesPaddingZeroPadding_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding))
#define ImActorRuntimeCryptoPrimitivesPaddingZeroPadding_

#define RESTRICT_ImActorRuntimeCryptoPrimitivesPadding 1
#define INCLUDE_ImActorRuntimeCryptoPrimitivesPadding 1
#include "../../../../../../im/actor/runtime/crypto/primitives/Padding.h"

@class IOSByteArray;

/*!
 @brief Padding with zero bytes
 @author Steve Kite (steve@@actor.im)
 */
@interface ImActorRuntimeCryptoPrimitivesPaddingZeroPadding : NSObject < ImActorRuntimeCryptoPrimitivesPadding >

#pragma mark Public

- (instancetype)init;

- (void)paddingWithByteArray:(IOSByteArray *)src
                     withInt:(jint)offset
                     withInt:(jint)length;

- (jboolean)validateWithByteArray:(IOSByteArray *)src
                          withInt:(jint)offset
                          withInt:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesPaddingZeroPadding)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesPaddingZeroPadding_init(ImActorRuntimeCryptoPrimitivesPaddingZeroPadding *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesPaddingZeroPadding *new_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesPaddingZeroPadding *create_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesPaddingZeroPadding)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesPaddingZeroPadding")

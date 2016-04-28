//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/digest/GeneralDigest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesDigestGeneralDigest_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest))
#define ImActorRuntimeCryptoPrimitivesDigestGeneralDigest_

@class IOSByteArray;

/*!
 @brief base implementation of MD4 family style digest as outlined in
 "Handbook of Applied Cryptography", pages 344 - 347.
 */
@interface ImActorRuntimeCryptoPrimitivesDigestGeneralDigest : NSObject

#pragma mark Public

- (void)finish;

- (jint)getByteLength;

- (void)reset;

- (void)updateWithByte:(jbyte)inArg;

- (void)updateWithByteArray:(IOSByteArray *)inArg
                    withInt:(jint)inOff
                    withInt:(jint)len;

#pragma mark Protected

/*!
 @brief Standard constructor
 */
- (instancetype)init;

- (instancetype)initWithByteArray:(IOSByteArray *)encodedState;

/*!
 @brief Copy constructor.
 We are using copy constructors in place
 of the Object.clone() interface as this interface is not
 supported by J2ME.
 */
- (instancetype)initWithImActorRuntimeCryptoPrimitivesDigestGeneralDigest:(ImActorRuntimeCryptoPrimitivesDigestGeneralDigest *)t;

- (void)copyInWithImActorRuntimeCryptoPrimitivesDigestGeneralDigest:(ImActorRuntimeCryptoPrimitivesDigestGeneralDigest *)t OBJC_METHOD_FAMILY_NONE;

- (void)populateStateWithByteArray:(IOSByteArray *)state;

- (void)processBlock;

- (void)processLengthWithLong:(jlong)bitLength;

- (void)processWordWithByteArray:(IOSByteArray *)inArg
                         withInt:(jint)inOff;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesDigestGeneralDigest)

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesDigestGeneralDigest_init(ImActorRuntimeCryptoPrimitivesDigestGeneralDigest *self);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesDigestGeneralDigest_initWithImActorRuntimeCryptoPrimitivesDigestGeneralDigest_(ImActorRuntimeCryptoPrimitivesDigestGeneralDigest *self, ImActorRuntimeCryptoPrimitivesDigestGeneralDigest *t);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesDigestGeneralDigest_initWithByteArray_(ImActorRuntimeCryptoPrimitivesDigestGeneralDigest *self, IOSByteArray *encodedState);

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesDigestGeneralDigest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesDigestGeneralDigest")

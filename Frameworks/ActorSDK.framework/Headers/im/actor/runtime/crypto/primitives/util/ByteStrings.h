//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/crypto/primitives/util/ByteStrings.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesUtilByteStrings")
#ifdef RESTRICT_ImActorRuntimeCryptoPrimitivesUtilByteStrings
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesUtilByteStrings 0
#else
#define INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesUtilByteStrings 1
#endif
#undef RESTRICT_ImActorRuntimeCryptoPrimitivesUtilByteStrings

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorRuntimeCryptoPrimitivesUtilByteStrings_) && (INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesUtilByteStrings || defined(INCLUDE_ImActorRuntimeCryptoPrimitivesUtilByteStrings))
#define ImActorRuntimeCryptoPrimitivesUtilByteStrings_

@class IOSByteArray;
@class IOSObjectArray;

/*!
 @brief Various binary operation on binary strings
 @author Steve Kite (steve@@actor.im)
 */
@interface ImActorRuntimeCryptoPrimitivesUtilByteStrings : NSObject

#pragma mark Public

- (instancetype)init;

+ (jint)bytesToIntWithByteArray:(IOSByteArray *)data;

+ (jint)bytesToIntWithByteArray:(IOSByteArray *)data
                        withInt:(jint)offset;

+ (jlong)bytesToLongWithByteArray:(IOSByteArray *)data;

+ (jlong)bytesToLongWithByteArray:(IOSByteArray *)data
                          withInt:(jint)offset;

+ (jint)compareWithByteArray:(IOSByteArray *)a
               withByteArray:(IOSByteArray *)b;

+ (IOSByteArray *)intToBytesWithInt:(jint)v;

+ (jboolean)isEqualsWithByteArray:(IOSByteArray *)a
                    withByteArray:(IOSByteArray *)b;

+ (IOSByteArray *)longToBytesWithLong:(jlong)v;

+ (IOSByteArray *)mergeWithByteArray2:(IOSObjectArray *)data;

+ (IOSByteArray *)substringWithByteArray:(IOSByteArray *)data
                                 withInt:(jint)offset
                                 withInt:(jint)size;

+ (void)writeWithByteArray:(IOSByteArray *)dest
                   withInt:(jint)destOffset
             withByteArray:(IOSByteArray *)src
                   withInt:(jint)srcOffset
                   withInt:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorRuntimeCryptoPrimitivesUtilByteStrings)

FOUNDATION_EXPORT IOSByteArray *ImActorRuntimeCryptoPrimitivesUtilByteStrings_longToBytesWithLong_(jlong v);

FOUNDATION_EXPORT IOSByteArray *ImActorRuntimeCryptoPrimitivesUtilByteStrings_intToBytesWithInt_(jint v);

FOUNDATION_EXPORT jlong ImActorRuntimeCryptoPrimitivesUtilByteStrings_bytesToLongWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT jlong ImActorRuntimeCryptoPrimitivesUtilByteStrings_bytesToLongWithByteArray_withInt_(IOSByteArray *data, jint offset);

FOUNDATION_EXPORT jint ImActorRuntimeCryptoPrimitivesUtilByteStrings_bytesToIntWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT jint ImActorRuntimeCryptoPrimitivesUtilByteStrings_bytesToIntWithByteArray_withInt_(IOSByteArray *data, jint offset);

FOUNDATION_EXPORT IOSByteArray *ImActorRuntimeCryptoPrimitivesUtilByteStrings_substringWithByteArray_withInt_withInt_(IOSByteArray *data, jint offset, jint size);

FOUNDATION_EXPORT IOSByteArray *ImActorRuntimeCryptoPrimitivesUtilByteStrings_mergeWithByteArray2_(IOSObjectArray *data);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesUtilByteStrings_writeWithByteArray_withInt_withByteArray_withInt_withInt_(IOSByteArray *dest, jint destOffset, IOSByteArray *src, jint srcOffset, jint length);

FOUNDATION_EXPORT jboolean ImActorRuntimeCryptoPrimitivesUtilByteStrings_isEqualsWithByteArray_withByteArray_(IOSByteArray *a, IOSByteArray *b);

FOUNDATION_EXPORT jint ImActorRuntimeCryptoPrimitivesUtilByteStrings_compareWithByteArray_withByteArray_(IOSByteArray *a, IOSByteArray *b);

FOUNDATION_EXPORT void ImActorRuntimeCryptoPrimitivesUtilByteStrings_init(ImActorRuntimeCryptoPrimitivesUtilByteStrings *self);

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesUtilByteStrings *new_ImActorRuntimeCryptoPrimitivesUtilByteStrings_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorRuntimeCryptoPrimitivesUtilByteStrings *create_ImActorRuntimeCryptoPrimitivesUtilByteStrings_init();

J2OBJC_TYPE_LITERAL_HEADER(ImActorRuntimeCryptoPrimitivesUtilByteStrings)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeCryptoPrimitivesUtilByteStrings")

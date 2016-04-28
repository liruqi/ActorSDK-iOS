//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/bser/Utils.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeBserUtils")
#ifdef RESTRICT_ImActorRuntimeBserUtils
#define INCLUDE_ALL_ImActorRuntimeBserUtils 0
#else
#define INCLUDE_ALL_ImActorRuntimeBserUtils 1
#endif
#undef RESTRICT_ImActorRuntimeBserUtils

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUtils_) && (INCLUDE_ALL_ImActorRuntimeBserUtils || defined(INCLUDE_ARUtils))
#define ARUtils_

@class IOSByteArray;

@interface ARUtils : NSObject

#pragma mark Public

+ (NSString *)byteArrayToStringWithByteArray:(IOSByteArray *)data;

+ (NSString *)byteArrayToStringCompactWithByteArray:(IOSByteArray *)data;

+ (jlong)bytesToIntWithByteArray:(IOSByteArray *)data;

+ (jlong)bytesToLongWithByteArray:(IOSByteArray *)data;

+ (jint)convertIntWithLong:(jlong)val;

+ (NSString *)convertStringWithByteArray:(IOSByteArray *)data;

+ (IOSByteArray *)intToBytesWithInt:(jint)v;

+ (IOSByteArray *)longToBytesWithLong:(jlong)v;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUtils)

FOUNDATION_EXPORT jint ARUtils_convertIntWithLong_(jlong val);

FOUNDATION_EXPORT NSString *ARUtils_convertStringWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT NSString *ARUtils_byteArrayToStringWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT NSString *ARUtils_byteArrayToStringCompactWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT IOSByteArray *ARUtils_intToBytesWithInt_(jint v);

FOUNDATION_EXPORT jlong ARUtils_bytesToIntWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT IOSByteArray *ARUtils_longToBytesWithLong_(jlong v);

FOUNDATION_EXPORT jlong ARUtils_bytesToLongWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ARUtils)

@compatibility_alias ImActorRuntimeBserUtils ARUtils;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeBserUtils")

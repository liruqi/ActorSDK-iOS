//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/bser/DataInput.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeBserDataInput")
#ifdef RESTRICT_ImActorRuntimeBserDataInput
#define INCLUDE_ALL_ImActorRuntimeBserDataInput 0
#else
#define INCLUDE_ALL_ImActorRuntimeBserDataInput 1
#endif
#undef RESTRICT_ImActorRuntimeBserDataInput

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDataInput_) && (INCLUDE_ALL_ImActorRuntimeBserDataInput || defined(INCLUDE_ARDataInput))
#define ARDataInput_

@class IOSByteArray;
@class IOSLongArray;

@interface ARDataInput : NSObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithByteArray:(IOSByteArray *)data
                          withInt:(jint)offset
                          withInt:(jint)len;

- (IOSByteArray *)getData;

- (jint)getOffset;

- (jboolean)isEOF;

- (jint)readByte;

- (IOSByteArray *)readBytesWithInt:(jint)count;

- (jint)readInt;

- (jlong)readLong;

- (jboolean)readProtoBool;

- (IOSByteArray *)readProtoBytes;

- (IOSLongArray *)readProtoLongs;

- (NSString *)readProtoString;

- (jlong)readUInt;

- (jlong)readVarInt;

- (jint)readVarInt32;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDataInput)

FOUNDATION_EXPORT void ARDataInput_initWithByteArray_(ARDataInput *self, IOSByteArray *data);

FOUNDATION_EXPORT ARDataInput *new_ARDataInput_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDataInput *create_ARDataInput_initWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARDataInput_initWithByteArray_withInt_withInt_(ARDataInput *self, IOSByteArray *data, jint offset, jint len);

FOUNDATION_EXPORT ARDataInput *new_ARDataInput_initWithByteArray_withInt_withInt_(IOSByteArray *data, jint offset, jint len) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDataInput *create_ARDataInput_initWithByteArray_withInt_withInt_(IOSByteArray *data, jint offset, jint len);

J2OBJC_TYPE_LITERAL_HEADER(ARDataInput)

@compatibility_alias ImActorRuntimeBserDataInput ARDataInput;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeBserDataInput")

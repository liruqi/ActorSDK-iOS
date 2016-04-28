//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateEventBusMessage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusMessage")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateEventBusMessage
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusMessage 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusMessage 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateEventBusMessage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateEventBusMessage_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusMessage || defined(INCLUDE_ARUpdateEventBusMessage))
#define ARUpdateEventBusMessage_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class JavaLangInteger;
@class JavaLangLong;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateEventBusMessage : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)id_
             withJavaLangInteger:(JavaLangInteger * __nullable)senderId
                withJavaLangLong:(JavaLangLong * __nullable)senderDeviceId
                   withByteArray:(IOSByteArray * __nonnull)message;

+ (ARUpdateEventBusMessage *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getId;

- (IOSByteArray * __nonnull)getMessage;

- (JavaLangLong * __nullable)getSenderDeviceId;

- (JavaLangInteger * __nullable)getSenderId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateEventBusMessage)

inline jint ARUpdateEventBusMessage_get_HEADER();
#define ARUpdateEventBusMessage_HEADER 2562
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateEventBusMessage, HEADER, jint)

FOUNDATION_EXPORT ARUpdateEventBusMessage *ARUpdateEventBusMessage_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateEventBusMessage_initWithNSString_withJavaLangInteger_withJavaLangLong_withByteArray_(ARUpdateEventBusMessage *self, NSString *id_, JavaLangInteger *senderId, JavaLangLong *senderDeviceId, IOSByteArray *message);

FOUNDATION_EXPORT ARUpdateEventBusMessage *new_ARUpdateEventBusMessage_initWithNSString_withJavaLangInteger_withJavaLangLong_withByteArray_(NSString *id_, JavaLangInteger *senderId, JavaLangLong *senderDeviceId, IOSByteArray *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateEventBusMessage *create_ARUpdateEventBusMessage_initWithNSString_withJavaLangInteger_withJavaLangLong_withByteArray_(NSString *id_, JavaLangInteger *senderId, JavaLangLong *senderDeviceId, IOSByteArray *message);

FOUNDATION_EXPORT void ARUpdateEventBusMessage_init(ARUpdateEventBusMessage *self);

FOUNDATION_EXPORT ARUpdateEventBusMessage *new_ARUpdateEventBusMessage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateEventBusMessage *create_ARUpdateEventBusMessage_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateEventBusMessage)

@compatibility_alias ImActorCoreApiUpdatesUpdateEventBusMessage ARUpdateEventBusMessage;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateEventBusMessage")

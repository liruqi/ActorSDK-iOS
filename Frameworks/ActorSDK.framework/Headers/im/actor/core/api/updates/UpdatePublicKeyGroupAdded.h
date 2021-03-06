//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdatePublicKeyGroupAdded.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdatePublicKeyGroupAdded")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdatePublicKeyGroupAdded
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdatePublicKeyGroupAdded 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdatePublicKeyGroupAdded 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdatePublicKeyGroupAdded

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdatePublicKeyGroupAdded_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdatePublicKeyGroupAdded || defined(INCLUDE_ARUpdatePublicKeyGroupAdded))
#define ARUpdatePublicKeyGroupAdded_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARApiEncryptionKeyGroup;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdatePublicKeyGroupAdded : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)uid
withARApiEncryptionKeyGroup:(ARApiEncryptionKeyGroup * __nonnull)keyGroup;

+ (ARUpdatePublicKeyGroupAdded *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiEncryptionKeyGroup * __nonnull)getKeyGroup;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdatePublicKeyGroupAdded)

inline jint ARUpdatePublicKeyGroupAdded_get_HEADER();
#define ARUpdatePublicKeyGroupAdded_HEADER 104
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdatePublicKeyGroupAdded, HEADER, jint)

FOUNDATION_EXPORT ARUpdatePublicKeyGroupAdded *ARUpdatePublicKeyGroupAdded_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdatePublicKeyGroupAdded_initWithInt_withARApiEncryptionKeyGroup_(ARUpdatePublicKeyGroupAdded *self, jint uid, ARApiEncryptionKeyGroup *keyGroup);

FOUNDATION_EXPORT ARUpdatePublicKeyGroupAdded *new_ARUpdatePublicKeyGroupAdded_initWithInt_withARApiEncryptionKeyGroup_(jint uid, ARApiEncryptionKeyGroup *keyGroup) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdatePublicKeyGroupAdded *create_ARUpdatePublicKeyGroupAdded_initWithInt_withARApiEncryptionKeyGroup_(jint uid, ARApiEncryptionKeyGroup *keyGroup);

FOUNDATION_EXPORT void ARUpdatePublicKeyGroupAdded_init(ARUpdatePublicKeyGroupAdded *self);

FOUNDATION_EXPORT ARUpdatePublicKeyGroupAdded *new_ARUpdatePublicKeyGroupAdded_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdatePublicKeyGroupAdded *create_ARUpdatePublicKeyGroupAdded_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdatePublicKeyGroupAdded)

@compatibility_alias ImActorCoreApiUpdatesUpdatePublicKeyGroupAdded ARUpdatePublicKeyGroupAdded;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdatePublicKeyGroupAdded")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/updates/UpdateUserAboutChanged.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateUserAboutChanged")
#ifdef RESTRICT_ImActorCoreApiUpdatesUpdateUserAboutChanged
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateUserAboutChanged 0
#else
#define INCLUDE_ALL_ImActorCoreApiUpdatesUpdateUserAboutChanged 1
#endif
#undef RESTRICT_ImActorCoreApiUpdatesUpdateUserAboutChanged

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateUserAboutChanged_) && (INCLUDE_ALL_ImActorCoreApiUpdatesUpdateUserAboutChanged || defined(INCLUDE_ARUpdateUserAboutChanged))
#define ARUpdateUserAboutChanged_

#define RESTRICT_ImActorCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/actor/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateUserAboutChanged : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)uid
               withNSString:(NSString * __nullable)about;

+ (ARUpdateUserAboutChanged *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nullable)getAbout;

- (jint)getHeaderKey;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateUserAboutChanged)

inline jint ARUpdateUserAboutChanged_get_HEADER();
#define ARUpdateUserAboutChanged_HEADER 210
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateUserAboutChanged, HEADER, jint)

FOUNDATION_EXPORT ARUpdateUserAboutChanged *ARUpdateUserAboutChanged_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateUserAboutChanged_initWithInt_withNSString_(ARUpdateUserAboutChanged *self, jint uid, NSString *about);

FOUNDATION_EXPORT ARUpdateUserAboutChanged *new_ARUpdateUserAboutChanged_initWithInt_withNSString_(jint uid, NSString *about) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateUserAboutChanged *create_ARUpdateUserAboutChanged_initWithInt_withNSString_(jint uid, NSString *about);

FOUNDATION_EXPORT void ARUpdateUserAboutChanged_init(ARUpdateUserAboutChanged *self);

FOUNDATION_EXPORT ARUpdateUserAboutChanged *new_ARUpdateUserAboutChanged_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateUserAboutChanged *create_ARUpdateUserAboutChanged_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateUserAboutChanged)

@compatibility_alias ImActorCoreApiUpdatesUpdateUserAboutChanged ARUpdateUserAboutChanged;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiUpdatesUpdateUserAboutChanged")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/api/rpc/RequestFavouriteDialog.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestFavouriteDialog")
#ifdef RESTRICT_ImActorCoreApiRpcRequestFavouriteDialog
#define INCLUDE_ALL_ImActorCoreApiRpcRequestFavouriteDialog 0
#else
#define INCLUDE_ALL_ImActorCoreApiRpcRequestFavouriteDialog 1
#endif
#undef RESTRICT_ImActorCoreApiRpcRequestFavouriteDialog

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestFavouriteDialog_) && (INCLUDE_ALL_ImActorCoreApiRpcRequestFavouriteDialog || defined(INCLUDE_ARRequestFavouriteDialog))
#define ARRequestFavouriteDialog_

#define RESTRICT_ImActorCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/actor/core/network/parser/Request.h"

@class ARApiOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestFavouriteDialog : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiOutPeer:(ARApiOutPeer * __nonnull)peer;

+ (ARRequestFavouriteDialog *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiOutPeer * __nonnull)getPeer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestFavouriteDialog)

inline jint ARRequestFavouriteDialog_get_HEADER();
#define ARRequestFavouriteDialog_HEADER 224
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestFavouriteDialog, HEADER, jint)

FOUNDATION_EXPORT ARRequestFavouriteDialog *ARRequestFavouriteDialog_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestFavouriteDialog_initWithARApiOutPeer_(ARRequestFavouriteDialog *self, ARApiOutPeer *peer);

FOUNDATION_EXPORT ARRequestFavouriteDialog *new_ARRequestFavouriteDialog_initWithARApiOutPeer_(ARApiOutPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestFavouriteDialog *create_ARRequestFavouriteDialog_initWithARApiOutPeer_(ARApiOutPeer *peer);

FOUNDATION_EXPORT void ARRequestFavouriteDialog_init(ARRequestFavouriteDialog *self);

FOUNDATION_EXPORT ARRequestFavouriteDialog *new_ARRequestFavouriteDialog_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestFavouriteDialog *create_ARRequestFavouriteDialog_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestFavouriteDialog)

@compatibility_alias ImActorCoreApiRpcRequestFavouriteDialog ARRequestFavouriteDialog;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiRpcRequestFavouriteDialog")

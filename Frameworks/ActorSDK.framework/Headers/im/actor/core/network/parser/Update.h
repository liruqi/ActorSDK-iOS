//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/network/parser/Update.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreNetworkParserUpdate")
#ifdef RESTRICT_ImActorCoreNetworkParserUpdate
#define INCLUDE_ALL_ImActorCoreNetworkParserUpdate 0
#else
#define INCLUDE_ALL_ImActorCoreNetworkParserUpdate 1
#endif
#undef RESTRICT_ImActorCoreNetworkParserUpdate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACUpdate_) && (INCLUDE_ALL_ImActorCoreNetworkParserUpdate || defined(INCLUDE_ACUpdate))
#define ACUpdate_

#define RESTRICT_ImActorCoreNetworkParserHeaderBserObject 1
#define INCLUDE_ACHeaderBserObject 1
#include "../../../../../im/actor/core/network/parser/HeaderBserObject.h"

@interface ACUpdate : ACHeaderBserObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ACUpdate)

FOUNDATION_EXPORT void ACUpdate_init(ACUpdate *self);

J2OBJC_TYPE_LITERAL_HEADER(ACUpdate)

@compatibility_alias ImActorCoreNetworkParserUpdate ACUpdate;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreNetworkParserUpdate")

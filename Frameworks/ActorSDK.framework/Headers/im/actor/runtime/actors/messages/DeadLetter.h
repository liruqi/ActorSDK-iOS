//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/im/actor/runtime/actors/messages/DeadLetter.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorRuntimeActorsMessagesDeadLetter")
#ifdef RESTRICT_ImActorRuntimeActorsMessagesDeadLetter
#define INCLUDE_ALL_ImActorRuntimeActorsMessagesDeadLetter 0
#else
#define INCLUDE_ALL_ImActorRuntimeActorsMessagesDeadLetter 1
#endif
#undef RESTRICT_ImActorRuntimeActorsMessagesDeadLetter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDeadLetter_) && (INCLUDE_ALL_ImActorRuntimeActorsMessagesDeadLetter || defined(INCLUDE_ARDeadLetter))
#define ARDeadLetter_

/*!
 @brief DeadLetter sent whet message was not processed by target actor
 */
@interface ARDeadLetter : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)message;

- (id)getMessage;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDeadLetter)

FOUNDATION_EXPORT void ARDeadLetter_initWithId_(ARDeadLetter *self, id message);

FOUNDATION_EXPORT ARDeadLetter *new_ARDeadLetter_initWithId_(id message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDeadLetter *create_ARDeadLetter_initWithId_(id message);

J2OBJC_TYPE_LITERAL_HEADER(ARDeadLetter)

@compatibility_alias ImActorRuntimeActorsMessagesDeadLetter ARDeadLetter;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorRuntimeActorsMessagesDeadLetter")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/analytics/Event.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreAnalyticsEvent")
#ifdef RESTRICT_ImActorCoreAnalyticsEvent
#define INCLUDE_ALL_ImActorCoreAnalyticsEvent 0
#else
#define INCLUDE_ALL_ImActorCoreAnalyticsEvent 1
#endif
#undef RESTRICT_ImActorCoreAnalyticsEvent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACEvent_) && (INCLUDE_ALL_ImActorCoreAnalyticsEvent || defined(INCLUDE_ACEvent))
#define ACEvent_

@class ARApiRawValue;

@interface ACEvent : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)actionType
                    withNSString:(NSString *)actionId
                    withNSString:(NSString *)actionTitle
               withARApiRawValue:(ARApiRawValue *)params;

- (NSString *)getActionId;

- (NSString *)getActionTitle;

- (NSString *)getActionType;

- (ARApiRawValue *)getParams;

@end

J2OBJC_EMPTY_STATIC_INIT(ACEvent)

FOUNDATION_EXPORT void ACEvent_initWithNSString_withNSString_withNSString_withARApiRawValue_(ACEvent *self, NSString *actionType, NSString *actionId, NSString *actionTitle, ARApiRawValue *params);

FOUNDATION_EXPORT ACEvent *new_ACEvent_initWithNSString_withNSString_withNSString_withARApiRawValue_(NSString *actionType, NSString *actionId, NSString *actionTitle, ARApiRawValue *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACEvent *create_ACEvent_initWithNSString_withNSString_withNSString_withARApiRawValue_(NSString *actionType, NSString *actionId, NSString *actionTitle, ARApiRawValue *params);

J2OBJC_TYPE_LITERAL_HEADER(ACEvent)

@compatibility_alias ImActorCoreAnalyticsEvent ACEvent;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreAnalyticsEvent")

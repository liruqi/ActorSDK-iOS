//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/providers/PhoneBookProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreProvidersPhoneBookProvider")
#ifdef RESTRICT_ImActorCoreProvidersPhoneBookProvider
#define INCLUDE_ALL_ImActorCoreProvidersPhoneBookProvider 0
#else
#define INCLUDE_ALL_ImActorCoreProvidersPhoneBookProvider 1
#endif
#undef RESTRICT_ImActorCoreProvidersPhoneBookProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACPhoneBookProvider_) && (INCLUDE_ALL_ImActorCoreProvidersPhoneBookProvider || defined(INCLUDE_ACPhoneBookProvider))
#define ACPhoneBookProvider_

@protocol ACPhoneBookProvider_Callback;

/*!
 @brief Provider for PhoneBook import.
 If not available use EmptyPhoneProvider.
 Call Messenger.onPhoneBookChanged when you detect possible phone book changes.
 */
@protocol ACPhoneBookProvider < NSObject, JavaObject >

/*!
 @brief Perform async phone book loading
 @param callback completion callback
 */
- (void)loadPhoneBookWithCallback:(id<ACPhoneBookProvider_Callback>)callback;

@end

J2OBJC_EMPTY_STATIC_INIT(ACPhoneBookProvider)

J2OBJC_TYPE_LITERAL_HEADER(ACPhoneBookProvider)

#define ImActorCoreProvidersPhoneBookProvider ACPhoneBookProvider

#endif

#if !defined (ACPhoneBookProvider_Callback_) && (INCLUDE_ALL_ImActorCoreProvidersPhoneBookProvider || defined(INCLUDE_ACPhoneBookProvider_Callback))
#define ACPhoneBookProvider_Callback_

@protocol JavaUtilList;

/*!
 @brief Callback about phone book load
 */
@protocol ACPhoneBookProvider_Callback < NSObject, JavaObject >

/*!
 @brief On PhoneBook loaded
 @param contacts loaded contacts
 */
- (void)onLoadedWithContacts:(id<JavaUtilList>)contacts;

@end

J2OBJC_EMPTY_STATIC_INIT(ACPhoneBookProvider_Callback)

J2OBJC_TYPE_LITERAL_HEADER(ACPhoneBookProvider_Callback)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreProvidersPhoneBookProvider")

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/ApiConfiguration.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreApiConfiguration")
#ifdef RESTRICT_ImActorCoreApiConfiguration
#define INCLUDE_ALL_ImActorCoreApiConfiguration 0
#else
#define INCLUDE_ALL_ImActorCoreApiConfiguration 1
#endif
#undef RESTRICT_ImActorCoreApiConfiguration

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACApiConfiguration_) && (INCLUDE_ALL_ImActorCoreApiConfiguration || defined(INCLUDE_ACApiConfiguration))
#define ACApiConfiguration_

/*!
 @brief API Configuration for accessing Actor Platform servers
 */
@interface ACApiConfiguration : NSObject

#pragma mark Public

/*!
 @brief Construct API Configuration
 @param appTitle     title of application
 @param appId        app id for API
 @param appKey       app key for API
 @param deviceTitle  device title
 @param deviceString device unique key
 */
- (instancetype)initWithAppTitle:(NSString *)appTitle
                       withAppId:(jint)appId
                      withAppKey:(NSString *)appKey
                 withDeviceTitle:(NSString *)deviceTitle
                    withDeviceId:(NSString *)deviceString;

/*!
 @brief Get App API Id
 @return the App Id
 */
- (jint)getAppId;

/*!
 @brief Get App API Key
 @return the App Key
 */
- (NSString *)getAppKey;

/*!
 @brief Get App Title
 @return the App Title
 */
- (NSString *)getAppTitle;

/*!
 @brief Get Device unique string
 @return the Unique String
 */
- (NSString *)getDeviceString;

/*!
 @brief Get Device Title
 @return the Device Title
 */
- (NSString *)getDeviceTitle;

@end

J2OBJC_EMPTY_STATIC_INIT(ACApiConfiguration)

FOUNDATION_EXPORT void ACApiConfiguration_initWithAppTitle_withAppId_withAppKey_withDeviceTitle_withDeviceId_(ACApiConfiguration *self, NSString *appTitle, jint appId, NSString *appKey, NSString *deviceTitle, NSString *deviceString);

FOUNDATION_EXPORT ACApiConfiguration *new_ACApiConfiguration_initWithAppTitle_withAppId_withAppKey_withDeviceTitle_withDeviceId_(NSString *appTitle, jint appId, NSString *appKey, NSString *deviceTitle, NSString *deviceString) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACApiConfiguration *create_ACApiConfiguration_initWithAppTitle_withAppId_withAppKey_withDeviceTitle_withDeviceId_(NSString *appTitle, jint appId, NSString *appKey, NSString *deviceTitle, NSString *deviceString);

J2OBJC_TYPE_LITERAL_HEADER(ACApiConfiguration)

@compatibility_alias ImActorCoreApiConfiguration ACApiConfiguration;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreApiConfiguration")

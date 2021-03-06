//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/core/core-shared/src/main/java/im/actor/core/modules/file/entity/Downloaded.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImActorCoreModulesFileEntityDownloaded")
#ifdef RESTRICT_ImActorCoreModulesFileEntityDownloaded
#define INCLUDE_ALL_ImActorCoreModulesFileEntityDownloaded 0
#else
#define INCLUDE_ALL_ImActorCoreModulesFileEntityDownloaded 1
#endif
#undef RESTRICT_ImActorCoreModulesFileEntityDownloaded

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImActorCoreModulesFileEntityDownloaded_) && (INCLUDE_ALL_ImActorCoreModulesFileEntityDownloaded || defined(INCLUDE_ImActorCoreModulesFileEntityDownloaded))
#define ImActorCoreModulesFileEntityDownloaded_

#define RESTRICT_ImActorRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/actor/runtime/bser/BserObject.h"

#define RESTRICT_ImActorRuntimeStorageKeyValueItem 1
#define INCLUDE_ARKeyValueItem 1
#include "../../../../../../im/actor/runtime/storage/KeyValueItem.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ImActorCoreModulesFileEntityDownloaded : ARBserObject < ARKeyValueItem >

#pragma mark Public

- (instancetype)initWithLong:(jlong)fileId
                     withInt:(jint)fileSize
                withNSString:(NSString *)descriptor;

+ (ImActorCoreModulesFileEntityDownloaded *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString *)getDescriptor;

- (jlong)getEngineId;

- (jlong)getFileId;

- (jint)getFileSize;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorCoreModulesFileEntityDownloaded)

FOUNDATION_EXPORT ImActorCoreModulesFileEntityDownloaded *ImActorCoreModulesFileEntityDownloaded_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ImActorCoreModulesFileEntityDownloaded_initWithLong_withInt_withNSString_(ImActorCoreModulesFileEntityDownloaded *self, jlong fileId, jint fileSize, NSString *descriptor);

FOUNDATION_EXPORT ImActorCoreModulesFileEntityDownloaded *new_ImActorCoreModulesFileEntityDownloaded_initWithLong_withInt_withNSString_(jlong fileId, jint fileSize, NSString *descriptor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImActorCoreModulesFileEntityDownloaded *create_ImActorCoreModulesFileEntityDownloaded_initWithLong_withInt_withNSString_(jlong fileId, jint fileSize, NSString *descriptor);

J2OBJC_TYPE_LITERAL_HEADER(ImActorCoreModulesFileEntityDownloaded)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImActorCoreModulesFileEntityDownloaded")

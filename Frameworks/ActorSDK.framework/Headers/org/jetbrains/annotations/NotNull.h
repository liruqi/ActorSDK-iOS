//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/liruqi/Documents/github/actor-platform/actor-sdk/sdk-core/runtime/runtime-shared/src/main/java/org/jetbrains/annotations/NotNull.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_OrgJetbrainsAnnotationsNotNull")
#ifdef RESTRICT_OrgJetbrainsAnnotationsNotNull
#define INCLUDE_ALL_OrgJetbrainsAnnotationsNotNull 0
#else
#define INCLUDE_ALL_OrgJetbrainsAnnotationsNotNull 1
#endif
#undef RESTRICT_OrgJetbrainsAnnotationsNotNull

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJetbrainsAnnotationsNotNull_) && (INCLUDE_ALL_OrgJetbrainsAnnotationsNotNull || defined(INCLUDE_OrgJetbrainsAnnotationsNotNull))
#define OrgJetbrainsAnnotationsNotNull_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
@import j2objc;

/*!
 @brief An element annotated with NotNull claims <code>null</code> value is <em>forbidden</em>
 to return (for methods), pass to (parameters) and hold (local variables and fields).
 Apart from documentation purposes this annotation is intended to be used by static analysis tools
 to validate against probable runtime errors and element contract violations.
 @author max
 */
@protocol OrgJetbrainsAnnotationsNotNull < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJetbrainsAnnotationsNotNull)

J2OBJC_TYPE_LITERAL_HEADER(OrgJetbrainsAnnotationsNotNull)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJetbrainsAnnotationsNotNull")

// Generated by Apple Swift version 5.1 (swiftlang-1100.0.270.13 clang-1100.0.33.7)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PBFrameworkVideoStories",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSManagedObjectContext;
@class NSPredicate;
@class Theme;

SWIFT_CLASS("_TtC23PBFrameworkVideoStories9CDManager") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface CDManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) CDManager * _Nonnull shared;)
+ (CDManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (NSArray<Theme *> * _Nonnull)fetchAllThemesIn:(NSManagedObjectContext * _Nullable)context predicate:(NSPredicate * _Nullable)predicate SWIFT_WARN_UNUSED_RESULT;
- (Theme * _Nullable)fetchThemeByID:(NSString * _Nonnull)id in:(NSManagedObjectContext * _Nullable)context SWIFT_WARN_UNUSED_RESULT;
- (Theme * _Nullable)fetchThemeByAssetLocationURL:(NSString * _Nonnull)assetLocationURL in:(NSManagedObjectContext * _Nullable)context SWIFT_WARN_UNUSED_RESULT;
- (void)saveWithContext:(NSManagedObjectContext * _Nullable)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@class NSEntityDescription;

SWIFT_CLASS_NAMED("Filter")
@interface Filter : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class ThemeAsset;

@interface Filter (SWIFT_EXTENSION(PBFrameworkVideoStories))
@property (nonatomic) int16_t displayOrder;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, strong) ThemeAsset * _Nullable themeAsset;
@end


SWIFT_CLASS("_TtC23PBFrameworkVideoStories12PBBibService")
@interface PBBibService : NSObject
@property (nonatomic) double pThreshold;
@property (nonatomic) double pLowerThreshold;
@property (nonatomic, copy) NSString * _Nullable urlString;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)getRaceMetaWithRaceMetaLoaded:(void (^ _Nullable)(BOOL, id _Nullable))raceMetaLoaded;
- (void)searchPhotosWithBib:(NSString * _Nonnull)bib completion:(void (^ _Nullable)(NSArray<NSDictionary<NSString *, id> *> * _Nonnull))completion;
@end


SWIFT_CLASS("_TtC23PBFrameworkVideoStories14PBPhotoService")
@interface PBPhotoService : NSObject
+ (void)setupTempJSONsWithTheme:(Theme * _Nonnull)theme completion:(void (^ _Nullable)(void))completion;
+ (NSURL * _Nullable)themeJSONPathWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)indexHtmlURLBy:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)audioFileURLBy:(NSString * _Nonnull)name fileName:(NSString * _Nonnull)fileName SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)themeDirectoryPathBy:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;
@class UIImage;

SWIFT_CLASS("_TtC23PBFrameworkVideoStories25PBSpinnerLoadingImageView")
@interface PBSpinnerLoadingImageView : UIImageView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@property (nonatomic, getter=isHidden) BOOL hidden;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage SWIFT_UNAVAILABLE;
@end

@protocol UIViewControllerTransitionCoordinator;

SWIFT_CLASS("_TtC23PBFrameworkVideoStories28PBThemeDetailsViewController")
@interface PBThemeDetailsViewController : UIViewController
+ (PBThemeDetailsViewController * _Nonnull)createWith:(Theme * _Nonnull)theme themeFilePathURL:(NSURL * _Nullable)themeFilePathURL dataJSONFilePathURL:(NSURL * _Nullable)dataJSONFilePathURL audioFilePathURL:(NSURL * _Nullable)audioFilePathURL indexHTMLFilePathURL:(NSURL * _Nullable)indexHTMLFilePathURL SWIFT_WARN_UNUSED_RESULT;
- (void)assignStreamWithStream:(NSDictionary<NSString *, id> * _Nonnull)stream;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)viewWillLayoutSubviews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class UITableViewCell;

@interface PBThemeDetailsViewController (SWIFT_EXTENSION(PBFrameworkVideoStories)) <UITableViewDataSource>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end






@interface PBThemeDetailsViewController (SWIFT_EXTENSION(PBFrameworkVideoStories)) <UITableViewDelegate>
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end










SWIFT_CLASS("_TtC23PBFrameworkVideoStories29PBVideoStoryDownloaderService")
@interface PBVideoStoryDownloaderService : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface PBVideoStoryDownloaderService (SWIFT_EXTENSION(PBFrameworkVideoStories))
- (void)downloadVideoStoryAndUpdateImagesWithVideoStoryThemeURL:(NSURL * _Nonnull)videoStoryThemeURL imagesToCopy:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)imagesToCopy successBlock:(void (^ _Nullable)(NSURL * _Nullable, NSURL * _Nullable, NSURL * _Nullable, NSURL * _Nullable, NSURL * _Nullable, NSDictionary<NSString *, id> * _Nullable))successBlock failureBlock:(void (^ _Nullable)(NSError * _Nullable))failureBlock;
@end






SWIFT_CLASS_NAMED("Theme")
@interface Theme : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@class NSSet;

@interface Theme (SWIFT_EXTENSION(PBFrameworkVideoStories))
- (void)addThemeAssetObject:(ThemeAsset * _Nonnull)value;
- (void)removeThemeAssetObject:(ThemeAsset * _Nonnull)value;
- (void)addThemeAsset:(NSSet * _Nonnull)values;
- (void)removeThemeAsset:(NSSet * _Nonnull)values;
@end


@interface Theme (SWIFT_EXTENSION(PBFrameworkVideoStories))
@property (nonatomic, copy) NSString * _Nullable assetLocationURL;
@property (nonatomic, copy) NSString * _Nullable audioTrackFileName;
@property (nonatomic, copy) NSString * _Nullable audioTrackFileType;
@property (nonatomic, copy) NSString * _Nullable audioTrackTitle;
@property (nonatomic, copy) NSString * _Nullable creationDate;
@property (nonatomic, copy) NSString * _Nullable currentDownloadedVersion;
@property (nonatomic, copy) NSString * _Nullable heroURL;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isFromZIP;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isNative;
@property (nonatomic, copy) NSString * _Nullable jsonFileName;
@property (nonatomic, copy) NSString * _Nullable lengthInMS;
@property (nonatomic, copy) NSString * _Nullable nm;
@property (nonatomic, copy) NSArray<NSDictionary<NSString *, id> *> * _Nullable photoNames;
@property (nonatomic, copy) NSString * _Nullable postrollCoverURL;
@property (nonatomic, copy) NSString * _Nullable prerollCoverURL;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable version;
@property (nonatomic, copy) NSArray<NSDictionary<NSString *, id> *> * _Nullable webFiles;
@property (nonatomic, strong) NSSet * _Nullable themeAsset;
@end


SWIFT_CLASS_NAMED("ThemeAsset")
@interface ThemeAsset : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface ThemeAsset (SWIFT_EXTENSION(PBFrameworkVideoStories))
- (void)addFilterObject:(Filter * _Nonnull)value;
- (void)removeFilterObject:(Filter * _Nonnull)value;
- (void)addFilter:(NSSet * _Nonnull)values;
- (void)removeFilter:(NSSet * _Nonnull)values;
@end


@interface ThemeAsset (SWIFT_EXTENSION(PBFrameworkVideoStories))
@property (nonatomic) int16_t displayOrder;
@property (nonatomic, copy) NSString * _Nullable filename;
@property (nonatomic) int32_t previewFrame;
@property (nonatomic) int16_t sizeHeight;
@property (nonatomic) int16_t sizeWidth;
@property (nonatomic, strong) NSSet * _Nullable filter;
@property (nonatomic, strong) Theme * _Nullable theme;
@end






@interface UIImage (SWIFT_EXTENSION(PBFrameworkVideoStories))
- (UIImage * _Nullable)aspectFittedToSizeCenteredWithSize:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIImageView (SWIFT_EXTENSION(PBFrameworkVideoStories))
- (void)awakeFromNib;
@end













#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

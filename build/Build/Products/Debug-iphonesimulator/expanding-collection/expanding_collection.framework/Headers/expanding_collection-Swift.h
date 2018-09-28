// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIView;
@class NSLayoutConstraint;
@class NSCoder;

/// Base class for UICollectionViewCell
SWIFT_CLASS("_TtC20expanding_collection22BasePageCollectionCell")
@interface BasePageCollectionCell : UICollectionViewCell
/// DEPRECATED! Animation oposition offset when cell is open
@property (nonatomic) CGFloat yOffset;
/// Spacing between centers of views
@property (nonatomic) CGFloat ySpacing;
/// Additional height of back view, when it grows
@property (nonatomic) CGFloat additionalHeight;
/// Additional width of back view, when it grows
@property (nonatomic) CGFloat additionalWidth;
/// Should front view drow shadow to bottom or not
@property (nonatomic) BOOL dropShadow;
/// The view used as the face of the cell must connectid from xib or storyboard.
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified frontContainerView;
/// The view used as the back of the cell must connectid from xib or storyboard.
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified backContainerView;
/// constraints for backContainerView must connectid from xib or storyboard
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified backConstraintY;
/// constraints for frontContainerView must connectid from xib or storyboard
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified frontConstraintY;
/// A Boolean value that indicates whether the cell is opened.
@property (nonatomic) BOOL isOpened;
/// Initializes a UICollectionViewCell from data in a given unarchiver.
/// \param aDecoder An unarchiver object.
///
///
/// returns:
/// An initialized UICollectionViewCell object.
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Initializes and returns a newly allocated view object with the specified frame rectangle.
/// \param frame The frame rectangle for the view
///
///
/// returns:
/// An initialized UICollectionViewCell object.
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


@interface BasePageCollectionCell (SWIFT_EXTENSION(expanding_collection))
/// Open or close cell.
/// \param isOpen Contains the value true if the cell should display open state, if false should display close state.
///
/// \param animated Set to true if the change in selection state is animated.
///
- (void)cellIsOpen:(BOOL)isOpen animated:(BOOL)animated;
@end


@interface BasePageCollectionCell (SWIFT_EXTENSION(expanding_collection))
- (void)awakeFromNib;
@end


@interface BasePageCollectionCell (SWIFT_EXTENSION(expanding_collection))
@end


@interface BasePageCollectionCell (SWIFT_EXTENSION(expanding_collection))
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
@end

@class NSBundle;

/// Base class for UITableViewcontroller which have back transition method
SWIFT_CLASS("_TtC20expanding_collection28ExpandingTableViewController")
@interface ExpandingTableViewController : UITableViewController
/// The height of the table view header
@property (nonatomic) CGFloat headerHeight;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ExpandingTableViewController (SWIFT_EXTENSION(expanding_collection))
/// Pops the top view controller from the navigation stack and updates the display with custom animation.
- (void)popTransitionAnimation;
@end


@interface ExpandingTableViewController (SWIFT_EXTENSION(expanding_collection))
@end

@class UICollectionView;

/// UIViewController with UICollectionView with custom transition method
SWIFT_CLASS("_TtC20expanding_collection23ExpandingViewController")
@interface ExpandingViewController : UIViewController
/// The default size to use for cells.
@property (nonatomic) CGSize itemSize;
/// The collection view object managed by this view controller.
@property (nonatomic, strong) UICollectionView * _Nullable collectionView;
/// Index of current cell
@property (nonatomic, readonly) NSInteger currentIndex;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ExpandingViewController (SWIFT_EXTENSION(expanding_collection))
/// Pushes a view controller onto the receiver’s stack and updates the display with custom animation.
/// \param viewController The table view controller to push onto the stack.
///
- (void)pushToViewController:(ExpandingTableViewController * _Nonnull)viewController;
@end


@interface ExpandingViewController (SWIFT_EXTENSION(expanding_collection))
@end


@interface ExpandingViewController (SWIFT_EXTENSION(expanding_collection))
@end

@class UIScrollView;

@interface ExpandingViewController (SWIFT_EXTENSION(expanding_collection))
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
@end


@interface ExpandingViewController (SWIFT_EXTENSION(expanding_collection))
- (void)viewDidLoad;
@end


@interface ExpandingViewController (SWIFT_EXTENSION(expanding_collection)) <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIView (SWIFT_EXTENSION(expanding_collection))
@end


@interface UIView (SWIFT_EXTENSION(expanding_collection))
@end


@interface UIView (SWIFT_EXTENSION(expanding_collection))
@end


@interface UIView (SWIFT_EXTENSION(expanding_collection))
@end

#pragma clang diagnostic pop

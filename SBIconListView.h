/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBIconViewMap, SBIconListModel, NSArray, NSMutableSet, UIView, SBIcon, NSMutableArray;
@protocol SBIconListLayoutDelegate;

__attribute__((visibility("hidden")))
@interface SBIconListView : XXUnknownSuperclass {
	SBIconListModel *_model;
	SBIconViewMap *_viewMap;
	int _orientation;
	float _statusBarHeight;
	SBIcon *_bouncedIcon;
	NSMutableArray *_removedIcons;
	NSArray *_rotationContainers;
	unsigned _needsLayout : 1;
	unsigned _rotating : 1;
	UIView *_fadeView;
	BOOL _purged;
	NSMutableSet *_notShownIconViews;
	BOOL _isEditing;
	id<SBIconListLayoutDelegate> _layoutDelegate;
	CGRect _wallpaperRelativeFrame;
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;
@property(assign, nonatomic) id<SBIconListLayoutDelegate> layoutDelegate;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic) BOOL purged;
@property(assign, nonatomic) float statusBarHeight;
@property(assign, nonatomic) CGRect wallpaperRelativeFrame;
+ (unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+ (unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
+ (unsigned)maxIcons;
+ (unsigned)maxVisibleIconRowsInterfaceOrientation:(int)orientation;
+ (unsigned)maxVisibleIcons;
+ (int)rotationAnchor;
- (id)init;
- (id)initWithModel:(id)model orientation:(int)orientation viewMap:(id)map;
- (void)_layoutIcon:(id)icon atIndex:(unsigned)index createViewNow:(BOOL)now pop:(BOOL)pop;
- (void)_popIconView:(id)view;
- (void)_sendLayoutDelegateLayoutInvalidated;
- (void)_sendLayoutDelegateWouldHaveMovedIcon:(id)icon;
- (void)_updateEditingStateForIcons:(id)icons animated:(BOOL)animated;
- (CGPoint)_wallpaperRelativeIconCenterForIconImageCenter:(CGPoint)iconImageCenter;
- (CGPoint)_wallpaperRelativeIconCenterForIconView:(id)iconView;
- (Class)baseIconViewClass;
- (float)bottomIconInset;
- (id)bouncedIcon;
- (CGPoint)centerForIcon:(id)icon;
- (CGPoint)centerForIconCoordinate:(SBIconCoordinate)iconCoordinate;
- (void)cleanupAfterRotation;
- (unsigned)columnAtPoint:(CGPoint)point;
- (BOOL)compactIcons:(BOOL)icons;
- (BOOL)containsIcon:(id)icon;
- (SBIconCoordinate)coordinateForIcon:(id)icon;
- (SBIconCoordinate)coordinateForIconAtIndex:(unsigned)index;
- (void)dealloc;
- (CGSize)defaultIconSize;
- (id)description;
- (void)enumerateIconViewsUsingBlock:(id)block;
- (void)enumerateIconsUsingBlock:(id)block;
- (unsigned)firstFreeSlotIndex;
- (unsigned)firstFreeSlotIndexForType:(int)type;
- (unsigned)firstFreeSlotOrLastSlotIndex;
- (unsigned)firstFreeSlotOrLastSlotIndexForType:(int)type;
- (float)horizontalBumpForColumn:(unsigned)column;
- (float)horizontalIconPadding;
- (id)iconAtPoint:(CGPoint)point index:(unsigned *)index;
- (id)iconAtPoint:(CGPoint)point index:(unsigned *)index proposedOrder:(int *)order grabbedIcon:(id)icon;
- (unsigned)iconColumnsForCurrentOrientation;
- (SBIconCoordinate)iconCoordinateForIndex:(unsigned)index forOrientation:(int)orientation;
- (int)iconLocation;
- (unsigned)iconRowsForCurrentOrientation;
- (unsigned)iconRowsForSpacingCalculation;
- (id)icons;
- (unsigned)iconsInRowForSpacingCalculation;
- (unsigned)indexForCoordinate:(SBIconCoordinate)coordinate forOrientation:(int)orientation;
- (unsigned)indexOfIcon:(id)icon;
- (id)insertIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now;
- (id)insertIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now pop:(BOOL)pop;
- (BOOL)isDock;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (void)layoutIconsIfNeeded:(double)needed domino:(BOOL)domino;
- (void)layoutIconsNow;
- (id)model;
- (Class)modelClass;
- (CGPoint)originForIcon:(id)icon;
- (CGPoint)originForIconAtCoordinate:(SBIconCoordinate)coordinate;
- (CGPoint)originForIconAtIndex:(unsigned)index;
- (void)performRotationWithDuration:(double)duration;
- (id)placeIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now pop:(BOOL)pop;
- (void)prepareToRotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)removeAllIconAnimations;
- (void)removeIcon:(id)icon;
- (void)removeIconAtIndex:(unsigned)index;
- (id)removedIcons;
- (unsigned)rowAtPoint:(CGPoint)point;
- (unsigned)rowForIcon:(id)icon;
- (void)setAlphaForAllIcons:(float)allIcons;
- (void)setBouncedIcon:(id)icon;
- (void)setFrame:(CGRect)frame;
- (void)setIconsNeedLayout;
- (void)setModel:(id)model;
- (void)showAllIcons;
- (void)showIconImagesFromColumn:(int)column toColumn:(int)column2 totalColumns:(int)columns allowAnimations:(BOOL)animations;
- (float)sideIconInset;
- (id)tintColor;
- (float)topIconInset;
- (void)updateEditingStateAnimated:(BOOL)animated;
- (float)verticalIconPadding;
- (id)viewForIcon:(id)icon;
- (id)viewMap;
- (id)visibleIcons;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBIconListModel, SBIcon, NSMutableArray;

@interface SBIconListView : XXUnknownSuperclass {
	SBIconListModel *_model;
	int _orientation;
	SBIcon *_bouncedIcon;
	NSMutableArray *_removedIcons;
	NSMutableArray *_iconContainerMatrix;
	unsigned _scattered : 1;
	unsigned _needsLayout : 1;
	unsigned _rotating : 1;
	unsigned _onWallpaper : 1;
	UIView *_fadeView;
	BOOL _iconsAreElsewhere;
	NSMutableArray *_rasterizedIcons;
}
+ (unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+ (unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
+ (unsigned)maxIcons;
- (id)initWithFrame:(CGRect)frame;
- (float)bottomIconInset;
- (id)bouncedIcon;
- (void)cleanupAfterRotation;
- (int)columnAtPoint:(CGPoint)point;
- (void)compactIcons:(BOOL)icons;
- (void)dealloc;
- (unsigned)firstFreeSlotIndex;
- (unsigned)firstFreeSlotOrLastSlotIndex;
- (void)getX:(unsigned *)x Y:(unsigned *)y forIndex:(unsigned)index forOrientation:(int)orientation;
- (void)hideCloseBoxes;
- (float)horizontalBumpForColumn:(unsigned)column;
- (float)horizontalIconPadding;
- (id)iconAtPoint:(CGPoint)point index:(int *)index;
- (id)iconAtPoint:(CGPoint)point index:(int *)index proposedOrder:(int *)order grabbedIcon:(id)icon;
- (int)iconColumnsForCurrentOrientation;
- (int)iconRowsForCurrentOrientation;
- (id)icons;
- (BOOL)iconsAreElsewhere;
- (int)iconsInRowForSpacingCalculation;
- (int)indexForX:(int)x Y:(int)y forOrientation:(int)orientation;
- (id)insertIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now;
- (BOOL)isDock;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (BOOL)isScattered;
- (float)layoutIconsIfNeeded:(float)needed domino:(BOOL)domino;
- (void)layoutIconsNow;
- (void)makeIconsPerformBlock:(id)block;
- (void)makeIconsPerformSelector:(SEL)selector;
- (id)model;
- (Class)modelClass;
- (CGPoint)originForIcon:(id)icon;
- (CGPoint)originForIconAtIndex:(int)index;
- (CGPoint)originForIconAtX:(unsigned)x Y:(unsigned)y;
- (void)performRotationWithDuration:(double)duration;
- (id)placeIcon:(id)icon atIndex:(unsigned)index moveNow:(BOOL)now pop:(BOOL)pop;
- (void)prepareToRotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)removeAllIconAnimations;
- (void)removeIcon:(id)icon;
- (void)removeIconAtIndex:(unsigned)index;
- (id)removedIcons;
- (id)rotationIconContainers;
- (int)rowAtPoint:(CGPoint)point;
- (unsigned)rowForIcon:(id)icon;
- (void)scatterAnimationDidStop;
- (void)scatterWithDuration:(double)duration startTime:(double)time;
- (void)setAlphaForAllIcons:(float)allIcons;
- (void)setBouncedIcon:(id)icon;
- (void)setDisplaysOnWallpaper:(BOOL)wallpaper;
- (void)setFrame:(CGRect)frame;
- (void)setIconsAreElsewhere:(BOOL)elsewhere;
- (void)setIconsNeedLayout;
- (void)setModel:(id)model;
- (void)setOrientation:(int)orientation;
- (void)setShouldRasterizeAllIcons:(BOOL)rasterizeAllIcons;
- (void)showCloseBoxes;
- (void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
- (void)showIconImagesFromColumn:(int)column toColumn:(int)column2 totalColumns:(int)columns visibleIconsJitter:(BOOL)jitter;
- (float)sideIconInset;
- (void)stopJittering;
- (float)topIconInset;
- (void)unscatterAnimationDidStop;
- (void)unscatterWithDuration:(double)duration startTime:(double)time;
- (float)verticalIconPadding;
@end


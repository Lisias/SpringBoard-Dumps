/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconListView.h"


@interface SBDockIconListView : SBIconListView {
}
+ (id)backgroundImageForOrientation:(int)orientation;
+ (unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+ (unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
- (id)initForOrientation:(int)orientation;
- (id)initWithFrame:(CGRect)frame;
- (float)_additionalSideInsetToCenterIcons;
- (void)_updateForOrientation:(int)orientation duration:(double)duration;
- (void)_updateForOrientationAnimationStopped;
- (int)columnAtPoint:(CGPoint)point;
- (int)iconsInRowForSpacingCalculation;
- (CGPoint)originForIconAtX:(unsigned)x Y:(unsigned)y;
- (int)rowAtPoint:(CGPoint)point;
- (void)setOrientation:(int)orientation;
- (void)setOrientation:(int)orientation duration:(double)duration;
- (float)sideIconInset;
- (float)topIconInset;
- (int)visibleIconsInDock;
@end


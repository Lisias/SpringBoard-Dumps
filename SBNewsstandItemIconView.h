/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBNewsstandItemIconViewBase.h"

@class SBDownloadingProgressBar, UILabel, UIView;

@interface SBNewsstandItemIconView : SBNewsstandItemIconViewBase {
	UIView *_iconTransformView;
	SBDownloadingProgressBar *_progressBar;
	UILabel *_indexLabel;
	unsigned _newsstandIndex;
}
+ (float)_badgeLabelFontSize;
+ (BOOL)allowsRecycling;
+ (CGPoint)badgeLabelCenterPoint;
+ (id)createBadgeLabelImageAndGetTextCenterPoint:(CGPoint *)point;
+ (CGSize)defaultIconSize;
- (id)initWithDefaultSize;
- (id)initWithFrame:(CGRect)frame;
- (CGRect)_adjustProspectiveBadgeFrame:(CGRect)frame fromView:(id)view toView:(id)view3;
- (float)_badgeHorizontalPadding;
- (float)_badgeVerticalPadding;
- (Class)_labelClass;
- (id)_overriddenBadgeTextForText:(id)text;
- (void)_removeProgressBar;
- (id)_superviewForBadge;
- (void)_updateLabelVisibility;
- (void)_updateProgressBar;
- (void)applyIconImageTransform:(CATransform3D)transform duration:(float)duration delay:(float)delay;
- (id)createShadowImageView;
- (void)dealloc;
- (CGRect)defaultFrameForProgressBar;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
- (void)positionCloseBoxOfType:(int)type;
- (void)positionIconImageView;
- (void)positionLabel;
- (void)prepareForRecycling;
- (void)setIsGrabbed:(BOOL)grabbed;
- (void)setNewsstandIndex:(unsigned)index;
@end


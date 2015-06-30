/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBShowcaseController : XXUnknownSuperclass {
	UIWindow *_hostWindow;
	UIView *_hostView;
	UIWindow *_showcaseWindow;
	UIView *_rootView;
	UIView *_contentView;
	UIControl *_blockingView;
	UIView *_clippingView;
	UIView *_showcaseView;
	UIView *_topShadowView;
	UIView *_bottomShadowView;
	UIView *_hidingView;
	SBSlidingViewHighlight *_separator;
	float _revealAmount;
	int _orientation;
	SBShowcaseViewController *_showcaseViewController;
}
@property(readonly, assign, nonatomic) UIControl *blockingView;
@property(retain, nonatomic) UIView *hidingView;
@property(retain, nonatomic) UIView *hostView;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic) float revealAmount;
@property(assign, nonatomic) int revealMode;
@property(retain, nonatomic) SBShowcaseViewController *showcase;
@property(readonly, assign, nonatomic) UIWindow *window;
+ (float)fullRevealAmount;
- (id)init;
- (CGRect)_adjustedContentFrameForFrame:(CGRect)frame;
- (CGRect)_contentFrame;
- (CGRect)_hostViewFrame;
- (CGRect)_portraitAdjustedFrameForFrame:(CGRect)frame;
- (CGAffineTransform)_rootTransform;
- (float)_separatorAlphaForRevealAmount:(float)revealAmount;
- (float)_showcaseRevealedAmount;
- (void)_updateShowcase;
- (CGRect)_visibleShowcaseBounds;
- (float)bottomBarHeight;
- (void)dealloc;
- (void)didAppear;
- (void)didDisappear;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)setAlpha:(float)alpha;
- (void)setHidden:(BOOL)hidden;
- (CGRect)showcaseViewFrame;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
- (void)willAppear;
- (void)willDisappear;
@end


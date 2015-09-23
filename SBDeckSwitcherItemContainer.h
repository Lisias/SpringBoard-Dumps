/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBDeckSwitcherItemContainer : XXUnknownSuperclass <UIScrollViewDelegate, UIGestureRecognizerDelegate> {
	SBDeckSwitcherPageView *_pageView;
	SBDisplayItem *_displayItem;
	id<SBDeckSwitcherItemContainerDelegate> _delegate;
	UIScrollView *_verticalScrollView;
	UIView *_iconAndLabelContainer;
	SBDeckSwitcherIconImageContainerView *_iconImageView;
	UILabel *_iconTitle;
	float _killVelocity;
	float _contentCornerRadiusProgress;
	float _contentBlurRadiusProgress;
	float _contentPageViewScale;
	float _titleOpacity;
	float _titleAndIconOpacity;
	UILongPressGestureRecognizer *_pressDownGestureRecognizer;
	UITapGestureRecognizer *_tapGestureRecognizer;
	UITapGestureRecognizer *_doubleTapGestureRecognizer;
	SBAppSwitcherSettings *_settings;
	BOOL _disableBlurInputBoundsUpdatesForDismissal;
	BOOL _disableBlurInputBoundsReductionForRasterizing;
	BOOL _blurEnabled;
	float _lastBlurRadius;
	CGRect _lastBlurFrame;
	float _unobscuredMargin;
}
@property(assign, nonatomic) float contentBlurRadiusProgress;
@property(assign, nonatomic) float contentCornerRadiusProgress;
@property(assign, nonatomic) float contentPageViewScale;
@property(assign, nonatomic) float darkeningAlpha;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, assign, nonatomic) id<SBDeckSwitcherItemContainerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic) BOOL disableBlurInputBoundsReductionForRasterizing;
@property(readonly, retain, nonatomic) SBDisplayItem *displayItem;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float killGestureHysteresis;
@property(readonly, assign, nonatomic) float killingProgress;
@property(retain, nonatomic) SBDeckSwitcherPageView *pageView;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) float titleAndIconOpacity;
@property(assign, nonatomic) float titleOpacity;
@property(assign, nonatomic) float unobscuredMargin;
+ (float)preferredRestingVisibleMarginForBounds:(CGRect)bounds;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame displayItem:(id)item delegate:(id)delegate;
- (void)_addIconSubview;
- (void)_applyVisualStyleToSubviews;
- (CGRect)_blurFrame;
- (id)_createScrollView;
- (float)_effectiveTitleAndIconOpacityConsideringKillProgress;
- (void)_ensureSubviewOrder;
- (CGRect)_frameForIconTitle:(id)iconTitle;
- (CGRect)_frameForIconTitleViewContainer;
- (CGRect)_frameForIconView;
- (CGRect)_frameForPageView;
- (CGRect)_frameForScrollView;
- (void)_handlePageViewPressDown:(id)down;
- (void)_handlePageViewTap:(id)tap;
- (float)_inverseScaleTransformFactor;
- (void)_removeIconSubview;
- (float)_scaleTransformFactor;
- (CGAffineTransform)_transformForIconTitleViewContainer;
- (void)_updateBlur;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)interactionDidEnd:(BOOL)interaction;
- (void)layoutSubviews;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;
- (void)transitionDidEnd:(BOOL)transition forPresentation:(BOOL)presentation;
- (void)updateTransitionProgress:(float)progress;
- (void)viewDismissing:(id)dismissing withInteraction:(BOOL)interaction andInitialProgress:(float)progress forTransitionRequest:(id)transitionRequest;
- (void)viewPresenting:(id)presenting withInteraction:(BOOL)interaction andInitialProgress:(float)progress forTransitionRequest:(id)transitionRequest;
@end


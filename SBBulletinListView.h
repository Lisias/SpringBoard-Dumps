/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBBulletinListView : XXUnknownSuperclass {
	int _orientation;
	float _currentY;
	UIView *_slidingView;
	UIView *_linenView;
	CGSize _linenSize;
	SBBulletinTableView *_tableView;
	UIStatusBar *_statusBar;
	UIView *_statusBarPocket;
	UIView *_grabber;
	SBBulletinBlurredShadowLabel *_noNotificationsLabel;
	SBBulletinListTouchEater *_clearButtonTouchEater;
	UIView *_cornerView[4];
	UIView *_bottomShadowView;
	UIView *_linenMask;
	UIView *_linenGradient;
	UIView *_linenRim;
	UIView *_wholeShadowView;
	UIView *_sideShadowView[2];
	float _tableViewContentHeight;
}
+ (id)_pathToLinenCache;
+ (id)linen;
+ (void)loadLinen;
+ (void)removeCachedLinen;
- (id)initWithFrame:(CGRect)frame delegate:(id)delegate;
- (void)_ensureContentHeightHasBeenComputed;
- (float)_iPadSlidingViewHeightInOrientation:(int)orientation;
- (float)_linenGradientAlphaForHeight:(float)height;
- (void)_positionNoNotificationsLabel;
- (void)adjustLayoutForAnimatedTableViewContentHeightChange:(float)animatedTableViewContentHeightChange;
- (void)adjustLayoutForTableViewReload;
- (id)clearButtonTouchEater;
- (float)currentY;
- (void)dealloc;
- (void)didRotateFromOrientation:(int)orientation;
- (void)handleStatusBarTap:(id)tap;
- (void)handleTableViewOffsetChange;
- (void)layoutForOrientation:(int)orientation;
- (float)linenGradientAlpha;
- (id)linenView;
- (float)offscreenY;
- (float)onscreenY;
- (void)positionSlidingViewAtY:(float)y;
- (void)setBottomCornersOffscreen:(BOOL)offscreen animated:(BOOL)animated;
- (void)setBottomShadowAlpha:(float)alpha;
- (void)setCornerAlpha:(float)alpha;
- (void)setShowsNoNotificationsLabel:(BOOL)label animated:(BOOL)animated;
- (id)slidingView;
- (CGRect)slidingViewFrame;
- (id)tableView;
- (void)willRotateToOrientation:(int)orientation;
@end


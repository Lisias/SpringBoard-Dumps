/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"
#import "SpringBoard-Structs.h"

@class UIView, UIImageView, UITableView;
@protocol SBAwayBulletinListViewDelegate;

__attribute__((visibility("hidden")))
@interface SBAwayBulletinListView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	UITableView *_tableView;
	UIView *_tableContainerView;
	UIView *_tableBackgroundView;
	UIView *_tableTopFadeOverlay;
	UIView *_tableBottomFadeOverlay;
	UIView *_tableFadeMaskContainer;
	UIImageView *_grabberFadeMaskImageView;
	UIView *_tableHeaderView;
	UIView *_tableFooterView;
	UIView *_dropShadowView;
	UITableView *_firstAlertTableView;
	UIView *_firstAlertBGView;
	float _firstAlertTableHeight;
	UIView *_tableGrabberView;
	int _normalViewStyle;
	float _normalTableHeight;
	id<SBAwayBulletinListViewDelegate> _delegate;
	int _viewStyle;
	BOOL _hiddenForUnlock;
	BOOL _shouldShowFirstAlertTable;
	BOOL _animatingGrabEnded;
	BOOL _grabberGrabbed;
}
@property(assign, nonatomic) id<SBAwayBulletinListViewDelegate> delegate;
@property(readonly, assign, nonatomic) UITableView *firstAlertTableView;
@property(readonly, assign, nonatomic) UITableView *tableView;
@property(readonly, assign, nonatomic) int viewStyle;
- (id)initWithDelegate:(id)delegate style:(int)style;
- (void)_grabEndedWithVelocity:(CGPoint)velocity cancelled:(BOOL)cancelled;
- (void)_grabEndedWithVelocity:(CGPoint)velocity cancelled:(BOOL)cancelled animated:(BOOL)animated;
- (CGRect)_grabberHitFrame;
- (CGSize)_maxPinnedContainerSize;
- (void)_setupHierarchyIfNecessaryWithStyle:(int)style;
- (void)_slideOutTransforms:(CGAffineTransform *)transforms grabberTransform:(CGAffineTransform *)transform;
- (float)_tableContainerViewAlphaForSlideUp;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (float)_translationDistanceForGrabber;
- (void)_updateForGrabBeganOrMovedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
- (void)clearFloatingAlertButtonHandler;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)floatingAlertNeedsMainUnlockAction;
- (float)floatingTableContainerHeightForContentHeight:(float)contentHeight;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)handleGrabberPan:(id)pan;
- (BOOL)hasShownNotificationsManually;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (BOOL)isHiddenForUnlock;
- (void)layoutSubviews;
- (void)lockBarStartedTracking;
- (void)lockBarStoppedTracking;
- (void)setFirstAlertTableHeight:(float)height;
- (void)setFirstAlertTableViewHidden:(BOOL)hidden;
- (void)setFrame:(CGRect)frame;
- (void)setHiddenForUnlock:(BOOL)unlock force:(BOOL)force;
- (void)setViewStyle:(int)style withFloatingAlert:(BOOL)floatingAlert andTableHeight:(float)height;
- (void)setViewStyle:(int)style withFloatingAlert:(BOOL)floatingAlert andTableHeight:(float)height force:(BOOL)force;
- (BOOL)shouldAutoHideNotifications;
- (BOOL)shouldHideBySlidingOut;
- (BOOL)shouldOverrideToSlideUpStyle:(BOOL)slideUpStyle;
- (BOOL)wantsToHideTopBarShadowView;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end


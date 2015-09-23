/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayBulletinListView : XXUnknownSuperclass {
	UITableView *_tableView;
	UIView *_tableContainerView;
	UIView *_tableMaskView;
	UIView *_tableBackgroundView;
	UITableView *_firstAlertTableView;
	UIView *_firstAlertBGView;
	float _firstAlertTableHeight;
	UIView *_tableGrabberView;
	int _normalViewStyle;
	float _normalTableHeight;
	id<SBFloatingAlertGrabberDelegate> _grabDelegate;
	int _viewStyle;
	BOOL _hiddenForUnlock;
}
@property(assign, nonatomic) float firstAlertTableHeight;
@property(readonly, assign, nonatomic) UITableView *firstAlertTableView;
@property(assign, nonatomic) id<SBFloatingAlertGrabberDelegate> grabDelegate;
@property(readonly, assign, nonatomic) UITableView *tableView;
@property(readonly, assign, nonatomic) int viewStyle;
- (id)initWithFrame:(CGRect)frame;
- (void)_grabChanged:(float)changed;
- (void)_grabEnded;
- (void)_grabStarted;
- (CGAffineTransform)_slideOutTransform;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (id)_tableMaskView;
- (float)_translationDistanceForGrabber;
- (void)clearFloatingAlertButtonHandler;
- (void)dealloc;
- (BOOL)floatingAlertNeedsMainUnlockAction;
- (void)layoutSubviews;
- (void)lockBarStartedTracking;
- (void)lockBarStoppedTracking;
- (void)setFrame:(CGRect)frame;
- (void)setHiddenForUnlock:(BOOL)unlock force:(BOOL)force;
- (void)setViewStyle:(int)style withFloatingAlert:(BOOL)floatingAlert andTableHeight:(float)height;
- (BOOL)shouldHideBySlidingOut;
- (float)tableContainerHeightForContentHeight:(float)contentHeight;
@end


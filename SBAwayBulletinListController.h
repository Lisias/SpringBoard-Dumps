/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAwayBulletinListViewDelegate.h"
#import "SpringBoard-Structs.h"
#import "BBObserverDelegate.h"

@class NSArray, BBObserver, NSMutableArray, SBAwayBulletinListView, SBAwayBulletinCell, SBAwayListActionContext, UIView;

__attribute__((visibility("hidden")))
@interface SBAwayBulletinListController : XXUnknownSuperclass <BBObserverDelegate, UITableViewDataSource, UITableViewDelegate, SBAwayBulletinListViewDelegate> {
	BBObserver *_observer;
	NSMutableArray *_listItems;
	NSMutableArray *_realertTimers;
	SBAwayBulletinCell *_unlockingCell;
	BOOL _lockBarIsTracking;
	NSMutableArray *_trackingCells;
	SBAwayBulletinListView *_view;
	CGRect _viewRect;
	float _contentHeight;
	BOOL _dimmed;
	BOOL _presentingNewBulletin;
	BOOL _dimmingForLockButtonPress;
	BOOL _hibernating;
	BOOL _quietModeEnabled;
	BOOL _autoHidesNotifications;
	BOOL _autoHideTimerActive;
	BOOL _hasManuallyShownNotifications;
	CGAffineTransform _pinnedViewTransform;
	SBAwayListActionContext *_actionContext;
	NSMutableArray *_pendingSystemAlerts;
	id _itemToBlink;
	id _itemToFloat;
}
@property(assign, nonatomic) BOOL autoHidesNotifications;
@property(assign, nonatomic) BOOL dimmed;
@property(readonly, assign, nonatomic) NSArray *listItems;
@property(readonly, assign, nonatomic) BOOL lockBarIsTracking;
@property(readonly, assign, nonatomic) BOOL presentingNewBulletin;
@property(readonly, assign, nonatomic) BOOL quietModeEnabled;
@property(readonly, assign, nonatomic) UIView *view;
@property(assign, nonatomic) CGRect viewRect;
- (id)init;
- (void)_alertForBulletin:(id)bulletin;
- (void)_animateResetConfigurationAndPositioning:(BOOL)positioning;
- (void)_animateResetConfigurationAndPositioning:(BOOL)positioning clearingUnlockContext:(BOOL)context;
- (void)_animateResetConfigurationAndPositioning:(BOOL)positioning clearingUnlockContext:(BOOL)context clearsFloatingItem:(BOOL)item;
- (void)_autoDismissTimerElapsed;
- (void)_autoHideNotificationsChanged;
- (void)_awayControllerRelocked:(id)relocked;
- (void)_cancelAutoDismissTimer;
- (void)_configureAndPositionView;
- (void)_configureBBObserver;
- (id)_floatingItemToUseForNewItem:(id)newItem;
- (void)_forceTopBarShadowVisibilityUpdate;
- (void)_hardwareButtonPressed:(id)pressed;
- (void)_killRealerts:(id)realerts;
- (id)_listItemContainingBulletinID:(id)anId;
- (id)_listItemContainingCardItem:(id)item;
- (id)_listItemForNewBulletin:(id)newBulletin;
- (void)_realertTimerFired:(id)fired;
- (int)_rowAnimationForDelete;
- (int)_rowAnimationForInsert;
- (float)_rowHeightForItem:(id)item floating:(BOOL)floating;
- (void)_scheduleRealerts:(id)realerts;
- (void)_setContentForTableCell:(id)tableCell withItem:(id)item floating:(BOOL)floating;
- (BOOL)_shouldTreatBulletinAsInert:(id)inert;
- (void)_sortListItems;
- (void)_startOrEndAutoDismissTimerIfNecessary;
- (id)_systemAlertItem;
- (void)_updateModelAndTableViewForAddition:(id)addition;
- (void)_updateModelAndTableViewForAddition:(id)addition animated:(BOOL)animated;
- (void)_updateModelAndTableViewForModification:(id)modification originalHeight:(float)height;
- (void)_updateModelAndTableViewForRemoval:(id)removal originalHeight:(float)height;
- (void)activateAlertItem:(id)item didUndimScreen:(BOOL)screen;
- (void)activateCardItem:(id)item animated:(BOOL)animated;
- (void)activateOrUpdateCardItem:(id)item animated:(BOOL)animated;
- (double)animationDelayForShowPasscodeUI:(BOOL)showPasscodeUI duration:(double)duration;
- (double)animationDurationForShowPasscodeUI:(BOOL)showPasscodeUI duration:(double)duration;
- (void)clearViewsAndHibernate;
- (void)deactivateAlertItem:(id)item;
- (void)deactivateCardItem:(id)item;
- (void)dealloc;
- (int)defaultStyle;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)hasShownNotificationsManually;
- (BOOL)isHibernating;
- (void)lockBarStartedTrackingForCell:(id)cell;
- (void)lockBarStoppedTrackingForCell:(id)cell;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
- (id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
- (void)observer:(id)observer modifyBulletin:(id)bulletin;
- (id)observer:(id)observer multipleThumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
- (void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
- (id)pendOrDeactivateAlertItems:(BOOL)items;
- (void)rebuildViewsAndStopHibernating;
- (void)resetLockBarIfUnlocking;
- (void)resetLockBarsIfTracking;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)setPinnedViewTransform:(CGAffineTransform)transform;
- (void)setTableItemToBlink:(id)blink;
- (void)setTableItemToFloat:(id)aFloat;
- (void)setTableItemToFloat:(id)aFloat force:(BOOL)force;
- (void)setUnlockActionContext:(id)context;
- (BOOL)setUnlockingTableViewCell:(id)cell;
- (void)setViewHiddenForUnlock:(BOOL)unlock;
- (void)setViewHiddenForUnlock:(BOOL)unlock force:(BOOL)force;
- (BOOL)shouldAutoHideNotifications;
- (void)showTestBulletin;
- (void)sliderGrabDidEnd;
- (void)sliderGrabWillEnd:(BOOL)sliderGrab;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)unlockActionContext;
- (void)updateCardItem:(id)item;
- (BOOL)usesFloatingPanelAndBlinkingItems;
- (id)visibleActionContext;
- (BOOL)wantsToHideTopBarShadow;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willSetViewStyle:(int)style;
@end

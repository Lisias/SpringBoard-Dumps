/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {
	SBLockOverlayView *_bulletinView;
	BOOL _performedAction;
	SBAwayBulletinListItem *_bulletinItem;
}
@property(retain, nonatomic) SBAwayBulletinListItem *bulletinItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (id)_alternateAction;
- (id)_calculatedTitleForAlternateActionButton;
- (id)_customTitleForAlternateActionButton;
- (id)_dismissAction;
- (BOOL)_hasAlternateAction;
- (id)_lockScreenActionContext;
- (id)_snoozeAction;
- (id)_titleForAlternateActionButton;
- (void)dealloc;
- (void)handleTapGestureFromView:(id)view;
- (BOOL)isRepeatingSound;
- (void)loadView;
- (void)lockButtonPressed:(id)pressed;
- (void)performAction:(id)action;
- (void)performAlternateAction;
- (void)performDismissAction;
- (void)performSnoozeAction;
- (void)performUnlockAction;
- (id)slideToUnlockText;
- (void)updateContent;
- (void)viewDidAppear:(BOOL)view;
- (void)volumeChanged:(id)changed;
@end


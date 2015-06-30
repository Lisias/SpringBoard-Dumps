/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAppSwitcherController : NSObject <SBIconDelegate, SBAppSwitcherBarViewDelegate> {
	SBAppSwitcherModel *_model;
	SBNowPlayingBar *_nowPlaying;
	SBAppSwitcherBarView *_bottomBar;
	SBApplicationIcon *_pushedIcon;
	BOOL _editing;
}
@property(readonly, assign, nonatomic) SBAppSwitcherModel *model;
+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;
- (id)init;
- (id)_applicationIconsExcept:(id)except forOrientation:(int)orientation;
- (void)_beginEditing;
- (id)_currentDownloads;
- (id)_currentIcons;
- (id)_iconForApplication:(id)application;
- (id)_iconForDownload:(id)download;
- (BOOL)_inEditMode;
- (void)_removeApplicationFromRecents:(id)recents;
- (void)_stopEditing;
- (BOOL)appSwitcherBar:(id)bar scrollShouldCancelInContentForView:(id)scroll;
- (void)appSwitcherBarRemovedFromSuperview:(id)superview;
- (void)applicationDied:(id)died;
- (id)applicationIconForDisplayIdentifier:(id)displayIdentifier;
- (void)applicationLaunched:(id)launched;
- (void)applicationSuspended:(id)suspended;
- (void)applicationsRemoved:(id)removed andAdded:(id)added;
- (int)closeBoxTypeForIcon:(id)icon;
- (void)dealloc;
- (void)downloadItemUpdatingStatusChanged:(id)changed;
- (void)downloadsChanged:(id)changed withRemovals:(id)removals;
- (BOOL)handleMenuButtonTap;
- (void)iconCloseBoxTapped:(id)tapped;
- (void)iconHandleLongPress:(id)press;
- (float)iconScale:(id)scale;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (void)iconTouchBegan:(id)began;
- (BOOL)nowPlayingControlsVisible;
- (id)switcherViewForApp:(id)app orientation:(int)orientation;
- (void)viewDidDisappear;
- (void)viewWillAppear;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"


@interface SBAwayView : SBSlidingAlertDisplay {
	BOOL _isDimmed;
	BOOL _fullscreen;
	BOOL _alwaysFullscreen;
	BOOL _showingBlockedIndicator;
	BOOL _hasTelephony;
	BOOL _wasShowingAlertAtDismiss;
	BOOL _removingAlertAtUnlock;
	BOOL _awayPluginIsVisible;
	BOOL _ignoreFullScreenUpdates;
	BOOL _lockBarCurrentlyTracking;
	SBAwayChargingView *_chargingView;
	SBAwayDateView *_dateView;
	SBActivationView *_activationView;
	SBAlertImageView *_firewireWarningView;
	SBAwayViewPluginController *_awayPluginController;
	SBAwaySwipeGestureRecognizer *_gestureRecognizer;
	SBAwayBuddyBackgroundView *_buddyBackgroundView;
	SBAwayBulletinListController *_bulletinController;
	NSTimer *_mediaControlsTimer;
	NSTimer *_fullscreenTimer;
	NSTimer *_chargingViewTimer;
	NSDictionary *_nowPlayingInfo;
	BOOL _isPlaying;
	NSDictionary *_currentPluginFadeAnimationContext;
	NSTimer *_blockedStatusUpdateTimer;
	UIAlertView *_alertSheet;
	int _alertSheetPosition;
	SBAwayInCallController *_inCallController;
	SBAwayLockBar *_lockBar;
	TPBottomSingleButtonBar *_cancelSyncBar;
	UIButton *_infoButton;
	BOOL _cameraButtonShowing;
	UIView *_legalTextView;
}
+ (id)lockLabels:(BOOL)labels fontSize:(float *)size;
+ (id)newBottomBarForInstance:(id)instance;
- (id)initWithFrame:(CGRect)frame;
- (void)_chargingViewTimerFired;
- (void)_clearBlockedStatusUpdateTimer;
- (id)_currentTitleForDateView;
- (void)_didFadeChargingView;
- (void)_finalizeAndClearPluginAnimationContext;
- (void)_fixupFirstResponder;
- (void)_fullscreenAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;
- (void)_fullscreenTimerFired;
- (void)_handleKeyEvent:(GSEventRef)event;
- (void)_hideChargingViewAndClearTimer;
- (void)_hideMediaControls;
- (void)_initializeLegalTextOverlay;
- (void)_insertBulletinView;
- (void)_layoutLegalTextOverlay:(int)overlay;
- (void)_networkTetheringStateChanged:(id)changed;
- (void)_pluginFadeInAnimationDidStop:(id)_pluginFadeInAnimation finished:(id)finished context:(void *)context;
- (void)_positionBulletinViewForOrientation:(int)orientation;
- (void)_postLockCompletedNotification;
- (void)_recenterAlertSheet;
- (void)_setAwayViewGesturesEnabled:(BOOL)enabled;
- (void)_setMiddleSubviewsAlpha:(float)alpha;
- (void)_setPluginController:(id)controller;
- (id)_topBarLCDControlsImage;
- (void)_updateBlockedStatus;
- (void)_updateBlockedStatusLabel;
- (void)_updateLockBarLabelByClearingFirst:(BOOL)first;
- (void)addBuddyBackgroundView;
- (void)addDateView;
- (void)addFirewireWarningView;
- (void)alertDisplayWillBecomeVisible;
- (void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;
- (void)animateToHidingDeviceLockFinished;
- (void)animateToShowingDeviceLock:(BOOL)showingDeviceLock duration:(float)duration;
- (void)awayDateViewDidChangeTitle:(id)awayDateView;
- (id)buddyBackgroundView;
- (id)bulletinController;
- (BOOL)canBecomeFirstResponder;
- (void)cancelFullscreenTimer;
- (id)chargingView;
- (void)clearChargingViewTimer;
- (void)clearMediaControlsTimer;
- (id)currentAwayPluginController;
- (id)dateView;
- (void)dealloc;
- (void)deviceUnlockCanceled;
- (void)deviceUnlockFailed;
- (void)didMoveToWindow;
- (BOOL)dimmed;
- (void)dismiss;
- (void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;
- (float)durationForOthersActivation;
- (void)enableOrDisableNowPlayingPlugin;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (BOOL)handleMenuButtonTap;
- (BOOL)hasNowPlayingInfo;
- (void)hideBulletinView;
- (void)hideCameraButton;
- (void)hideChargingView;
- (void)hideInfoButton;
- (void)hideMediaControls;
- (void)hideSyncingBottomBar:(BOOL)bar;
- (id)inCallController;
- (BOOL)isAlwaysFullscreen;
- (BOOL)isAnimating;
- (BOOL)isFullscreen;
- (BOOL)isMediaControlsShowingOverlays;
- (BOOL)isPlaying;
- (BOOL)isShowingMediaControls;
- (BOOL)isShowingWallpaper;
- (BOOL)isSupportedInterfaceOrientation:(int)orientation;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
- (void)lockBar:(id)bar textAlphaChangedForKnobDrag:(float)knobDrag;
- (void)lockBarStartedTracking:(id)tracking;
- (void)lockBarStoppedTracking:(id)tracking;
- (void)lockBarUnlocked:(id)unlocked;
- (void)lockBarUnlocked:(id)unlocked freezeKnobInLockedPosition:(BOOL)lockedPosition;
- (void)noteAssistantDidHide;
- (void)noteAssistantWillAppear;
- (void)performAdditionalDismissAnimations;
- (void)postLockCompletedNotification:(BOOL)notification;
- (void)removeAlertSheet;
- (void)removeBlockedStatus;
- (void)removeBuddyBackgroundView;
- (void)removeDateView;
- (void)removeFirewireWarningView;
- (void)removePluginController:(BOOL)controller;
- (void)resetForDeactivation;
- (void)resetLockBar;
- (void)restartFullscreenTimer;
- (void)restartFullscreenTimerIfNecessary;
- (void)restartMediaControlsTimer;
- (void)restartMediaControlsTimerIfNecessary;
- (void)setAlwaysFullscreen:(BOOL)fullscreen;
- (void)setBarsHiddenForCamera:(BOOL)camera;
- (void)setBottomLockBar:(id)bar;
- (void)setDimmed:(BOOL)dimmed;
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration;
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration force:(BOOL)force;
- (void)setIgnoreFullScreenUpdates:(BOOL)updates;
- (void)setLockoutUIVisible:(BOOL)visible mode:(int)mode;
- (void)setMiddleContentAlpha:(float)alpha;
- (void)setPlaying:(BOOL)playing;
- (void)setShowingDeviceLock:(BOOL)lock duration:(float)duration completion:(id)completion;
- (BOOL)shouldAnimateIconsOut;
- (BOOL)shouldAnimateIn;
- (BOOL)shouldShowBlockedRedStatus;
- (BOOL)shouldShowBottomBar;
- (BOOL)shouldShowChargingView;
- (BOOL)shouldShowInCallInfo;
- (void)showAlertSheet:(id)sheet;
- (void)showBlockedStatus;
- (void)showBulletinView;
- (void)showCameraButton;
- (void)showChargingView;
- (void)showInfoButton;
- (void)showMediaControls;
- (void)showSyncingBottomBar:(BOOL)bar;
- (void)slideAlertSheetOut:(BOOL)anOut direction:(BOOL)direction duration:(float)duration;
- (CGAffineTransform)slideTopBarToVisible:(BOOL)visible;
- (void)startAnimations;
- (void)startChargingViewTimer;
- (void)stopAnimations;
- (void)toggleCameraButton;
- (void)toggleMediaControls;
- (void)updateChargingView;
- (void)updateInCallInfo;
- (void)updateInterface;
- (void)updateLockBarLabel;
- (void)updateNowPlayingInfo:(id)info;
- (void)updateTopBarBackground;
- (void)updateUIForResetState:(int)resetState;
- (void)updateUIForRestorationState:(int)restorationState;
- (void)windowGestureWasCompleted:(id)completed;
@end


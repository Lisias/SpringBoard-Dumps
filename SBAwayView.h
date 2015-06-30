/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayView : SBSlidingAlertDisplay <UIKeyInput> {
	BOOL _isDimmed;
	BOOL _fullscreen;
	BOOL _alwaysFullscreen;
	BOOL _deferAwayItemFetching;
	BOOL _showingBlockedIndicator;
	BOOL _hasTelephony;
	BOOL _wasShowingAlertAtDismiss;
	BOOL _removingAlertAtUnlock;
	BOOL _awayPluginIsVisible;
	BOOL _ignoreFullScreenUpdates;
	SBAwayChargingView *_chargingView;
	SBAwayDateView *_dateView;
	SBAwayItemsView *_awayItemsView;
	SBActivationView *_activationView;
	SBAlertImageView *_firewireWarningView;
	SBAwayViewPluginController *_awayPluginController;
	SBAwaySwipeGestureRecognizer *_gestureRecognizer;
	MPAudioDeviceController *_audioDeviceController;
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
	TPBottomButtonBar *_cancelSyncBar;
	UIPushButton *_infoButton;
}
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
+ (id)lockLabels:(BOOL)labels fontSize:(float *)size;
+ (id)newBottomBarForInstance:(id)instance;
- (id)initWithFrame:(CGRect)frame;
- (void)_chargingViewTimerFired;
- (void)_clearBlockedStatusUpdateTimer;
- (void)_didFadeChargingView;
- (void)_finalizeAndClearPluginAnimationContext;
- (void)_fixupFirstResponder;
- (void)_fullscreenAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;
- (void)_fullscreenTimerFired;
- (void)_hideChargingViewAndClearTimer;
- (void)_hideMediaControls;
- (void)_pluginFadeInAnimationDidStop:(id)_pluginFadeInAnimation finished:(id)finished context:(void *)context;
- (void)_positionAwayItemsView;
- (void)_postLockCompletedNotification;
- (void)_recenterAlertSheet;
- (void)_setAwayViewGesturesEnabled:(BOOL)enabled;
- (void)_setMiddleSubviewsAlpha:(float)alpha;
- (void)_setPluginController:(id)controller;
- (id)_topBarLCDControlsImage;
- (void)_updateBlockedStatus;
- (void)_updateBlockedStatusLabel;
- (void)_updateShowsBluetoothButtonAnimated:(BOOL)animated;
- (void)_wirelessModemStateChanged:(id)changed;
- (void)addDateView;
- (void)addFirewireWarningView;
- (void)alertDisplayWillBecomeVisible;
- (void)animateToHidingDeviceLockFinished;
- (void)animateToShowingDeviceLock:(BOOL)showingDeviceLock duration:(float)duration;
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;
- (void)awayDateViewDidChangeTitle:(id)awayDateView;
- (BOOL)canBecomeFirstResponder;
- (void)cancelFullscreenTimer;
- (id)chargingView;
- (void)clearChargingViewTimer;
- (void)clearMediaControlsTimer;
- (id)currentAwayPluginController;
- (id)dateView;
- (void)dealloc;
- (void)deleteBackward;
- (void)deviceUnlockCanceled;
- (void)didMoveToWindow;
- (BOOL)dimmed;
- (void)dismiss;
- (float)durationForOthersActivation;
- (void)enableOrDisableNowPlayingPlugin;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (void)forwardInvocation:(id)invocation;
- (BOOL)handleMenuButtonTap;
- (BOOL)hasAwayItems;
- (BOOL)hasNowPlayingInfo;
- (BOOL)hasNowPlayingInfoFromiPod;
- (BOOL)hasText;
- (void)hideAwayItems;
- (void)hideChargingView;
- (void)hideInfoButton;
- (void)hideMediaControls;
- (void)hideSyncingBottomBar:(BOOL)bar;
- (id)inCallController;
- (void)insertText:(id)text;
- (BOOL)isAlwaysFullscreen;
- (BOOL)isAnimating;
- (BOOL)isFullscreen;
- (BOOL)isPlaying;
- (BOOL)isShowingMediaControls;
- (BOOL)isShowingWallpaper;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
- (void)lockBarStartedTracking:(id)tracking;
- (void)lockBarStoppedTracking:(id)tracking;
- (void)lockBarUnlocked:(id)unlocked;
- (void)lockBarUnlocked:(id)unlocked freezeKnobInLockedPosition:(BOOL)lockedPosition;
- (void)postLockCompletedNotification:(BOOL)notification;
- (void)removeAlertSheet;
- (void)removeBlockedStatus;
- (void)removeDateView;
- (void)removeFirewireWarningView;
- (void)removePluginController:(BOOL)controller;
- (void)restartFullscreenTimer;
- (void)restartFullscreenTimerIfNecessary;
- (void)restartMediaControlsTimer;
- (void)restartMediaControlsTimerIfNecessary;
- (void)setAlwaysFullscreen:(BOOL)fullscreen;
- (void)setBottomLockBar:(id)bar;
- (void)setDimmed:(BOOL)dimmed;
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration;
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration force:(BOOL)force;
- (void)setIgnoreFullScreenUpdates:(BOOL)updates;
- (void)setLockoutUIVisible:(BOOL)visible mode:(int)mode;
- (void)setMiddleContentAlpha:(float)alpha;
- (void)setPlaying:(BOOL)playing;
- (void)setShowingDeviceLock:(BOOL)lock duration:(float)duration;
- (BOOL)shouldAnimateIconsOut;
- (BOOL)shouldAnimateIn;
- (BOOL)shouldShowBlockedRedStatus;
- (BOOL)shouldShowBottomBar;
- (BOOL)shouldShowChargingView;
- (BOOL)shouldShowInCallInfo;
- (void)showAlertSheet:(id)sheet;
- (void)showAwayItems;
- (void)showBlockedStatus;
- (void)showChargingView;
- (void)showInfoButton;
- (void)showMediaControls;
- (void)showSyncingBottomBar:(BOOL)bar;
- (void)slideAlertSheetOut:(BOOL)anOut direction:(BOOL)direction duration:(float)duration;
- (void)startAnimations;
- (void)startChargingViewTimer;
- (void)stopAnimations;
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


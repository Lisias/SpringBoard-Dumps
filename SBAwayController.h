/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class NSMutableDictionary, NSTimer, SBAwayView, NSDictionary, NSString, NSMutableArray, PCPersistentTimer, SBUIController, NSDate, SBSlidingAlertDisplay, NSNumber, SBAlertItem, NSTimeZone, SBAwayModel;

@interface SBAwayController : SBAlert {
	SBUIController *_uiController;
	SBAwayModel *_model;
	SBAwayView *_awayView;
	NSTimer *_dimTimer;
	unsigned _isLocked : 1;
	unsigned _isUnlocking : 1;
	unsigned _isDeviceLocked : 1;
	unsigned _isDeviceLockedInitialized : 1;
	unsigned _isDimmed : 1;
	unsigned _isDimming : 1;
	unsigned _orderedOutDimmed : 1;
	unsigned _frontDimmed : 1;
	unsigned _isPermanentlyBlocked : 1;
	unsigned _makingEmergencyCall : 1;
	unsigned _appRequestedPasscodeEntry : 1;
	unsigned _isSyncing : 1;
	unsigned _relockAfterUnlock : 1;
	unsigned _wasLockedOrMakingEmergencyCallBeforeSync : 1;
	unsigned _wasDeviceLockedBeforeSync : 1;
	unsigned _showOverheatUI : 1;
	unsigned _performingAutoUnlock : 1;
	unsigned _springBoardIdleTimerScheduled : 1;
	unsigned _validPhotoCountCheck : 1;
	unsigned _nowPlayingAppIsThirdParty : 1;
	NSDictionary *_nowPlayingInfo;
	NSNumber *_iPodNowPlayingPID;
	BOOL _iPodIsPlaying;
	SBSlidingAlertDisplay *_deviceUnlockDisplay;
	double _deviceLockBlockTime;
	double _lastLockWallTime;
	NSTimeZone *_lastLockTimeZone;
	double _lastLockSecondsSinceBoot;
	PCPersistentTimer *_deviceLockTimer;
	BOOL _devicePasscodeLoaded;
	NSString *_devicePasscode;
	BOOL _chargingViewHasFadedOut;
	NSMutableArray *_pendingAlertItems;
	SBAlertItem *_currentAlertItem;
	NSMutableDictionary *_awayViewPluginControllers;
	NSString *_alwaysFullscreenAwayPluginName;
	PCPersistentTimer *_smsSoundWakeTimers[2];
	int _gracePeriodWhenLocked;
}
@property(assign, nonatomic) BOOL chargingViewHasFadedOut;
@property(readonly, assign) NSDate *lastLockDate;
+ (void)registerForAlerts;
+ (id)sharedAwayController;
+ (id)sharedAwayControllerIfExists;
- (id)initWithUIController:(id)uicontroller;
- (void)_batteryStatusChanged;
- (void)_clearBlockedState;
- (void)_disablePluginControllersForLock;
- (void)_disablePluginControllersForUnlock;
- (void)_fetchiPodNowPlayingInfo:(id)info;
- (void)_finishedUnlockAttemptWithStatus:(BOOL)status;
- (int)_getGracePeriod;
- (void)_handleFetchediPodNowPlayingInfo:(id)info;
- (void)_iapExtendedModeChanged:(id)changed;
- (void)_markLockTime;
- (void)_nowPlayingAppChanged:(id)changed;
- (void)_pendAlertItem:(id)item;
- (void)_photoLibraryChanged;
- (void)_releaseAwayView;
- (void)_sendLockStateChangedNotification;
- (BOOL)_shouldLockDeviceWithCurrentGracePeriod:(int)currentGracePeriod;
- (void)_smsSoundWakeTimerFired:(id)fired;
- (void)_undimScreen;
- (void)_unlockWithSound:(BOOL)sound isAutoUnlock:(BOOL)unlock;
- (void)_updateDeviceLockedState;
- (void)activate;
- (BOOL)activateAlertItem:(id)item;
- (void)activationChanged:(id)changed;
- (id)activeAwayPluginController;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)alertDisplayWillBecomeVisible;
- (CGRect)alertWindowRect;
- (void)allowIdleSleep;
- (BOOL)allowsIdleDimming;
- (BOOL)allowsStackingOfAlert:(id)alert;
- (void)applicationRequestedDeviceUnlock;
- (BOOL)attemptDeviceUnlockWithPassword:(id)password alertDisplay:(id)display;
- (void)attemptUnlock;
- (void)attemptUnlockWithHardwareKeyPress:(BOOL)hardwareKeyPress;
- (id)awayModel;
- (BOOL)awayPluginControllerShouldAnimateOthersResumption;
- (id)awayView;
- (void)cancelApplicationRequestedDeviceLockEntry;
- (void)cancelDimTimer;
- (void)cancelScheduledSMSSounds;
- (void)cleansePendingQueueOfAwayItems;
- (void)clearDeviceLockedTimer;
- (id)currentAlertItem;
- (void)deactivate;
- (void)deactivateAlertItem:(id)item;
- (BOOL)deviceHasPhotos;
- (void)didAnimateLockKeypadIn;
- (void)didAnimateLockKeypadOut;
- (void)didFinishAnimatingOut;
- (void)dimScreen:(BOOL)screen;
- (id)dimTimer;
- (void)dimTimerFired;
- (void)disableLockScreenBundleWithName:(id)name;
- (void)disablePluginContainerNotification:(id)notification;
- (int)effectiveStatusBarStyle;
- (void)emergencyCallWasDisplayed;
- (void)emergencyCallWasRemoved;
- (void)enableAlwaysFullscreenAwayPlugin;
- (void)enableLockScreenBundleWithName:(id)name;
- (float)finalAlpha;
- (void)finishedDimmingScreen;
- (void)frontLocked:(BOOL)locked animate:(BOOL)animate automatically:(BOOL)automatically;
- (void)frontLocked:(BOOL)locked withAnimation:(int)animation automatically:(BOOL)automatically disableLockSound:(BOOL)sound;
- (void)frontLockedAnimationFinished;
- (BOOL)handleKeyEvent:(GSEventRef)event;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (void)handleRequestedAlbumArt:(id)art;
- (BOOL)handleSlideshowHardwareButton;
- (void)hardwareKeyboardAvailabilityChanged;
- (BOOL)hasPhotosDevicesAttached;
- (void)hideMediaControls;
- (id)highestPriorityAwayPluginController;
- (double)idleDimDuration;
- (id)interfaceControllingAwayPluginController;
- (BOOL)isAlwaysFullscreenAwayPluginEnabled;
- (BOOL)isAttemptingUnlock;
- (BOOL)isAwayPluginViewVisible;
- (BOOL)isBlocked;
- (BOOL)isDeviceLockedOrBlocked;
- (BOOL)isDimmed;
- (BOOL)isLocked;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isPasswordProtected;
- (BOOL)isPermanentlyBlocked:(double *)blocked;
- (BOOL)isShowingMediaControls;
- (BOOL)isSyncing;
- (void)lock;
- (void)lockBarStartedTracking:(id)tracking;
- (void)lockBarStoppedTracking:(id)tracking;
- (void)makeEmergencyCall;
- (BOOL)moveAlertItemToAwayView:(id)awayView;
- (id)nameOfPluginController:(id)pluginController;
- (void)notePasscodeGracePeriodMayHaveChanged;
- (void)noteResetRestoreStateChanged;
- (void)noteSpringBoardIdleTimerScheduled:(BOOL)scheduled;
- (void)noteSyncStateChanged;
- (void)orderOut;
- (void)pendOrDeactivateCurrentAlertItem;
- (id)pendingAlertItems;
- (void)playLockSound;
- (void)pluginFullscreenNotification:(id)notification;
- (void)pluginVisiblityStateChanged:(id)changed;
- (void)preventIdleSleep;
- (void)preventIdleSleepForNumberOfSeconds:(float)seconds;
- (void)printLockLog;
- (void)reactivatePendingAlertItems;
- (void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call;
- (void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call dimmed:(BOOL)dimmed;
- (void)resetAwayItemsAndMark:(BOOL)mark;
- (void)restartDimTimer:(float)timer;
- (void)screensaverDidFadeToBlack:(id)screensaver finished:(id)finished context:(void *)context;
- (void)setAlwaysFullscreenAwayPluginName:(id)name;
- (void)setDeviceLocked:(BOOL)locked;
- (void)setShowOverheatUI:(BOOL)ui;
- (BOOL)shouldAnimateOtherDisplaysResumption;
- (BOOL)shouldAnimateOtherDisplaysSuspension;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldShowSlideshowButton;
- (BOOL)showOverheatUI;
- (void)smsMessageReceived;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (void)tearDownAlertWindow:(id)window;
- (BOOL)toggleMediaControls;
- (void)toggleShowsIMEIandICCID:(id)iccid;
- (void)undimScreen;
- (BOOL)undimsDisplay;
- (void)unlockAlwaysFullscreenAwayView;
- (void)unlockWithSound:(BOOL)sound;
- (void)unlockWithSound:(BOOL)sound alertDisplay:(id)display;
- (void)unlockWithSound:(BOOL)sound alertDisplay:(id)display isAutoUnlock:(BOOL)unlock;
- (void)unlockWithSound:(BOOL)sound isAutoUnlock:(BOOL)unlock;
- (void)updateAwayViewNowPlayingInfo;
- (void)updateClockFormat;
- (void)updateInCallUI;
- (void)updateInterfaceIfNecessary;
- (void)updateNowPlayingInfo:(id)info fromiPod:(BOOL)pod;
- (void)updateiPodNowPlayingInfo:(id)info;
- (void)updateiPodPlaybackState:(id)state;
- (void)userEventOccurred;
- (BOOL)wantsToHandleAlert:(id)handleAlert;
@end


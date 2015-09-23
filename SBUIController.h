/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIController : XXUnknownSuperclass <SBUIActiveOrientationObserver, SBAppSwitcherControllerDelegate, SBWallpaperObserver, _UISettingsKeyObserver, UIWindowDelegate> {
	SBWindow *_window;
	UIView *_iconsView;
	UIView *_contentView;
	UIStatusBar *_fakeSpringBoardStatusBar;
	SBAppSwitcherController *_switcherController;
	SBAppSwitcherWindowController *_switcherWindowController;
	SBApplication *_toggleSwitcherAfterLaunchApp;
	FBUIApplicationResignActiveAssertion *_appSwitcherResignActiveAssertion;
	FBUIApplicationResignActiveAssertion *_systemGestureResignActiveAssertion;
	unsigned _ignoringEvents : 1;
	unsigned _lastVolumeDownToControl : 1;
	unsigned _isBatteryCharging : 1;
	unsigned _isOnAC : 1;
	unsigned _isConnectedToUnsupportedChargingAccessory : 1;
@private
	unsigned _isConnectedToChargeIncapablePowerSource : 1;
@protected
	unsigned _allowAlertWindowRotation : 1;
	id _volumeHandler;
	float _batteryCapacity;
	BOOL _supportsDetailedBatteryCapacity;
	int _batteryLoggingStartCapacity;
	SBDismissOnlyAlertItem *_unsupportedChargerAlert;
	NSMutableDictionary *_installedSystemGestureViews;
	SBAnimationStepper *_suspendAnimationStepper;
	SBAnimationStepper *_statusBarAnimationStepper;
	SBAnimationStepper *_wallpaperAnimationStepper;
	id _suspendGestureCompleteForwardToEndHandler;
	id _suspendGestureCompleteBackwardToStartHandler;
	FBWorkspaceEventQueueLock *_suspendGestureWorkspaceLock;
	BOOL _shouldUnscatterForSuspendGesture;
	BOOL _switcherAnimationRevealing;
	BOOL _switcherAnimationInProgress;
	BOOL _switcherGestureRevealedOrDismissedSwitcher;
	SBSwitchAppGestureView *_switchAppGestureView;
	float _switchAppGesturePreviousPercentage;
	float _switchAppGestureEffectivePercentage;
	float _switchAppGestureInitialPercentage;
	unsigned _switchAppGestureChangedFrames;
	UIView *_pendingGestureLaunchView;
	SBApplication *_pendingAppActivatedByGesture;
	SBApplication *_appCurrentlyActivatingByGesture;
	NSMutableArray *_switchAppFullyOrderedList;
	NSArray *_switchAppFilteredList;
	BOOL _toggleSwitcherAfterLaunchAppUsesSystemGestureOrientation;
	float _ambiguousCCActivationMargin;
	NSMutableSet *_rotationPreventionReasons;
	BOOL _disableAnimationForNextIconRotation;
	BOOL _handlingHomePress;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (void)_addStatusBarToZoomView:(id)zoomView forApplication:(id)application interfaceOrientation:(int)orientation inJailRect:(CGRect)jailRect;
+ (CGAffineTransform)_transformAndFrame:(CGRect *)frame forLaunchImageContextHostViewWithOrientation:(int)orientation statusBarHeight:(float)height inJailRect:(CGRect)jailRect;
+ (CGAffineTransform)_transformAndFrame:(CGRect *)frame forStatusBarWithOrientation:(int)orientation height:(float)height inJailRect:(CGRect)jailRect;
+ (id)_zoomViewForApplication:(id)application sceneID:(id)anId screen:(id)screen image:(id)image interfaceOrientation:(int)orientation originalImageOrientation:(int)orientation6 currentImageOrientation:(int)orientation7 includeStatusBar:(BOOL)bar snapshotFrame:(CGRect *)frame decodeImage:(BOOL)image10;
+ (id)_zoomViewForApplication:(id)application sceneID:(id)anId screen:(id)screen interfaceOrientation:(int)orientation includeStatusBar:(BOOL)bar snapshotFrame:(CGRect *)frame decodeImage:(BOOL)image;
+ (id)_zoomViewWithIOSurfaceSnapshotOfApp:(id)app sceneID:(id)anId screen:(id)screen includeStatusBar:(BOOL)bar;
+ (id)_zoomViewWithSplashboardLaunchImageForApplication:(id)application sceneID:(id)anId screen:(id)screen interfaceOrientation:(int)orientation includeStatusBar:(BOOL)bar snapshotFrame:(CGRect *)frame;
+ (id)rawZoomViewForApplication:(id)application sceneID:(id)anId onScreen:(id)screen;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (CGRect)snapshotRectForOrientation:(int)orientation statusBarStyleRequest:(id)request hidden:(BOOL)hidden;
+ (id)zoomViewForApplication:(id)application sceneID:(id)anId includeStatusBar:(BOOL)bar decodeImage:(BOOL)image;
+ (id)zoomViewForContextHostView:(id)contextHostView application:(id)application sceneID:(id)anId includeStatusBar:(BOOL)bar;
- (id)init;
- (void)ACPowerChanged;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (BOOL)_activateAppSwitcher;
- (BOOL)_allowSwitcherGesture;
- (void)_animateStatusBarForSuspendGesture;
- (id)_appSwitcherController;
- (float)_appSwitcherRevealAnimationDelay;
- (void)_applicationActivationStateDidChange:(id)_applicationActivationState;
- (void)_awayControllerActivated:(id)activated;
- (void)_backgroundContrastDidChange:(id)_backgroundContrast;
- (id)_calculateSwitchAppList;
- (BOOL)_canPresentCenterController:(id)controller;
- (void)_clearAllInstalledSystemGestureViews;
- (void)_clearGestureViewVendorCacheForAppWithDisplayIdenitifier:(id)displayIdenitifier;
- (void)_clearInstalledSystemGestureViewForKey:(id)key;
- (void)_clearPendingAppActivatedByGesture:(BOOL)gesture;
- (void)_clearSwitchAppList;
- (void)_closeOpenFolderIfNecessary;
- (float)_contentRotationForOrientation:(int)orientation;
- (id)_currentFolderLegibilitySettings;
- (void)_deviceLockStateChanged:(id)changed;
- (void)_dismissAppSwitcherImmediately;
- (int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
- (void)_dismissSwitcherAnimated:(BOOL)animated;
- (id)_fakeSpringBoardStatusBar;
- (void)_getSwitchAppPrefetchApps:(id)apps initialApp:(id)app outLeftwardAppIdentifier:(id *)identifier outRightwardAppIdentifier:(id *)identifier4;
- (BOOL)_handleButtonEventToSuspendDisplays:(BOOL)suspendDisplays displayWasSuspendedOut:(BOOL *)anOut;
- (void)_hideControlCenterGrabber;
- (void)_hideKeyboard;
- (void)_hideNotificationCenterTabControl;
- (void)_hideNotificationsGestureBegan:(float)began;
- (void)_hideNotificationsGestureCancelled;
- (void)_hideNotificationsGestureChanged:(float)changed;
- (void)_hideNotificationsGestureEndedWithCompletionType:(int)completionType velocity:(CGPoint)velocity;
- (void)_ignoreEvents;
- (BOOL)_ignoringEvents;
- (void)_indicateConnectedToPower;
- (void)_installSwitchAppGesturePlaceholderViewForEndingApp:(id)endingApp;
- (void)_installSystemGestureView:(id)view forKey:(id)key forGesture:(unsigned)gesture;
- (id)_installedSystemGestureViewForKey:(id)key;
- (id)_legibilityPrototypeSettings;
- (id)_legibilitySettings;
- (void)_lockOrientationForSwitcher;
- (void)_lockOrientationForSystemGesture;
- (void)_lockOrientationForTransition;
- (id)_makeSwitchAppFilteredList:(id)list initialApp:(id)app;
- (id)_makeSwitchAppValidList:(id)list;
- (void)_noteAppDidActivate:(id)_noteApp;
- (void)_noteAppDidFailToActivate:(id)_noteApp;
- (void)_noteMainSceneCreatedForApp:(id)app;
- (CGAffineTransform)_portraitViewTransformForSwitcherSize:(CGSize)switcherSize orientation:(int)orientation;
- (BOOL)_preventShowingTabControls;
- (void)_releaseSystemGestureOrientationLock;
- (void)_releaseTransitionOrientationLock;
- (void)_reloadSwitcherController;
- (void)_resumeEventsIfNecessary;
- (void)_returnToRemoteAlertFromSwitcher:(id)switcher;
- (void)_runAppSwitcherBringupTest;
- (void)_runAppSwitcherDismissTest;
- (void)_setHidden:(BOOL)hidden;
- (void)_setToggleSwitcherAfterLaunchApp:(id)app;
- (void)_showControlCenterGestureBeganWithLocation:(CGPoint)location;
- (void)_showControlCenterGestureCancelled;
- (void)_showControlCenterGestureChangedWithLocation:(CGPoint)location velocity:(CGPoint)velocity duration:(double)duration;
- (void)_showControlCenterGestureEndedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
- (void)_showControlCenterGestureFailed;
- (void)_showNotificationsGestureBeganWithLocation:(CGPoint)location;
- (void)_showNotificationsGestureCancelled;
- (void)_showNotificationsGestureChangedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
- (void)_showNotificationsGestureEndedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
- (void)_showNotificationsGestureFailed;
- (void)_suspendGestureBegan;
- (void)_suspendGestureCancelled;
- (void)_suspendGestureChanged:(float)changed;
- (void)_suspendGestureCleanUpState;
- (void)_suspendGestureEndedWithCompletionType:(int)completionType;
- (BOOL)_suspendGestureShouldFinish;
- (void)_switchAppGestureBegan:(float)began;
- (void)_switchAppGestureCancelled;
- (void)_switchAppGestureChanged:(float)changed;
- (void)_switchAppGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;
- (void)_switchAppGestureViewAnimationComplete;
- (void)_switchToHomeScreenWallpaperAnimated:(BOOL)homeScreenWallpaperAnimated;
- (void)_switcherFixupIconsViewIfNecessary;
- (void)_switcherGestureBegan;
- (void)_switcherGestureCancelled;
- (void)_switcherGestureChanged:(float)changed;
- (void)_switcherGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;
- (BOOL)_switcherGestureIsBlockedByAppLaunchOrIgnoringEvents;
- (void)_switcherWantsToActivateDisplayLayout:(id)activateDisplayLayout displayIDsToURLs:(id)urls displayIDsToActions:(id)actions;
- (id)_systemGestureViewKeyForApp:(id)app;
- (void)_toggleSwitcher;
- (id)_toggleSwitcherAfterLaunchApp;
- (void)_toggleSwitcherForReals;
- (void)_updateLegibility;
- (void)activateApplicationAnimated:(id)animated;
- (void)activateApplicationAnimatedFromIcon:(id)icon fromLocation:(int)location;
- (void)activeInterfaceOrientationDidChangeToOrientation:(int)activeInterfaceOrientation willAnimateWithDuration:(double)duration fromOrientation:(int)orientation;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)activeInterfaceOrientation;
- (BOOL)allowAlertWindowRotation;
- (BOOL)allowSystemGestureType:(unsigned)type atLocation:(CGPoint)location;
- (float)ambiguousControlCenterActivationMargin;
- (void)animateAppSwitcherDismissalToDisplayLayout:(id)displayLayout withCompletion:(id)completion;
- (void)animateAppleDown:(BOOL)down;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)animationStepperFinishBackwardToStartCompleted:(id)startCompleted;
- (void)appSwitcher:(id)switcher wantsToActivateDisplayLayout:(id)activateDisplayLayout displayIDsToURLs:(id)urls displayIDsToActions:(id)actions;
- (void)appSwitcherNeedsToReload:(id)reload;
- (void)appSwitcherWantsToDismissImmediately:(id)dismissImmediately;
- (float)batteryCapacity;
- (int)batteryCapacityAsPercentage;
- (void)cancelVolumeEvent;
- (void)cleanUpOnFrontLocked;
- (void)cleanupRunningGestureIfNeeded;
- (void)cleanupSwitchAppGestureViews;
- (void)clearPendingAppActivatedByGesture;
- (BOOL)clickedMenuButton;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(int)style;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)styleRequest;
- (id)contentView;
- (void)dealloc;
- (void)disableAnimationForNextIconRotation;
- (void)dismissSwitcherAnimated:(BOOL)animated;
- (void)dismissSwitcherForAlert:(id)alert;
- (int)displayBatteryCapacityAsPercentage;
- (void)endRequiringWallpaperForSuspendGestureIfNecessary;
- (id)fakeStatusBarStyleRequestForStyle:(int)style;
- (void)finishLaunching;
- (void)forceIconInterfaceOrientation:(int)orientation duration:(double)duration;
- (void)getRidOfAppSwitcher;
- (void)getRotationContentSettings:(XXStruct_ykCi7C *)settings forWindow:(id)window;
- (void)handleDismissBannerSystemGesture:(id)gesture;
- (void)handleFluidHorizontalSystemGesture:(id)gesture;
- (void)handleFluidScaleSystemGesture:(id)gesture;
- (void)handleFluidVerticalSystemGesture:(id)gesture;
- (void)handleHideNotificationsSystemGesture:(id)gesture;
- (BOOL)handleMenuDoubleTap;
- (void)handleShowControlCenterSystemGesture:(id)gesture;
- (void)handleShowNotificationsSystemGesture:(id)gesture;
- (void)handleVolumeEvent:(IOHIDEventRef)event;
- (BOOL)hasPendingAppActivatedByGesture;
- (unsigned char)headsetBatteryCapacity;
- (void)hideSystemGestureBackdrop;
- (BOOL)isAppSwitcherShowing;
- (BOOL)isBatteryCharging;
- (BOOL)isConnectedToChargeIncapablePowerSource;
- (BOOL)isConnectedToUnsupportedChargingAccessory;
- (BOOL)isFakeStatusBarStyleEffectivelyDoubleHeight:(int)height;
- (BOOL)isHandlingHomeButtonPress;
- (BOOL)isHeadsetBatteryCharging;
- (BOOL)isHeadsetDocked;
- (BOOL)isOnAC;
- (void)launchApplicationByGesture:(id)gesture;
- (void)launchIcon:(id)icon fromLocation:(int)location context:(id)context;
- (void)launchPendingAppActivatedByGestureIfExists;
- (void)noteStatusBarHeightChanged:(id)changed;
- (void)openNewsstand;
- (void)prefetchAdjacentAppsAndEvictRemotes:(id)remotes;
- (void)programmaticSwitchAppGestureApplyWithPercentage:(float)percentage;
- (void)programmaticSwitchAppGestureMoveToLeft;
- (void)programmaticSwitchAppGestureMoveToRight;
- (BOOL)promptUnlockForAppActivation:(id)appActivation withCompletion:(id)completion;
- (void)releaseSwitcherOrientationLock;
- (void)removeAppFromSwitchAppList:(id)switchAppList;
- (void)removeFakeSpringBoardStatusBar;
- (void)requestApplicationEventsEnabledIfNecessary;
- (void)restoreContent;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)animated;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)animated withCompletion:(id)completion;
- (void)restoreContentUpdatingStatusBar:(BOOL)bar;
- (id)rotatingContentViewForWindow:(id)window;
- (id)rotatingFooterViewForWindow:(id)window;
- (void)scheduleApplicationForLaunchByGesture:(id)launchByGesture;
- (void)setAllowIconRotation:(BOOL)rotation forReason:(id)reason;
- (void)setAllowSwitcherRotation:(BOOL)rotation forReason:(id)reason;
- (void)setAmbiguousControlCenterActivationMargin:(float)margin forApp:(id)app;
- (void)setFakeSpringBoardStatusBarVisible:(BOOL)visible;
- (void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)unsupportedChargingAccessory;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (BOOL)shouldSendTouchesToSystemGestures;
- (BOOL)shouldShowControlCenterTabControlOnFirstSwipe;
- (BOOL)shouldShowNotificationCenterTabControlOnFirstSwipe;
- (BOOL)shouldUseControlCenterRevealConfirmation;
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
- (float)showNotificationsTabControlSwipableWidth;
- (void)showSystemGestureBackdrop;
- (void)stopRestoringIconList;
- (BOOL)supportsDetailedBatteryCapacity;
- (id)switcherController;
- (id)switcherWindow;
- (void)systemControllerRouteChanged:(id)changed;
- (id)systemGestureSnapshotForApp:(id)app includeStatusBar:(BOOL)bar decodeImage:(BOOL)image;
- (id)systemGestureSnapshotWithIOSurfaceSnapshotOfApp:(id)app includeStatusBar:(BOOL)bar;
- (void)tearDownIconListAndBar;
- (void)updateBatteryState:(id)state;
- (void)updateShouldShowCenterTabControlsOnFirstSwipe;
- (void)updateStatusBarLegibility;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
- (void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
- (id)window;
- (void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (BOOL)workspaceShouldAbortLaunchingAppDueToSwitcher:(id)workspace url:(id)url actions:(id)actions;
@end


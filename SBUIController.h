/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIWindowDelegate.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBWallpaperView, SBAppToAppTransitionController, SBDismissOnlyAlertItem, SBApplication, UIWindow, UIView, SBWallpaper, SBZoomView, UIStatusBar, UIStatusBarCorners, NSMutableDictionary, NSArray, MPAudioDeviceController, SBAnimationStepper, SBSwitchAppGestureView, SBShowcaseController, SBUIRootView, NSMutableArray;

@interface SBUIController : XXUnknownSuperclass <UIWindowDelegate> {
	UIWindow *_window;
	UIView *_iconsView;
	SBUIRootView *_rootView;
	UIView *_contentView;
	SBWallpaper *_wallpaper;
	SBWallpaperView *_wallpaperView;
	SBZoomView *_zoomLayer;
	UIStatusBar *_fakeSpringBoardStatusBar;
	UIStatusBarCorners *_fakeRedTopCorners;
	UIView *_fakeZoomBanner;
	SBShowcaseController *_showcaseController;
	SBApplication *_showcaseHostedApp;
	SBApplication *_toggleSwitcherAfterLaunchApp;
	SBAppToAppTransitionController *_appToAppTransitionController;
	unsigned _rootViewHidden : 1;
	unsigned _stealingEvents : 1;
	unsigned _ignoringEvents : 1;
	unsigned _restoringIconList : 1;
	unsigned _lastVolumeDownToControl : 1;
	unsigned _isBatteryCharging : 1;
	unsigned _isOnAC : 1;
	unsigned _connectedToUnusableFirewire : 1;
	unsigned _isConnectedToChargeIncapablePowerSource : 1;
	unsigned _allowAlertWindowRotation : 1;
	unsigned _showingZoomLayerForCrossfade : 1;
	unsigned _showcaseAnimating : 1;
	id _volumeHandler;
	float _batteryCapacity;
	float _curvedBatteryCapacity;
	int _batteryLoggingStartCapacity;
	SBDismissOnlyAlertItem *_fwChargingAlert;
	NSMutableDictionary *_installedSystemGestureViews;
	SBAnimationStepper *_suspendAnimationStepper;
	SBAnimationStepper *_statusBarAnimationStepper;
	id _suspendGestureCompleteForwardToEndHandler;
	id _suspendGestureCompleteBackwardToStartHandler;
	BOOL _switcherVisibleWhenSuspendGestureStarted;
	BOOL _switcherAnimationRevealing;
	BOOL _switcherAnimationInProgress;
	BOOL _switcherGestureRevealedOrDismissedSwitcher;
	SBSwitchAppGestureView *_switchAppGestureView;
	UIView *_systemGestureBackdrop;
	UIView *_pendingGestureLaunchView;
	SBApplication *_pendingAppActivatedByGesture;
	NSMutableArray *_switchAppFullyOrderedList;
	NSArray *_switchAppFilteredList;
	unsigned _switchAppGestureStatusBarMaintenanceBits;
	BOOL _switchAppGestureStatusBarMaintained;
	BOOL _switcherVisibleWhenSwitchAppGestureStarted;
	BOOL _toggleSwitcherAfterLaunchAppUsesSystemGestureOrientation;
	BOOL _keyboardNeedsShowcaseTranslation;
	BOOL _unprocessedKeyboardOrientationChangeForShowcase;
	BOOL _showNotificationsGestureIsShowingTab;
	MPAudioDeviceController *_tempAudioDeviceController;
}
@property(retain, nonatomic) SBShowcaseController *showcaseController;
+ (int)displayedLevelForLockScreenBatteryLevel:(int)lockScreenBatteryLevel;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)ACPowerChanged;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (BOOL)_activateSwitcher:(double)switcher;
- (BOOL)_activateSwitcherFrom:(id)from to:(id)to duration:(double)duration;
- (void)_addFakeCornersForSuspendGestureIfNeededForApp:(id)app cornerAlignment:(int)alignment;
- (void)_adjustAlertViewHierarchyForShowcaseContext:(id)showcaseContext;
- (void)_adjustViewHierarchyForShowcase:(id)showcase withContext:(id)context;
- (void)_airPlayPasswordAlertWillAppear:(id)_airPlayPasswordAlert;
- (void)_airPlayPasswordAlertWillDisappear:(id)_airPlayPasswordAlert;
- (void)_animateStatusBarForSuspendGesture;
- (float)_appSwitcherRevealAnimationDelay;
- (void)_beginTransitionFromApp:(id)app toApp:(id)app2;
- (id)_calculateSwitchAppList;
- (BOOL)_canActivateShowcaseIgnoringTouches:(BOOL)touches;
- (void)_clearAllInstalledSystemGestureViews;
- (void)_clearAppToAppTransition;
- (void)_clearInstalledSystemGestureViewForKey:(id)key;
- (void)_clearSwitchAppList;
- (void)_clearTempAudioDeviceController;
- (void)_clearZoomBanner;
- (void)_closeOpenFolderIfNecessary;
- (float)_contentRotationForOrientation:(int)orientation;
- (void)_defferedFullyRevealed:(id)revealed;
- (void)_deviceLockStateChanged:(id)changed;
- (void)_dismissBannerGestureEndedWithCompletionType:(int)completionType;
- (int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
- (void)_dismissShowcase:(double)showcase;
- (void)_dismissShowcase:(double)showcase unhost:(BOOL)unhost;
- (void)_displayDidLaunch:(id)_display;
- (BOOL)_handleButtonEventToSuspendDisplays:(BOOL)suspendDisplays displayWasSuspendedOut:(BOOL *)anOut;
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
- (void)_installSystemGestureView:(id)view forKey:(id)key forGesture:(int)gesture;
- (id)_installedSystemGestureViewForKey:(id)key;
- (void)_keyboardWillShow:(id)_keyboard;
- (void)_lockOrientationForSystemGesture;
- (void)_lockOrientationForTransition;
- (id)_makeSwitchAppFilteredList:(id)list initialApp:(id)app;
- (CGAffineTransform)_portraitViewTransformForSwitcherSize:(CGSize)switcherSize orientation:(int)orientation;
- (void)_prepareShowcaseAndHierarchy:(id)hierarchy withContext:(id)context ghostly:(BOOL)ghostly hostApp:(id)app;
- (void)_releaseSystemGestureOrientationLock;
- (void)_releaseTransitionOrientationLock;
- (void)_resumeEventsIfNecessary;
- (void)_retryLockFromSource:(id)source;
- (BOOL)_revealShowcase:(id)showcase duration:(double)duration from:(id)from to:(id)to;
- (void)_setRoundedCornersOnZoomLayerIfNecessary:(id)necessary forApp:(id)app withCornersFrame:(CGRect)cornersFrame;
- (void)_setToggleSwitcherAfterLaunchApp:(id)app;
- (void)_showNotificationsGestureBeganWithLocation:(CGPoint)location;
- (void)_showNotificationsGestureCancelled;
- (void)_showNotificationsGestureChangedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
- (void)_showNotificationsGestureEndedWithLocation:(CGPoint)location velocity:(CGPoint)velocity;
- (void)_showNotificationsGestureFailed;
- (void)_showZoomLayerWithImage:(id)image;
- (void)_showcaseBlockingViewHit:(id)hit;
- (id)_showcaseContextForOffset:(float)offset;
- (id)_snapshotUIAndUnhostForSwitcher:(id)switcher;
- (void)_suspendGestureBegan;
- (void)_suspendGestureCancelled;
- (void)_suspendGestureChanged:(float)changed;
- (void)_suspendGestureEndedWithCompletionType:(int)completionType;
- (void)_switchAppGestureBegan;
- (void)_switchAppGestureCancelled;
- (void)_switchAppGestureChanged:(float)changed;
- (void)_switchAppGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;
- (void)_switchAppGestureViewAnimationComplete;
- (void)_switcherGestureBegan;
- (void)_switcherGestureCancelled;
- (void)_switcherGestureChanged:(float)changed;
- (void)_switcherGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;
- (BOOL)_switcherGestureIsBlockedByAppLaunchOrIgnoringEvents;
- (id)_systemGestureViewKeyForApp:(id)app;
- (void)_toggleSwitcher;
- (CGAffineTransform)_transformAndFrame:(CGRect *)frame forStatusBarWithOrientation:(int)orientation height:(float)height;
- (void)_translateKeyboardWindowByOffset:(float)offset forShowcase:(id)showcase;
- (void)_unhostSwitcherAppImmediatelyAndHideForSuspend:(BOOL)suspend;
- (void)_updateWallpaperImageAndShow:(BOOL)show;
- (id)_zoomViewForAppDosado:(id)appDosado includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
- (id)_zoomViewForApplication:(id)application includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner snapshotFrame:(CGRect *)frame canUseIOSurface:(BOOL)surface;
- (id)_zoomViewWithIOSurfaceSnapshotOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
- (void)activateApplicationAnimated:(id)animated;
- (void)activateApplicationFromSwitcher:(id)switcher;
- (BOOL)activateAssistantWithOptions:(id)options;
- (BOOL)activateSwitcher;
- (void)activateURLFromBulletinList:(id)bulletinList;
- (void)addPrintTransitionView:(id)view;
- (BOOL)allowAlertWindowRotation;
- (void)animateAppleDown:(BOOL)down;
- (void)animateApplicationActivation:(id)activation animateDefaultImage:(BOOL)image scatterIcons:(BOOL)icons;
- (void)animateApplicationActivationDidStop:(id)animateApplicationActivation finished:(id)finished context:(void *)context;
- (void)animateApplicationSuspend:(id)suspend;
- (void)animateApplicationSuspendFlip:(id)flip;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)animationStepperFinishBackwardToStartCompleted:(id)startCompleted;
- (void)appTransitionViewAnimationDidStop:(id)appTransitionViewAnimation;
- (void)applicationHasDied:(id)died;
- (void)applicationOrientationChanged:(double)changed fencePort:(unsigned)port;
- (void)applicationSuspendAnimationDidStop:(id)applicationSuspendAnimation finished:(id)finished context:(void *)context;
- (void)applicationSuspendAnimationWillStart:(id)applicationSuspendAnimation context:(void *)context;
- (void)applicationSuspendFlipDidStop:(id)applicationSuspendFlip;
- (void)applicationSuspendSwitcherFadeDidStop:(id)applicationSuspendSwitcherFade;
- (double)assistantFullRevealDuration:(id)duration;
- (void)assistantWantsToBeDismissed:(id)beDismissed animated:(BOOL)animated;
- (void)assistantWantsToBeFullyRevealed:(id)beFullyRevealed withBlock:(id)block;
- (float)batteryCapacity;
- (int)batteryCapacityAsPercentage;
- (void)cancelVolumeEvent;
- (void)cleanUpAfterSlideAnimation;
- (void)cleanUpAfterZoomAnimation;
- (void)cleanUpOnFrontLocked;
- (void)cleanupRunningGestureIfNeeded;
- (void)cleanupSwitchAppGestureStatusBar;
- (void)cleanupSwitchAppGestureViews;
- (void)clearFakeSpringBoardStatusBarAndCorners;
- (void)clearPendingAppActivatedByGesture;
- (void)clearZoomLayer;
- (BOOL)clickedMenuButton;
- (id)contentView;
- (void)createFakeRedTopCorners;
- (void)createFakeSpringBoardStatusBar;
- (float)curvedBatteryCapacity;
- (int)curvedBatteryCapacityAsPercentage;
- (void)deactivateAssistant;
- (void)dealloc;
- (void)dismissAssistantAnimated:(BOOL)animated;
- (void)dismissSwitcherAnimated:(BOOL)animated;
- (void)dismissSwitcherWithoutUnhostingApp;
- (int)displayBatteryCapacityAsPercentage;
- (void)fadeIconsForScatter:(BOOL)scatter duration:(double)duration startTime:(double)time;
- (void)finishLaunching;
- (void)finishedUnscattering;
- (void)handleDismissBannerSystemGesture:(id)gesture;
- (void)handleFluidHorizontalSystemGesture:(id)gesture;
- (void)handleFluidScaleSystemGesture:(id)gesture;
- (void)handleFluidVerticalSystemGesture:(id)gesture;
- (void)handleHideNotificationsSystemGesture:(id)gesture;
- (BOOL)handleMenuDoubleTap;
- (void)handleShowNotificationsSystemGesture:(id)gesture;
- (void)handleVolumeEvent:(GSEventRef)event;
- (BOOL)hasPendingAppActivatedByGesture;
- (unsigned char)headsetBatteryCapacity;
- (void)hideSystemGestureBackdrop;
- (BOOL)isBatteryCharging;
- (BOOL)isConnectedToChargeIncapablePowerSource;
- (BOOL)isConnectedToUnusableFirewireCharger;
- (BOOL)isDisplayingWallpaper;
- (BOOL)isHeadsetBatteryCharging;
- (BOOL)isHeadsetDocked;
- (BOOL)isOnAC;
- (BOOL)isRootViewHidden;
- (BOOL)isShowingNotificationCenterTabControl;
- (BOOL)isSwitcherShowing;
- (void)launchApplicationByGesture:(id)gesture;
- (void)launchIcon:(id)icon;
- (void)launchPendingAppActivatedByGestureIfExists;
- (void)lockFromSource:(int)source;
- (void)noteInterfaceOrientationChanged;
- (void)noteStatusBarHeightChanged:(id)changed;
- (void)notifyAppResignActive:(id)active;
- (void)notifyAppResumeActive:(id)active;
- (void)openNewsstand;
- (void)prepareSwitchAppGestureStatusBar;
- (void)programmaticSwitchAppGestureApplyWithPercentage:(float)percentage;
- (void)programmaticSwitchAppGestureMoveToLeft;
- (void)programmaticSwitchAppGestureMoveToRight;
- (void)releaseSwitcherOrientationLockUnlessPrintViewIsShowing;
- (void)removeAppFromSwitchAppList:(id)switchAppList;
- (void)removePrintTransitionView:(id)view;
- (void)restoreIconListAnimated:(BOOL)animated;
- (void)restoreIconListAnimated:(BOOL)animated animateWallpaper:(BOOL)wallpaper;
- (void)restoreIconListAnimated:(BOOL)animated animateWallpaper:(BOOL)wallpaper keepSwitcher:(BOOL)switcher;
- (void)restoreIconListAnimatedIfNeeded:(BOOL)needed animateWallpaper:(BOOL)wallpaper;
- (void)restoreIconListForSuspendGesture;
- (id)rootView;
- (id)rotatingContentViewForWindow:(id)window;
- (id)rotatingFooterViewForWindow:(id)window;
- (void)scatterIconListAndBar:(BOOL)bar;
- (void)scatterIconListAndBar:(BOOL)bar fade:(BOOL)fade animateWallpaper:(BOOL)wallpaper;
- (void)scheduleApplicationForLaunchByGesture:(id)launchByGesture;
- (void)setFakeRedTopCornersVisible:(BOOL)visible;
- (void)setFakeSpringBoardStatusBarVisible:(BOOL)visible;
- (void)setIsConnectedToUnusableFirewireCharger:(BOOL)unusableFirewireCharger;
- (void)setRootViewHiddenForScatter:(BOOL)scatter duration:(double)duration startTime:(double)time;
- (void)setRootViewHiddenForScatter:(BOOL)scatter duration:(double)duration startTime:(double)time completion:(id)completion;
- (void)setShouldRasterizeAndFreezeContentView:(BOOL)rasterizeAndFreezeContentView;
- (BOOL)shouldSendTouchesToSystemGestures;
- (BOOL)shouldShowNotificationCenterTabControlOnFirstSwipe;
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
- (void)showAssistantGuideSnippetWithHeight:(float)height;
- (float)showNotificationsTabControlSwipableWidth;
- (void)showSystemGestureBackdrop;
- (void)showZoomLayerForCrossfadeFromApp:(id)app;
- (void)showZoomLayerWithDefaultImageOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
- (void)showZoomLayerWithIOSurfaceSnapshotOfApp:(id)app includeStatusBar:(BOOL)bar includeBanner:(BOOL)banner;
- (BOOL)showcaseExpectsFaceContact;
- (CGRect)snapshotRectForOrientation:(int)orientation statusBarStyle:(int)style hidden:(BOOL)hidden;
- (void)stopRestoringIconList;
- (void)systemControllerRouteChanged:(id)changed;
- (id)systemGestureSnapshotForApp:(id)app forRequester:(id)requester includeStatusBar:(BOOL)bar;
- (id)systemGestureSnapshotOfSwitcher;
- (id)systemGestureSnapshotWithIOSurfaceSnapshotOfApp:(id)app forRequester:(id)requester includeStatusBar:(BOOL)bar;
- (void)tearDownIconListAndBar;
- (void)textEffectsWindowRotated:(id)rotated;
- (void)updateBatteryState:(id)state;
- (void)updateShouldShowNotificationCenterTabControlOnFirstSwipe;
- (void)updateSwitchAppGestureStatusBar;
- (void)wakeUp:(id)up;
- (id)wallpaperView;
- (id)window;
- (void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)zoomOutCurrentUIWithDuration:(id)duration startTime:(id)time scale:(id)scale postSnapshotBlock:(id)block;
- (void)zoomWallpaper:(BOOL)wallpaper startTime:(double)time duration:(double)duration;
@end


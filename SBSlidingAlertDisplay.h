/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertDisplay.h"
#import "SpringBoard-Structs.h"

@class UIImageView, SBEmergencyCallView, SBDeviceLockView;

@interface SBSlidingAlertDisplay : SBAlertDisplay {
	UIImageView *_backgroundView;
	UIView *_topBar;
	UIView *_bottomBar;
	UIView *_overlayView;
	SBDeviceLockView *_deviceLockView;
	SBEmergencyCallView *_emergencyCallView;
	UIView *_emergencyCallTopBar;
	BOOL _playKeyboardClicks;
	unsigned _animatingEmergencyCall : 1;
	unsigned _animatingIn : 1;
	unsigned _animatingOut : 1;
	unsigned _animatingDeviceLock : 1;
	unsigned _showingDeviceLock : 1;
	unsigned _showingDeviceUnlockFailure : 1;
	unsigned _isDisplayingWallpaper : 1;
	int _currentOrientation;
}
+ (id)createBottomBarForInstance:(id)instance;
+ (id)createTopBarForInstance:(id)instance;
+ (void)setDisplayPropertiesForActivationOfAlert:(id)alert;
- (id)initWithFrame:(CGRect)frame;
- (void)_animateToHidingOrShowingDeviceLockFinished;
- (void)_animateView:(id)view direction:(int)direction;
- (void)_clearUnlockFailedIndicator;
- (void)_enableEntry;
- (void)_entryFinishedWithPassword:(id)password;
- (void)_fadeOutCompleted:(id)completed;
- (void)_fadeOutCompletedWithDisplayDisablingIconUnscatter:(BOOL)displayDisablingIconUnscatter;
- (BOOL)_isShowingWallpaper;
- (void)_resetStatusTextView;
- (void)_setTopBarImage:(id)image shadowColor:(id)color;
- (BOOL)_shouldZoomDeviceLockView;
- (void)_showUnlockFailedIndicator;
- (id)_topBarLCDImage;
- (id)_topBarLCDShadow;
- (void)_updateOverlayViewFrame;
- (void)_zoomInDeviceLockViewWithDelay:(double)delay;
- (void)_zoomOutDeviceLockViewWithDelay:(double)delay;
- (void)alertDisplayWillBecomeVisible;
- (void)animateDisplayIn:(float)anIn middleDelay:(float)delay animateStatusBar:(BOOL)bar;
- (void)animateFromEmergencyCallWithDuration:(float)duration;
- (void)animateToEmergencyCall;
- (void)animateToHidingDeviceLockFinished;
- (void)animateToShowingDeviceLock:(BOOL)showingDeviceLock;
- (void)animateToShowingDeviceLockFinished;
- (void)beginAnimatingDisplayIn:(BOOL)anIn;
- (id)bottomBar;
- (BOOL)bottomBarIsVisible;
- (int)currentOrientation;
- (void)dealloc;
- (void)deviceLockViewCancelButtonPressed:(id)pressed;
- (void)deviceLockViewEmergencyCallButtonPressed:(id)pressed;
- (void)deviceLockViewPasscodeDidChange:(id)deviceLockViewPasscode;
- (void)deviceLockViewPasscodeEntered:(id)entered;
- (void)deviceLockViewWillAnimateMaximization:(id)deviceLockView;
- (void)deviceLockViewWillAnimateMinimization:(id)deviceLockView;
- (void)deviceUnlockCanceled;
- (void)deviceUnlockFailed;
- (void)deviceUnlockSucceeded;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)dismiss;
- (float)durationForOthersActivation;
- (void)emergencyCallWasDisplayed;
- (void)emergencyCallWasRemoved;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (void)getFrameForTopButton:(CGRect *)topButton bottomButton:(CGRect *)button;
- (BOOL)isAnimatingOut;
- (BOOL)isDisplayingErrorStatus;
- (BOOL)isFullscreen;
- (BOOL)isReadyToBeRemovedFromView;
- (BOOL)isShowingDeviceLock;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
- (void)leftNavigationButtonPressed;
- (id)lockBar;
- (CGRect)middleFrame;
- (void)performAnimateDisplayIn;
- (void)removeBlockedStatus;
- (int)requiredUnlockStyle;
- (void)rightNavigationButtonPressed;
- (void)setMiddleContentAlpha:(float)alpha;
- (void)setShowingDeviceLock:(BOOL)lock;
- (void)setShowingDeviceLock:(BOOL)lock animated:(BOOL)animated;
- (void)setShowingDeviceLock:(BOOL)lock duration:(float)duration;
- (BOOL)shouldAddClippingViewDuringRotation;
- (BOOL)shouldAnimateIconsIn;
- (BOOL)shouldAnimateIconsOut;
- (BOOL)shouldEnableWirelessLCD;
- (BOOL)shouldShowBlockedRedStatus;
- (BOOL)shouldShowBottomBar;
- (BOOL)shouldShowEmergencyCallButton;
- (BOOL)shouldUseTransparentStatusBar;
- (void)showBlockedStatus;
- (BOOL)showsDesktopImage;
- (id)topBar;
- (BOOL)topBarIsVisible;
- (void)updateDesktopImage:(id)image;
- (void)updateTopBarBackground;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

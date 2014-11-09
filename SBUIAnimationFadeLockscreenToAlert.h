/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBLockScreenViewController, UIView, SBAlertManager, SBUIFullscreenAlertAdapter;

__attribute__((visibility("hidden")))
@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController {
	SBLockScreenViewController *_lockScreenViewController;
	SBAlertManager *_alertManager;
	SBUIFullscreenAlertAdapter *_toAlert;
	UIView *_cameraSnapshotView;
	BOOL _animatingFromCamera;
	BOOL _alertViewIsAnimatingItself;
	BOOL _alertIsTransparent;
	BOOL _finishedPrimaryFadeAnimation;
	BOOL _needsLockScreenAlphaRestoredOnCompletion;
}
- (id)initWithLockScreenController:(id)lockScreenController toAlert:(id)alert alertManager:(id)manager;
- (void)_alertViewFinishedAnimatingItself;
- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_evaluateTotalAnimationCompletion;
- (void)_fadeAnimationFinished;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)animationDuration;
- (void)dealloc;
@end


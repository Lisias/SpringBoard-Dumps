/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIAnimationSwitcherDismissToRemoteAlert : SBUIMainScreenAnimationController {
	SBRemoteAlertAdapter *_alert;
	SBAlertManager *_alertManager;
}
- (id)initWithTransitionContextProvider:(id)transitionContextProvider;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)animationDuration;
- (void)dealloc;
@end


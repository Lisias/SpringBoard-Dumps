/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAppToAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerGroupObserver> {
	SBApplication *_fromApp;
	SBUIAnimationController *_animationController;
	BOOL _animatedActivation;
	BOOL _animatedDeactivation;
	BOOL _deactivatingAppFromAppToAppGesture;
	BOOL _appQuitFromSwitcher;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBApplication *fromApp;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithAlertManager:(id)alertManager exitedApp:(id)app;
- (id)initWithAlertManager:(id)alertManager from:(id)from to:(id)to withResult:(id)result;
- (void)_begin;
- (void)_beginAnimation;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)reason;
- (void)_endAnimation;
- (void)_handleApplicationDidNotChange:(id)_handleApplication;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)failed;
- (void)_kickOffActivation;
- (void)_setupAnimation;
- (id)_setupAnimationFrom:(id)from to:(id)to;
- (id)_setupMilestonesFrom:(id)from to:(id)to;
- (void)_synchronizeWithSceneUpdates;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)animationControllerDidRevealApplication:(id)animationController;
- (void)dealloc;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (BOOL)shouldDismissSwitcher;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)shouldRestoreSpringBoardContentOnCleanup;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
@end


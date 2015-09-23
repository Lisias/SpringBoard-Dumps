/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationUpdateScenesTransactionObserver, SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver> {
	id _transitionCompletion;
	FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
	id _layoutTransitionContinuation;
	SBAppRepairTransaction *_appRepairTransaction;
	SBUIAnimationController *_animationController;
	NSArray *_fromApplications;
	BOOL _underLockScreenInForeground;
	BOOL _gestureInitiated;
	unsigned _preactivationForegroundRunningApplicationCount;
	BOOL _toAndFromApplicationsDiffer;
	BOOL _notifiedSlaves;
	BOOL _retriedAfterVoluntaryExit;
	SBSceneLayoutWorkspaceTransaction *_layoutTransaction;
	NSSet *_trackedProcesses;
}
@property(readonly, retain, nonatomic) NSArray *activatingApplications;
@property(readonly, retain, nonatomic) NSArray *deactivatingApplications;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSArray *fromApplications;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBSceneLayoutWorkspaceTransaction *layoutTransaction;
@property(readonly, assign) Class superclass;
@property(readonly, retain, nonatomic) NSArray *toApplications;
@property(readonly, retain, nonatomic) NSSet *trackedProcesses;
- (id)initWithTransitionRequest:(id)transitionRequest;
- (void)_acquireResignActiveAssertion;
- (void)_animationDidFinish;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(BOOL)_animation;
- (id)_applicationForScene:(id)scene;
- (void)_beginAnimation;
- (void)_beginTransition;
- (BOOL)_canBeInterrupted;
- (void)_checkForAnimationCompletion;
- (void)_childTransactionDidComplete:(id)_childTransaction;
- (void)_clearAnimation;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)reason;
- (void)_endTransition;
- (void)_fireAndClearResultBlockIfNecessaryForFailure:(BOOL)failure;
- (void)_handleApplicationDidNotChange:(id)_handleApplication;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)failed;
- (BOOL)_hasPostAnimationTasks;
- (BOOL)_hasPreAnimationTasks;
- (BOOL)_isGoingToMainSwitcher;
- (void)_kickOffAnimation;
- (void)_noteAnimationFinished;
- (void)_notifySlavesIfNecessary;
- (void)_performPostAnimationTasksWithCompletion:(id)completion;
- (void)_performPreAnimationTasksWithCompletion:(id)completion;
- (void)_relinquishResignActiveAssertion;
- (id)_scenesToBackground;
- (unsigned)_serialOverlayPreDismissalOptions;
- (id)_setupAnimation;
- (BOOL)_shouldFailForChildTransaction:(id)childTransaction;
- (BOOL)_shouldUpdateUnderLockStateForForegroundScenes;
- (void)_synchronizeWithSceneUpdates;
- (id)_transitionContext;
- (void)_willBegin;
- (void)_willFailWithReason:(id)reason;
- (void)_willInterruptWithReason:(id)reason;
- (void)activateApplications;
- (void)addSlaveTransaction:(id)transaction;
- (id)animationController;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)animationControllerDidRevealApplication:(id)animationController;
- (void)dealloc;
- (void)enumerateDeactivatingApplicationsWithBlock:(id)block;
- (void)enumerateToApplicationsWithBlock:(id)block;
- (BOOL)isFromMainSwitcher;
- (BOOL)isFromSideSwitcher;
- (BOOL)isGoingToLauncher;
- (void)performToAppStateCleanup;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (BOOL)shouldRestoreSpringBoardContentOnCleanup;
- (BOOL)shouldWatchdog:(id *)watchdog;
- (void)synchronizedTransaction:(id)transaction didCommitSynchronizedTransactions:(id)transactions;
- (void)synchronizedTransaction:(id)transaction willCommitSynchronizedTransactions:(id)transactions;
- (void)synchronizedTransactionReadyToCommit:(id)commit;
- (BOOL)toAndFromAppsDiffer;
- (void)transaction:(id)transaction didCommitSceneUpdate:(id)update;
- (void)transaction:(id)transaction didEndLayoutTransitionWithContinuation:(id)continuation;
- (void)transaction:(id)transaction performTransitionWithCompletion:(id)completion;
- (void)transaction:(id)transaction willCommitSceneUpdate:(id)update;
- (BOOL)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(id)transaction;
- (void)transactionWillBeginLayoutTransition:(id)transaction;
- (double)watchdogTimeout;
@end


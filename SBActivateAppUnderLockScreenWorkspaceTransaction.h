/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBToAppWorkspaceTransaction.h"

@class SBLockScreenViewControllerBase, SBDisableActiveInterfaceOrientationChangeAssertion;

__attribute__((visibility("hidden")))
@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppWorkspaceTransaction {
	SBLockScreenViewControllerBase *_lockScreenController;
	SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager application:(id)application lockScreenController:(id)controller;
- (id)initWithWorkspace:(id)workspace alertManager:(id)manager application:(id)application lockScreenController:(id)controller activationHandler:(id)handler;
- (void)_alertDidActivate;
- (void)_commit;
- (void)_handleAppActivationFailure;
- (void)_setupAndActivate;
- (void)_suspendWorkspaceIfNecessary;
- (void)_transactionComplete;
- (void)dealloc;
- (BOOL)selfAlertDidActivate:(id)selfAlert overAlerts:(id)alerts;
- (BOOL)selfApplicationActivated:(id)activated;
- (BOOL)selfApplicationExited:(id)exited;
- (BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
- (BOOL)selfWorkspaceDidResume;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
@end

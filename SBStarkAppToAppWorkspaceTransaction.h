/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkToAppWorkspaceTransaction.h"
#import "SBUIAnimationControllerDelegate.h"

@class SBApplication, SBUIAnimationController, BKSApplicationActivationAssertion;

__attribute__((visibility("hidden")))
@interface SBStarkAppToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBApplication *_fromApp;
	SBUIAnimationController *_animationController;
	BKSApplicationActivationAssertion *_suspendingAppAssertion;
	BOOL _animatedActivation;
	BOOL _animatedDeactivation;
}
@property(readonly, assign, nonatomic) SBApplication *fromApp;
- (id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller from:(id)from to:(id)to;
- (id)_animation;
- (void)_beginAnimation;
- (BOOL)_canBeInterrupted;
- (void)_commit;
- (id)_defaultAnimationFactory;
- (void)_doCommit;
- (void)_endAnimation;
- (void)_handleAppDidNotChange;
- (void)_interruptWithReason:(int)reason;
- (id)_newAnimationFromAppToApp;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromLauncherToNowPlaying;
- (id)_newAnimationFromNowPlayingToApp;
- (id)_newAnimationFromNowPlayingToLauncher;
- (id)_newAnimationFromNowPlayingToNowPlaying;
- (void)_noteWillActivateApplicationOnMainScreen:(id)_note underLock:(BOOL)lock;
- (id)_setupAnimationFrom:(id)from to:(id)to;
- (int)_setupMilestonesFrom:(id)from to:(id)to;
- (void)_transactionComplete;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)selfAlertDidDeactivate:(id)selfAlert;
- (BOOL)selfApplicationActivated:(id)activated;
- (BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)selfApplicationDidFinishLaunching:(id)selfApplication withInfo:(id)info;
- (BOOL)selfApplicationExited:(id)exited;
- (BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
- (BOOL)selfApplicationWillBecomeReceiver:(id)selfApplication fromApplication:(id)application;
- (BOOL)selfStarkAlertDidDeactivate:(id)selfStarkAlert;
- (id)swizzledToDisplayIfNecessary;
@end


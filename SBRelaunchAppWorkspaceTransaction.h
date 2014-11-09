/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerObserver.h"
#import "SBToAppWorkspaceTransaction.h"

@class SBStarkScreenController, SBDisableActiveInterfaceOrientationChangeAssertion, NSString, SBUIAnimationController;

__attribute__((visibility("hidden")))
@interface SBRelaunchAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerObserver> {
	SBUIAnimationController *_animationController;
	BOOL _relaunchSuspended;
	BOOL _willBeOccluded;
	SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
	SBStarkScreenController *_starkScreenController;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBStarkScreenController *starkScreenController;
@property(readonly, assign) Class superclass;
- (id)initWithAlertManager:(id)alertManager application:(id)application;
- (id)_animationForApp:(id)app;
- (void)_begin;
- (void)_didComplete;
- (void)_endAnimation;
- (void)_handleAppRelaunch:(id)relaunch;
- (id)_setupAnimationForApp:(id)app;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
@end


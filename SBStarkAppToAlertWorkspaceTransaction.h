/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkAppToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction <SBUIAnimationControllerObserver> {
	SBWorkspaceAlert *_activatingAlert;
	SBWorkspaceApplication *_topApplication;
	SBUIAnimationController *_animation;
	BOOL _animatedAppDeactivation;
	BOOL _fromStarkLauncher;
}
@property(readonly, retain, nonatomic) SBWorkspaceAlert *alert;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithTransitionRequest:(id)transitionRequest;
- (void)_begin;
- (void)_didComplete;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
@end


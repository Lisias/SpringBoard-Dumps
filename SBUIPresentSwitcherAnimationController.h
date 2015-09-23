/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIPresentSwitcherAnimationController : SBUIMainScreenAnimationController {
	BOOL _isInteractive;
}
- (id)initWithTransitionContextProvider:(id)transitionContextProvider interactive:(BOOL)interactive;
- (id)_getTransitionWindow;
- (void)_startAnimation;
- (BOOL)canTransitionWithTranslation;
- (void)endInteractionWithCommitment:(BOOL)commitment;
- (void)endTransition:(BOOL)transition withSuccess:(BOOL)success completion:(id)completion;
- (void)setTransitionParameters:(UIEdgeInsets)parameters;
@end


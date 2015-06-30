/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUISlideAppTransitionController : SBUIMainScreenAnimationController <SBUIFullscreenAnimationViewDelegate> {
	SBUISlideAppTransitionView *_transitionView;
	double _animationDelay;
	double _animationDuration;
	double _initiationTime;
}
- (id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
- (id)_animationProgressDependency;
- (BOOL)_animationShouldStart;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (void)appTransitionView:(id)view animationWillStartWithDuration:(double)animation afterDelay:(double)delay;
- (void)appTransitionViewAnimationDidStop:(id)appTransitionViewAnimation;
- (void)dealloc;
@end

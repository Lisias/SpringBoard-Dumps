/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownApp : SBUIMainScreenAnimationController {
	UIView *_viewToAnimate;
	SBAppStatusBarTransitionInfo *_appStatusBarTransitionInfo;
}
- (id)initWithDeactivatingApp:(id)deactivatingApp;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (void)animateFakeStatusBarWithParameters:(id)parameters;
- (void)animateZoomWithCompletion:(id)completion;
- (double)animationDelay;
- (double)animationDuration;
- (id)appContext;
- (id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(BOOL)startEffectivelyHidden endStyleRequest:(id)request endOrientation:(int)orientation;
- (void)cleanupZoom;
- (void)dealloc;
- (BOOL)prefersLayerHostSnapshot;
- (void)prepareZoom;
@end

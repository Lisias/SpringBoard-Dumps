/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBDismissOverlaysAnimationController : SBUIAnimationController {
	unsigned _dismissOptions;
}
@property(readonly, assign, nonatomic) unsigned dismissOptions;
- (id)initWithTransitionContextProvider:(id)transitionContextProvider;
- (id)initWithTransitionContextProvider:(id)transitionContextProvider options:(unsigned)options;
- (void)_startAnimation;
@end

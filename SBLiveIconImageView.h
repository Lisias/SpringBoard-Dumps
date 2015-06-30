/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBControlCenterObserver.h"
#import "SBIconImageView.h"


__attribute__((visibility("hidden")))
@interface SBLiveIconImageView : SBIconImageView <SBControlCenterObserver> {
	unsigned _pauseCauses;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (void)_applicationDidExit:(id)_application;
+ (void)_displayDidDeactivate:(id)_display;
+ (void)_displayWillActivate:(id)_display;
+ (void)initialize;
- (id)initWithFrame:(CGRect)frame;
- (void)_activeDisplayChanged:(id)changed;
- (void)_addPauseCause:(unsigned)cause;
- (void)_didEndScrolling:(id)scrolling;
- (BOOL)_isPausedForCause:(unsigned)cause;
- (void)_removePauseCause:(unsigned)cause;
- (void)_significantAnimationDidEnd:(id)_significantAnimation;
- (void)_significantAnimationWillBegin:(id)_significantAnimation;
- (id)_stringForPauseCause:(unsigned)pauseCause;
- (void)_willBeginScrolling:(id)scrolling;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (BOOL)isAnimationAllowed;
- (void)prepareForReuse;
- (void)setIcon:(id)icon location:(int)location animated:(BOOL)animated;
- (void)setPaused:(BOOL)paused;
- (id)snapshot;
- (void)updateAnimatingState;
- (void)updateImageAnimated:(BOOL)animated;
- (void)updateUnanimated;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkStartupToAppAnimation.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SBUIStarkStartupToNowPlaying : SBUIStarkStartupToAppAnimation {
	NSNumber *_activated;
}
- (id)initWithActivatingApp:(id)activatingApp fromLockoutView:(id)lockoutView starkScreenController:(id)controller;
- (BOOL)_animationShouldStart;
- (void)_cleanupAnimation;
- (id)_createViewToAnimate;
- (id)_getTransitionWindow;
- (void)_startAnimation;
- (void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkScreenAnimationController.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface SBUIStarkStartupAnimation : SBUIStarkScreenAnimationController {
	UIView *_fromLockoutView;
}
@property(readonly, retain, nonatomic) UIView *fromLockoutView;
- (id)initFromLockoutView:(id)lockoutView starkScreenController:(id)controller;
- (id)initWithActivatingApp:(id)activatingApp fromLockoutView:(id)lockoutView starkScreenController:(id)controller;
- (void)_cancelAnimation;
- (void)_cleanupAnimation;
- (id)_getTransitionWindow;
- (void)beginAnimation;
- (void)dealloc;
@end


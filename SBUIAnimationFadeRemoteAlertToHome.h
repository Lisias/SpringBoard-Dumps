/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBRemoteAlertAdapter, SBAlertManager;

__attribute__((visibility("hidden")))
@interface SBUIAnimationFadeRemoteAlertToHome : SBUIMainScreenAnimationController {
	SBAlertManager *_alertManager;
	SBRemoteAlertAdapter *_alert;
	int _targetStatusBarStyle;
}
- (id)initWithDeactivatingAlert:(id)deactivatingAlert alertManager:(id)manager;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_startAnimation;
- (double)animationDuration;
- (void)dealloc;
@end


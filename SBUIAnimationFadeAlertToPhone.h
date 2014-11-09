/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationAlertToPhoneBase.h"

@class SBDisableAppStatusBarAlphaChangesAssertion, UIView;

__attribute__((visibility("hidden")))
@interface SBUIAnimationFadeAlertToPhone : SBUIAnimationAlertToPhoneBase {
	SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
	int _launchingOrientation;
	UIView *_fakeStatusBarViewContainer;
	BOOL _appIsTranslucent;
}
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void)_removeFakeStatusBarIfNecessary;
- (void)_setupFakeStatusBarIfNecessary;
- (void)_showFakeStatusBarIfNecessary;
- (void)_startAnimation;
- (void)dealloc;
@end


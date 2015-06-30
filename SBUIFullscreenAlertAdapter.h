/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"


@interface SBUIFullscreenAlertAdapter : SBAlert {
	SBUIFullscreenAlertController *_alertController;
	SBAlertDisplay *_alertDisplay;
}
- (id)initWithAlertController:(id)alertController;
- (void)_pluginViewAnimatedOut:(id)anOut;
- (id)alertController;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)alertWindowDidRotateFromInterfaceOrientation:(int)alertWindow;
- (void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;
- (void)alertWindowWillAnimateRotationToInterfaceOrientation:(int)alertWindow duration:(double)duration;
- (void)alertWindowWillRotateToInterfaceOrientation:(int)alertWindow duration:(double)duration;
- (BOOL)allowsEventOnlySuspension;
- (void)animateViewOut;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonTap;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)hasTranslucentBackground;
- (void)launchSucceeded:(BOOL)succeeded;
- (void)prepareViewToAnimateOut;
- (void)setViewShouldAnimateIn:(BOOL)animateIn;
- (BOOL)viewDisplaysAboveStatusBar;
- (BOOL)viewIsReadyToBeRemoved;
@end


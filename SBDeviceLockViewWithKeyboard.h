/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDeviceLockView.h"
#import "SpringBoard-Structs.h"


@interface SBDeviceLockViewWithKeyboard : SBDeviceLockView {
	UIKeyboard *_keyboard;
	BOOL _isAnimating;
	BOOL _wasMinimizedWhenAnimationStarted;
	BOOL _triedToMinMaxWhileRotating;
}
- (void)_acceptOrCancelReturnKeyPress;
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;
- (void)_layoutEntryView;
- (void)_layoutForCurrentOrientation;
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;
- (void)dealloc;
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;
- (void)geometryChanged:(id)changed;
- (BOOL)isKeypadMinimized;
- (CGRect)keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;
- (id)keypadView;
- (void)maximize;
- (void)minimize;
- (void)returnKeyPressed:(id)pressed;
- (void)setInterfaceOrientation:(int)orientation;
- (void)setMinimized:(BOOL)minimized;
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;
@end


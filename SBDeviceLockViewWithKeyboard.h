/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDeviceLockView.h"


@interface SBDeviceLockViewWithKeyboard : SBDeviceLockView {
	UIKeyboard *_keyboard;
	BOOL _isAnimating;
	BOOL _wasMinimizedWhenAnimationStarted;
	BOOL _triedToMinMaxWhileRotating;
	BOOL _previousKeyboardShowedInlineCandidates;
}
- (void)_acceptOrCancelReturnKeyPress;
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;
- (void)_layoutEntryView;
- (void)_layoutForCurrentOrientation;
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;
- (void)geometryChanged:(id)changed;
- (BOOL)isKeypadMinimized;
- (CGRect)keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;
- (id)keypadView;
- (void)maximize;
- (void)minimize;
- (BOOL)resignFirstResponder;
- (void)returnKeyPressed:(id)pressed;
- (void)setInterfaceOrientation:(int)orientation;
- (void)setMinimized:(BOOL)minimized;
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;
@end


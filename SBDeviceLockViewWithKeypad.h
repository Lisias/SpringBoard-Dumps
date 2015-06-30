/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDeviceLockView.h"


@interface SBDeviceLockViewWithKeypad : SBDeviceLockView {
	SBDeviceLockKeypad *_keypad;
}
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;
- (void)dealloc;
- (void)deviceLockEntryFieldTextDidChange:(id)deviceLockEntryFieldText;
- (id)keypadView;
- (void)phonePad:(id)pad keyDown:(BOOL)down;
- (void)phonePad:(id)pad keyUp:(BOOL)up;
- (BOOL)playsKeyboardClicks;
- (void)setPasscode:(id)passcode;
- (void)setPlaysKeyboardClicks:(BOOL)clicks;
- (void)setShowsEmergencyCallButton:(BOOL)button;
- (BOOL)showsEmergencyCallButton;
@end


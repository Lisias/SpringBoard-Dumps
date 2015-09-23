/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBPasscodeAlertItem : XXUnknownSuperclass <UITextFieldDelegate> {
	int _mode;
	int _unlockScreenType;
	NSString *_errorString;
	BOOL _hasEmergencyCall;
}
- (id)initWithPasscodeMode:(int)passcodeMode unlockScreenType:(int)type;
- (void)_setErrorString:(id)string;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didEndCall;
- (void)dismiss:(int)dismiss;
- (void)returnKeyPressed:(id)pressed;
- (BOOL)shouldShowInLockScreen;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
@end


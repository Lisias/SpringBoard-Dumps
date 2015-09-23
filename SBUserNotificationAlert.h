/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBUserNotificationAlert : SBAlertItem {
	unsigned _replyPort;
	int _token;
	int _timeout;
	unsigned _requestFlags;
	NSString *_alertHeader;
	NSString *_alertMessage;
	NSString *_defaultButtonTitle;
	NSString *_alternateButtonTitle;
	id _textFieldTitles;
	id _textFieldValues;
	id _keyboardTypes;
	id _autocapitalizationTypes;
	id _autocorrectionTypes;
	double _creationTime;
	unsigned _replyFlags;
	unsigned _cancel : 1;
	unsigned _isActivated : 1;
	unsigned _aboveLock : 1;
	unsigned _dismissOnLock : 1;
	unsigned _allowMenuButtonDismissal : 1;
	unsigned _showInAwayItems : 1;
}
- (id)initWithMessage:(id)message replyPort:(unsigned)port requestFlags:(int)flags;
- (id)_localizedValue:(id)value withBundle:(id)bundle;
- (void)_sendResponse:(int)response;
- (id)alertSheet;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (BOOL)allowMenuButtonDismissal;
- (void)cancel;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didDeactivateForReason:(int)reason;
- (BOOL)dismissOnLock;
- (id)lockLabel;
- (void)performUnlockAction;
- (BOOL)shouldShowInLockScreen;
- (int)token;
- (void)wakeup;
- (BOOL)willShowInAwayItems;
@end


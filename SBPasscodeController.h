/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class SBPasscodeAlertItem, NSString;

@interface SBPasscodeController : NSObject {
	SBPasscodeAlertItem *_alertItem;
	int _mode;
	NSString *_password;
	NSString *_originalPassword;
	int _unlockScreenType;
}
+ (id)sharedInstance;
- (void)_passwordEntered:(id)entered;
- (void)dealloc;
- (void)forceUserToChangePasscode;
@end


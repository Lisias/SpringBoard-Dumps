/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIPasscodeLockViewDelegate.h"
#import "SBPasscodeEntryAlertView.h"
#import "SpringBoard-Structs.h"
#import "SBSIMLockEntryViewInterface.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBSIMLockEntryAlertView : SBPasscodeEntryAlertView <SBUIPasscodeLockViewDelegate, SBSIMLockEntryViewInterface> {
	NSString *_languageCode;
	NSString *_code;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithFrame:(CGRect)frame languageCode:(id)code;
- (void)_doUnlock;
- (id)_failureLabel;
- (id)_failureTitle;
- (id)_passcodeView;
- (id)_passcodeViewGenerator;
- (id)_pinAttemptsRemainingLabel;
- (void)_unlock;
- (void)alertDisplayWillBecomeVisible;
- (void)dealloc;
- (id)label;
- (id)localizedStringWithKey:(id)key;
- (void)passcodeLockViewCancelButtonPressed:(id)pressed;
- (void)passcodeLockViewPasscodeEntered:(id)entered;
- (void)setupCurrentLockAttemptState;
- (void)setupFailureState;
- (void)setupSuccess;
- (void)setupUnlockAttemptState;
- (id)titleText;
@end


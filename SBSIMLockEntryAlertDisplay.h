/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"

@class NSString;

@interface SBSIMLockEntryAlertDisplay : SBSlidingAlertDisplay {
	NSString *_languageCode;
	NSString *_code;
}
- (id)initWithFrame:(CGRect)frame languageCode:(id)code;
- (id)_pinAttemptsRemainingLabel;
- (void)_unlock;
- (void)alertDisplayWillBecomeVisible;
- (BOOL)alphanumericKeyboard;
- (void)dealloc;
- (void)deviceLockViewCancelButtonPressed:(id)pressed;
- (void)deviceLockViewPasscodeEntered:(id)entered;
- (id)failureLabel;
- (id)failureTitle;
- (id)label;
- (id)localizedStringWithKey:(id)key;
- (int)requiredUnlockStyle;
- (void)setupCurrentLockAttemptState;
- (void)setupFailureState;
- (void)setupSuccess;
- (void)setupUnlockAttemptState;
- (BOOL)shouldShowEmergencyCallButton;
- (id)titleText;
- (void)unlock;
@end


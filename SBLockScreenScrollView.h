/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLockScreenScrollView : XXUnknownSuperclass {
	id<SBUIPasscodeLockView> _passcodeView;
	SBLockScreenView *_lockScreenView;
}
@property(assign, nonatomic) SBLockScreenView *lockScreenView;
@property(assign, nonatomic) id<SBUIPasscodeLockView> passcodeView;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (BOOL)touchesShouldCancelInContentView:(id)touches;
@end


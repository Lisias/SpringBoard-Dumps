/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSoftwareUpdateForcedInstallAlertItem : SBBaseSoftwareUpdateAlertItem {
	NSTimer *_timer;
	unsigned _timeLeftUntilInstall;
	BOOL _delayOnDismissForNonUserAction;
	BOOL _delayAfterNextUnlock;
}
@property(assign, nonatomic) BOOL delayAfterNextUnlock;
@property(assign, nonatomic) BOOL delayOnDismissForNonUserAction;
- (id)initWithDescriptor:(id)descriptor;
- (void)_installUpdate;
- (void)_timerFired;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (id)lockLabel;
- (void)performUnlockAction;
- (id)shortLockLabel;
- (BOOL)shouldShowInLockScreen;
- (BOOL)undimsScreen;
- (void)updateBodyText;
- (void)willDeactivateForReason:(int)reason;
- (void)willPresentAlertView:(id)view;
@end


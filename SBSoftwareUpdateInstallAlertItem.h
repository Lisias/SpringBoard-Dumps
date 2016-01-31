/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSoftwareUpdateInstallAlertItem : SBBaseSoftwareUpdateAlertItem {
	SBSoftwareUpdateInstallLaterAlertItem *_installLaterAlertItem;
	unsigned _alertStyle;
	BOOL _undimScreen;
	BOOL _choseInstallTonight;
	SBSoftwareUpdateInstallOptions *_installOptions;
	BOOL _scheduleInstallAlertRepopOnDismiss;
	NSString *_repopReason;
	NSMutableArray *_buttonActionBlocks;
	NSTimer *_countdownTimer;
	unsigned _timeLeftUntilInstall;
}
@property(readonly, assign, nonatomic) unsigned style;
@property(readonly, assign, nonatomic) SUAutoInstallOperation *tryTonightOperation;
- (id)initWithDescriptor:(id)descriptor softwareUpdateController:(id)controller;
- (id)initWithDescriptor:(id)descriptor style:(unsigned)style softwareUpdateController:(id)controller tryTonightInstallOperation:(id)operation installOptions:(id)options;
- (void)_addButtonWithTitle:(id)title action:(id)action;
- (id)_bodyTextToModelSpecificLocalizedKey:(id)modelSpecificLocalizedKey;
- (void)_clearCountdownTimer;
- (void)_countdownTimerFired;
- (void)_installUpdateNowFromTimer:(BOOL)timer;
- (void)_scheduleInstallAlertRepopOnDismissWithReason:(id)reason;
- (void)_setTryTonightOperation:(id)operation;
- (BOOL)_shouldCountdown;
- (id)_stringFromAlertStyle:(unsigned)alertStyle;
- (void)_updateBodyTextForCountdown;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (BOOL)allowLockScreenDismissal;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (id)description;
- (void)didDeactivateForReason:(int)reason;
- (BOOL)dismissOnLock;
- (id)lockLabel;
- (void)performUnlockAction;
- (id)shortLockLabel;
- (BOOL)shouldShowInLockScreen;
- (BOOL)undimsScreen;
- (void)willDeactivateForReason:(int)reason;
- (void)willPresentAlertView:(id)view;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"


@interface SBRestoreFailureAlertItem : SBAlertItem {
	BOOL _runningModal;
}
- (void)_rebootNow;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
- (BOOL)allowMenuButtonDismissal;
- (double)autoDismissInterval;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)didPresentAlertView:(id)view;
- (void)performUnlockAction;
- (void)restartSystemEvent;
- (BOOL)shouldShowInLockScreen;
@end


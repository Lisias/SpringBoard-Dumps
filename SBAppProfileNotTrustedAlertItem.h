/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBAppProfileNotTrustedAlertItem : XXUnknownSuperclass <UIAlertViewDelegate> {
	SBApplicationIcon *_icon;
	BOOL _launchApp;
}
- (id)initWithIcon:(id)icon;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didDeactivateForReason:(int)reason;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
@end


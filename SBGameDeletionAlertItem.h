/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class SBUserInstalledApplicationIcon;

__attribute__((visibility("hidden")))
@interface SBGameDeletionAlertItem : XXUnknownSuperclass <UIAlertViewDelegate> {
	SBUserInstalledApplicationIcon *_icon;
}
- (id)initWithIcon:(id)icon;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
@end

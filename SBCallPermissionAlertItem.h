/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSURL;

@interface SBCallPermissionAlertItem : SBAlertItem {
	NSURL *_url;
}
- (id)initWithURL:(id)url;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
@end


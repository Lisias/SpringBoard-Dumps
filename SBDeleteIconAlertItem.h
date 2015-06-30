/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import "UIAlertViewDelegate.h"


@interface SBDeleteIconAlertItem : SBAlertItem <UIAlertViewDelegate> {
	SBIcon *_icon;
}
- (id)initWithIcon:(id)icon;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (id)icon;
- (BOOL)shouldShowInLockScreen;
@end


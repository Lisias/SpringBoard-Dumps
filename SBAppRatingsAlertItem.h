/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import "UIAlertViewDelegate.h"

@class UIPushButton, SBUserInstalledApplicationIcon;

@interface SBAppRatingsAlertItem : SBAlertItem <UIAlertViewDelegate> {
	SBUserInstalledApplicationIcon *_icon;
	UIPushButton *_rateButton;
	BOOL _uninstallOnDismiss;
}
- (id)initWithIcon:(id)icon uninstallOnDismiss:(BOOL)dismiss;
- (void)_starsControlValueChanged:(id)changed;
- (Class)alertSheetClass;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
@end


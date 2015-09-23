/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem {
	BOOL _newAccount;
	BOOL _promptToDisable;
}
@property(assign, nonatomic, getter=isNewAccount) BOOL newAccount;
- (id)initWithAccountURL:(id)accountURL newAccount:(BOOL)account promptToDisable:(BOOL)disable;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
@end


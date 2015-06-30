/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBWiFiAlertItem : SBAlertItem <UITableViewDelegate, UITableViewDataSource, SBWiFiManagerDelegate> {
	NSMutableArray *_networks;
	NSTimer *_scanTimer;
	UITableView *_table;
	CGSize _size;
	int _joinRow;
	NSString *_password;
	NSDictionary *_joinDict;
	SBAlertItem *_childAlert;
	BOOL _selectingRow;
	BOOL _storedPassword;
	BOOL _passwordFailed;
	BOOL _sentResponse;
}
- (id)init;
- (void)_alertViewDismissed:(id)dismissed automatically:(BOOL)automatically;
- (void)_dismissCurrentChildAlert;
- (void)_enableTable;
- (int)_joinRow;
- (void)_setDelegateForAlert:(id)alert delegate:(id)delegate;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (BOOL)allowMenuButtonDismissal;
- (void)childAlertDismissed:(id)dismissed;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (id)deletionSetForLostNetworks:(id)lostNetworks originalNetworks:(id)networks;
- (void)didDeactivateForReason:(int)reason;
- (void)didPresentAlertView:(id)view;
- (void)dismiss:(int)dismiss;
- (void)dismissAlertsForApplicationTransition;
- (BOOL)dismissOnLock;
- (id)insertionsForNewNetworks:(id)newNetworks;
- (int)numberOfRowsInTable:(id)table;
- (void)passwordEntered:(id)entered;
- (void)performUnlockAction;
- (void)scan;
- (void)setNetworks:(id)networks;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (void)wifiManager:(id)manager joinCompleted:(int)completed;
- (void)wifiManager:(id)manager scanCompleted:(id)completed;
- (void)willActivate;
- (void)willDeactivateForReason:(int)reason;
@end


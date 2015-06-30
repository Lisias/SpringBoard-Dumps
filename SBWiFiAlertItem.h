/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import "SBWiFiManagerDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"


@interface SBWiFiAlertItem : SBAlertItem <UITableViewDelegate, UITableViewDataSource, SBWiFiManagerDelegate> {
	NSMutableArray *_networks;
	NSTimer *_scanTimer;
	NSTimer *_btScanTimer;
	UITableView *_table;
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
- (void)authenticationRequestHandler:(id)handler;
- (void)childAlertDismissed:(id)dismissed;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)deviceConnectedHandler:(id)handler;
- (void)deviceConnectionFailedHandler:(id)handler;
- (void)deviceDiscoveredHandler:(id)handler;
- (void)deviceRemovedHandler:(id)handler;
- (void)deviceUpdatedHandler:(id)handler;
- (void)didDeactivateForReason:(int)reason;
- (void)didPresentAlertView:(id)view;
- (void)dismiss:(int)dismiss;
- (void)dismissAlertsForApplicationTransition;
- (BOOL)dismissOnLock;
- (int)numberOfSectionsInTableView:(id)tableView;
- (void)passwordEntered:(id)entered;
- (void)performUnlockAction;
- (void)powerChangedHandler:(id)handler;
- (void)registerBTNotificationHandlers;
- (void)scan;
- (void)setNetworks:(id)networks;
- (void)sspRequestAllowed:(BOOL)allowed;
- (void)startBTScan:(BOOL)scan;
- (void)stopBTScan;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (void)wifiManager:(id)manager joinCompleted:(int)completed;
- (void)wifiManager:(id)manager scanCompleted:(id)completed;
- (void)willActivate;
- (void)willDeactivateForReason:(int)reason;
@end


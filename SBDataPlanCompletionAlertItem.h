/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDataPlanAlertItem.h"

@class NSString;

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem {
	NSString *_carrierName;
	BOOL _newAccount;
}
@property(copy, nonatomic) NSString *carrierName;
@property(assign, nonatomic, getter=isNewAccount) BOOL newAccount;
- (id)initWithCarrierName:(id)carrierName newAccount:(BOOL)account;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
@end

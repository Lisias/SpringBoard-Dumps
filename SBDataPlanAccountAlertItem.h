/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDataPlanAlertItem.h"

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem {
	NSURL *_accountURL;
}
@property(copy, nonatomic) NSURL *accountURL;
+ (id)laterButtonTitle;
+ (id)nowButtonTitle;
- (id)initWithAccountURL:(id)accountURL;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
@end


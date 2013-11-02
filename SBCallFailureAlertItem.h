/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertItem.h"

@class NSString;

@interface SBCallFailureAlertItem : SBAlertItem {
	int _causeCode;
	NSString *_address;
	CTCallRef _call;
}
- (id)initWithCauseCode:(long)causeCode call:(CTCallRef)call;
- (void)_callback;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)isCallFailureAlertItem;
- (id)lockLabel;
- (void)performUnlockAction;
@end


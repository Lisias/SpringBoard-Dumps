/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBEdgeActivationAlertItem : SBAlertItem {
	int _error;
	NSString *_reason;
}
- (id)initWithErrorCode:(int)errorCode reason:(id)reason;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
@end


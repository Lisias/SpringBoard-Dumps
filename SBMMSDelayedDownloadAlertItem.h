/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"


@interface SBMMSDelayedDownloadAlertItem : SBAlertItem {
	NSString *_fromAddress;
	int _messageCount;
}
- (void)_showNetworkPrefs;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)setMessage:(id)message;
- (void)setMessageCount:(int)count;
@end


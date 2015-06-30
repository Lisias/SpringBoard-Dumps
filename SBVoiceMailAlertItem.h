/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"


@interface SBVoiceMailAlertItem : SBAlertItem {
	BOOL _isForVisualVoicemail;
	unsigned _recordUID;
	NSString *_title;
	NSString *_body;
	NSString *_rawSender;
	NSDate *_date;
}
@property(retain, nonatomic) NSDate *date;
@property(retain, nonatomic) NSString *rawSender;
- (void)_launchPhoneAndDisplayVoicemailRecord:(int)record;
- (void)_performAppropriateListenAction;
- (id)alertItemNotificationDate;
- (id)alertItemNotificationSender;
- (int)alertItemNotificationType;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (id)bodyText;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)isForVisualVoicemail;
- (id)lockLabel;
- (void)performUnlockAction;
- (void)setBodyText:(id)text;
- (void)setIsVisualVoicemail:(BOOL)voicemail recordUID:(unsigned)uid;
- (void)setTitle:(id)title;
- (id)title;
- (BOOL)willShowInAwayItems;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBVoicemailManager : NSObject {
	XXStruct_EX3dgA _alertMark;
	XXStruct_EX3dgA _awayItemMark;
	BOOL _hasVisualVoicemail;
	int _visualVoicemailSubscriptionToken;
}
+ (id)sharedInstance;
- (id)init;
- (void)_handleVoicemailAvailableNotification:(id)notification;
- (void)_handleVoicemailFallbackNotification;
- (void)_handleVoicemailStoreChangedNotification;
- (BOOL)_hasVisualVoicemail;
- (void)_mark:(XXStruct_EX3dgA *)mark;
- (void)_presentAlertForRecord:(void *)record visualVoicemail:(BOOL)voicemail;
- (void)_updateVisualVoicemailState;
- (id)copyVisualVoicemailRecordsForAwayItems;
- (void)dealloc;
- (void)mark;
- (void)markForAlerts;
- (void)markForAwayItems;
- (void)setHasVisualVoicemail:(BOOL)voicemail;
@end

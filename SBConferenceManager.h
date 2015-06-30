/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBConferenceManager : XXUnknownSuperclass {
	CNFConferenceController *_conferenceController;
	unsigned _chatState;
}
@property(readonly, assign) unsigned chatState;
@property(readonly, assign) CNFConferenceController *conferenceController;
+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (void)_conferenceAvailabilityChanged:(id)changed;
- (void)_conferenceCapabilityChanged:(id)changed;
- (void)_conferenceStateChanged:(id)changed;
- (void)_handleInvitation:(id)invitation;
- (void)_updateStatusBar;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)canStartConference;
- (id)currentCallRemoteUserId;
- (id)currentCallStatusDisplayString;
- (void)dealloc;
- (void)endConference;
- (BOOL)inConference;
- (void)updateStatusBar;
- (BOOL)videoConferenceInvitationExists;
@end

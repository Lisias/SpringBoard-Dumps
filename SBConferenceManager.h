/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBConferenceManager : XXUnknownSuperclass {
	CNFConferenceController *_conferenceController;
	unsigned _chatState;
}
@property(readonly, assign) unsigned chatState;
@property(readonly, assign) CNFConferenceController *conferenceController;
+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (id)_faceTimeApp;
- (void)_faceTimeAppActivationStateChanged:(id)changed;
- (void)_faceTimeAvailabilityChanged:(id)changed;
- (void)_faceTimeCapabilityChanged:(id)changed;
- (void)_faceTimeStateChanged:(id)changed;
- (void)_handleInvitation:(id)invitation;
- (void)_updateStatusBar;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)canStartFaceTime;
- (id)currentCallRemoteUserId;
- (id)currentCallStatusDisplayString;
- (void)dealloc;
- (void)endFaceTime;
- (BOOL)faceTimeInvitationExists;
- (BOOL)faceTimeIsAvailable;
- (BOOL)inFaceTime;
- (void)updateStatusBar;
@end


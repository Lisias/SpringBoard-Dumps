/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBSyncController : XXUnknownSuperclass {
	int _restoreState;
	int _resetState;
	int _restoreTimerState;
	NSTimer *_restoreTimer;
	BOOL _showingResetUI;
	BOOL _appsChangedDuringSync;
	int _restoreStartedNotifyToken;
	int _restoreEndedNotifyToken;
}
+ (id)sharedInstance;
- (void)_appInstallationNotification;
- (void)_delayedBeginReset;
- (void)_delayedQuitApplications;
- (void)_invalidateRestoreTimer;
- (BOOL)_isBackupAgentRunning;
- (void)_killApplications;
- (void)_notifyRestoreCanProceed;
- (void)_rebootNow;
- (void)_resetEnded:(id)ended;
- (void)_resetStarted:(id)started;
- (void)_restoreTimerFired:(id)fired;
- (void)_setRestoreState:(int)state;
- (void)_setupRestoreTimer;
- (void)_wirelessSyncEnded:(id)ended;
- (void)beginResetting:(BOOL)resetting;
- (void)beginRestoring;
- (void)cancelRestoring;
- (void)dealloc;
- (void)didEndResetting;
- (void)didEndRestoring:(int)restoring;
- (void)finishEndRestoring;
- (void)finishedTerminatingApplications;
- (void)frontLockedWhenPossible;
- (BOOL)isInUse;
- (BOOL)isResetting;
- (BOOL)isRestoring;
- (int)resetState;
- (int)restoreState;
- (void)startObserving;
- (void)stopObserving;
- (void)syncSessionDidEnd;
@end


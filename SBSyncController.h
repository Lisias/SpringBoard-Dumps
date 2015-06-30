/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBSyncController : NSObject {
	int _syncState;
	int _restoreState;
	int _resetState;
	int _sofwareUpdateState;
	int _restoreTimerState;
	NSTimer *_restoreTimer;
	BOOL _showingResetUI;
}
+ (id)sharedInstance;
- (void)_delayedBeginReset;
- (void)_delayedQuitApplications;
- (void)_invalidateRestoreTimer;
- (BOOL)_isBackupAgentRunning;
- (void)_killApplications;
- (void)_notifyAppsSyncWillBegin;
- (void)_notifyRestoreCanProceed;
- (void)_rebootNow;
- (void)_resetEnded:(id)ended;
- (void)_resetStarted:(id)started;
- (void)_restoreTimerFired:(id)fired;
- (void)_setupRestoreTimer;
- (void)beginResetting:(BOOL)resetting;
- (void)beginRestoring;
- (void)beginSyncing;
- (void)cancelRestoring;
- (void)cancelSyncing;
- (void)dealloc;
- (void)didEndResetting;
- (void)didEndRestoring:(int)restoring;
- (void)didEndSyncing;
- (void)didShowSyncPanel;
- (void)finishEndRestoring;
- (void)finishedTerminatingApplications;
- (void)frontLockedWhenPossible;
- (void)iTunesSyncPhaseDidFinish:(int)iTunesSyncPhase reason:(int)reason;
- (void)iTunesSyncRequestedStart;
- (BOOL)isInUse;
- (BOOL)isResetting;
- (BOOL)isRestoring;
- (BOOL)isSoftwareUpdating;
- (BOOL)isSyncing;
- (int)resetState;
- (int)restoreState;
- (void)resumeSyncing;
- (void)setSoftwareUpdateState:(int)state;
- (void)showPreSoftwareUpdateScreen;
- (void)startObserving;
- (void)stopObserving;
- (void)suspendSyncing;
- (int)syncState;
@end


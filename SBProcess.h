/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"


@interface SBProcess : NSObject {
	NSMutableSet *_assertions;
	NSMutableSet *_limitlessAssertions;
	dispatch_queue_s *_assertionsQueue;
	NSString *_jobLabel;
	BOOL _running;
	unsigned _terminateOnSuspension : 1;
	unsigned _frontmost : 1;
	unsigned _nowPlayingWithAudio : 1;
	unsigned _recordingAudio : 1;
	unsigned _usesSocketMonitoring : 1;
	unsigned _supportsBackgroundTaskAssertions : 1;
	unsigned _hasWatchdogAssertionsOut : 1;
	int _backgroundJetsamPriority;
	int _currentJetsamPriority;
	int _activationDecounter;
	int _suspendCount;
	dispatch_queue_s *_suspendQueue;
	double _lastUnlimitedAssertionRemovedAbsoluteTime;
	dispatch_source_s *_backgroundPermissionCheckTimer;
	dispatch_source_s *_backgroundPermissionExpirationWarningTimer;
	dispatch_source_s *_taskCompletionAllowIdleSleepTimer;
	int _throttleUpCPUCount;
	int _throttleUpUICount;
	dispatch_queue_s *_throttleUpQueue;
	int _priority;
	NSSet *_allowedLockedFilePaths;
	int _pid;
	unsigned _eventPort;
	unsigned _taskNamePort;
	SBProcessTimes _times;
}
@property(copy) NSSet *allowedLockedFilePaths;
@property(readonly, assign) int backgroundJetsamPriority;
@property(readonly, assign, getter=isBeingDebugged) BOOL beingDebugged;
@property(readonly, assign, getter=isBeingPtraced) BOOL beingPtraced;
@property(readonly, assign) int currentJetsamPriority;
@property(readonly, assign) double elapsedCPUTime;
@property(readonly, assign) unsigned eventPort;
@property(readonly, assign) double execTime;
@property(assign, getter=isFrontmost) BOOL frontmost;
@property(readonly, assign) BOOL hasResumeAssertion;
@property(assign) BOOL hasWatchdogAssertionsOut;
@property(copy) NSString *jobLabel;
@property(readonly, assign) NSSet *lockedFilePathsIgnoringAllowed;
@property(readonly, assign) NSString *name;
@property(assign, getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio;
@property(readonly, assign) int pid;
@property(readonly, assign) int priority;
@property(assign, getter=isRecordingAudio) BOOL recordingAudio;
@property(readonly, assign) double remainingAllowedAssertionDuration;
@property(assign, getter=isRunning) BOOL running;
@property(assign) BOOL supportsBackgroundTaskAssertions;
@property(readonly, assign) int suspendCount;
@property(readonly, assign) unsigned taskNamePort;
@property(readonly, assign) BOOL terminateOnSuspension;
@property(readonly, assign) int throttleUpCPUCount;
@property(readonly, assign) int throttleUpUICount;
@property(assign) BOOL usesSocketMonitoring;
+ (id)_allProcesses;
+ (void)_enumerateAllProcessesWithBlock:(id)block;
+ (void)_logJetsamPriorities;
+ (void)cancelTaskCompletionAllowIdleSleep;
+ (int)defaultBackgroundJetsamPriority;
+ (void)hostwideUserElapsedCPUTime:(double *)time systemElapsedCPUTime:(double *)time2 idleElapsedCPUTime:(double *)time3;
+ (void)initialize;
+ (id)launchedProcessWithBundleIdentifier:(id)bundleIdentifier path:(id)path arguments:(id)arguments environment:(id)environment standardOutputPath:(id)path5 standardErrorPath:(id)path6 machServices:(id)services threadPriority:(long long)priority frontmost:(BOOL)frontmost backgroundJetsamPriority:(int)priority10 waitForDebugger:(BOOL)debugger allowedLockedFilePaths:(id)paths terminateOnSuspension:(BOOL)suspension;
+ (id)processForPid:(int)pid;
+ (void)scheduleTaskCompletionAllowIdleSleep;
+ (void)shutdownSuspendedProcessSockets;
- (id)initWithPid:(int)pid frontmost:(BOOL)frontmost backgroundJetsamPriority:(int)priority jobLabel:(id)label eventPortName:(id)name allowedLockedFilePaths:(id)paths terminateOnSuspension:(BOOL)suspension execTime:(double)time;
- (id)_crashReportCPUUsageInfo;
- (id)_crashReportThermalsInfo;
- (void)_forceCrashReportWithReason:(int)reason description:(id)description;
- (void)_notifyOfExpirationWarning;
- (void)addAssertion:(id)assertion;
- (id)assertions;
- (void)assertionsQueue_cancelTaskCompletionAllowIdleSleep;
- (BOOL)assertionsQueue_isBeingDebugged;
- (void)assertionsQueue_markWatchdogCPUTimes;
- (double)assertionsQueue_permittedBackgroundDuration;
- (void)assertionsQueue_scheduleTaskCompletionAllowIdleSleep;
- (dispatch_source_s *)assertionsQueue_setupOneShotTimer:(double)timer withBlock:(id)block;
- (void)assertionsQueue_updateBackgroundPermissionCheckTimer;
- (BOOL)changeCounter:(int *)counter change:(int)change queue:(dispatch_queue_s *)queue ifBlockSucceeds:(id)succeeds;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)decrementCounter:(int *)counter queue:(dispatch_queue_s *)queue ifBlockSucceeds:(id)succeeds;
- (id)description;
- (void)dispatchSharedLockCheck;
- (unsigned)hash;
- (BOOL)incrementCounter:(int *)counter queue:(dispatch_queue_s *)queue ifBlockSucceeds:(id)succeeds;
- (BOOL)isEqual:(id)equal;
- (void)killWithSignal:(int)signal;
- (void)markWatchdogCPUTimes;
- (void)removeAllAssertions;
- (void)removeAssertion:(id)assertion;
- (BOOL)resume;
- (BOOL)suspend;
- (int)suspendQueue_currentJetsamPriority;
- (BOOL)suspendQueue_taskResume;
- (BOOL)suspendQueue_taskShutdownSockets:(int)sockets;
- (BOOL)suspendQueue_taskSuspend;
- (void)suspendQueue_updateJetsamPriority;
- (BOOL)throttleDownCPU;
- (BOOL)throttleDownUI;
- (BOOL)throttleUpCPU;
- (BOOL)throttleUpQueue_setPriority:(int)priority;
- (BOOL)throttleUpUI;
- (void)waitToExecOrExit;
- (void)watchdogTerminateWithReason:(int)reason format:(id)format;
@end


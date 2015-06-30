/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBacklightController : XXUnknownSuperclass {
	double _minimumLockIdleTime;
	NSTimer *_autoLockTimer;
	double _lastTimeIdleCausedDim;
	double _nextLockDurationAfterDim;
	unsigned _disableAutoDimming : 1;
	NSMutableSet *_idleTimerDisabledReasons;
	NSMutableSet *_spuriousScreenUndimmingAssertions;
	BOOL _isPendingScreenUnblankAfterCACommit;
	BOOL _undimmedForBulletinSinceLastUserEvent;
	BOOL _allowIdleTimerToBeReset;
}
@property(readonly, assign, nonatomic) BOOL isPendingScreenUnblankAfterCACommit;
@property(readonly, assign, nonatomic) BOOL screenIsOff;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)needed;
+ (BOOL)deviceSupportsBacklightRamping;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_animateBacklightToFactor:(float)factor duration:(double)duration source:(int)source silently:(BOOL)silently completion:(id)completion;
- (void)_autoLockTimerFired:(id)fired;
- (void)_cancelSetBacklightFactorToZeroAfterDelay;
- (void)_clearAutoLockTimer;
- (double)_currentLockScreenIdleTimerInterval;
- (void)_deferredScreenUnblankDone;
- (void)_didIdle;
- (void)_lockScreenDimTimerFired;
- (BOOL)_lockScreenWantsUserEventNotifications;
- (double)_nextIdleTimeDuration;
- (double)_nextLockTimeDuration;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)info;
- (void)_requestedUserEventNotificationOccurred;
- (void)_resetIdleTimerAndUndim:(BOOL)undim source:(int)source;
- (void)_resetLockScreenIdleTimerWithDuration:(double)duration mode:(int)mode;
- (void)_setBacklightFactorToZeroForProx;
- (void)_startAllowingIdleTimer;
- (void)_startFadeOutAnimationIfNecessary;
- (void)_undimFromSource:(int)source;
- (void)_userEventOccurred;
- (void)_userEventPresenceTimerExpired;
- (void)_userEventsDidIdle;
- (void)addSpuriousScreenUndimmingAssertion:(id)assertion;
- (void)allowIdleSleep;
- (void)animateBacklightToFactor:(float)factor duration:(double)duration source:(int)source completion:(id)completion;
- (void)autoLockPrefsChanged;
- (void)cancelLockScreenIdleTimer;
- (void)clearIdleTimer;
- (double)defaultLockScreenDimInterval;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (id)idleTimerDisabledReasons;
- (void)preventIdleSleep;
- (void)preventIdleSleepForNumberOfSeconds:(float)seconds;
- (void)removeSpuriousScreenUndimmingAssertion:(id)assertion;
- (void)resetIdleTimerAndUndim:(BOOL)undim;
- (void)resetIdleTimerAndUndimForBulletin;
- (void)resetLockScreenIdleTimer;
- (void)resetLockScreenIdleTimerWithDuration:(double)duration;
- (void)restoreBacklightFactorForProx;
- (void)setBacklightFactor:(float)factor source:(int)source;
- (void)setBacklightFactorPending:(float)pending;
- (void)setBacklightFactorToZeroForProx;
- (void)setIdleTimerDisabled:(BOOL)disabled forReason:(id)reason;
- (BOOL)shouldTurnOnScreenForBacklightSource:(int)backlightSource;
- (void)turnOnScreenFullyWithBacklightSource:(int)backlightSource;
@end

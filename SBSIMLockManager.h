/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBSIMLockManager : NSObject {
	BOOL _isInitialUpdate;
	int _status;
	SBSIMLockAlertItem *_currentAlert;
	SBSIMLockEntryAlert *_lockEntryAlert;
}
+ (id)sharedInstance;
- (int)_CTToSBSIMStatus:(CFStringRef)sbsimstatus;
- (BOOL)_hopelesslyPUKLocked;
- (void)_initialUpdate;
- (void)_lockdownChanged;
- (int)_statusFromCT;
- (void)_tearDownAlertAndUpdateStatus;
- (void)_tryToUpdateStatus;
- (void)_updateSIMStatus:(CFStringRef)status withOptions:(CFDictionaryRef)options;
- (void)_updateToStatus:(int)status;
- (void)alertItemDismissed:(id)dismissed;
- (void)attemptUnlock;
- (void)dealloc;
- (void)lockEntryAlertDismissed:(id)dismissed;
- (int)pinLockAttemptsRemaining;
- (int)pukLockAttemptsRemaining;
- (void)registerForAlerts;
- (void)repopAlert;
- (int)status;
@end


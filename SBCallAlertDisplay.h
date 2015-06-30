/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBCallAlertDisplay : SBSlidingAlertDisplay {
	BOOL _wasToldToStopRinging;
	BOOL _answered;
	BOOL _pendingRing;
	BOOL _isVCCallWaitingRinging;
}
+ (id)newBottomBarForInstance:(id)instance;
+ (id)newBottomLockBarForDisplay:(id)display;
+ (id)newTopBarForInstance:(id)instance;
- (void)_ringIfNecessary;
- (id)additionalURLParameter;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)answer:(id)answer;
- (void)answerCall:(CTCallRef)call;
- (void)checkForStatusChange;
- (void)dealloc;
- (void)dismiss;
- (void)finishedAnimatingIn;
- (void)handleVolumeEvent:(GSEventRef)event;
- (void)ignore;
- (void)lockBarUnlocked:(id)unlocked;
- (void)ringOrVibrate;
- (void)ringerChanged;
- (void)setAlert:(id)alert;
- (BOOL)shouldEnableWirelessLCD;
- (void)stopRingingOrVibrating;
- (void)updateCallInformationFromAlert;
- (void)updateImageFromPerson:(void *)person;
- (void)updateLCDWithName:(id)name label:(id)label breakPoint:(unsigned)point;
- (BOOL)wasToldToStopRinging;
@end


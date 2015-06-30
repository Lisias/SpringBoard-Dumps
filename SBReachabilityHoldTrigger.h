/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBReachabilityTrigger.h"


__attribute__((visibility("hidden")))
@interface SBReachabilityHoldTrigger : SBReachabilityTrigger {
	NSTimer *_fingerOnMesaTimer;
}
- (void)_clearFingerOnMesaTimer;
- (void)_fingerOnMesaTimerFired:(id)fired;
- (void)_setFingerOnMesaTimer;
- (void)biometricEventMonitor:(id)monitor handleBiometricEvent:(unsigned)event;
- (void)clearPendingReachabilityTrigger;
- (void)dealloc;
@end

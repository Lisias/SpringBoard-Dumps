/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBMainSwitcherGestureCoordinator : XXUnknownSuperclass <BSTransactionObserver> {
	SBSwitcherForcePressSystemGestureTransaction *_switcherForcePressTransaction;
	SBMainSwitcherViewController *_switcherController;
	BOOL _switcherAnimationRevealing;
	BOOL _slideUpGestureRevealedOrDismissedSwitcher;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)sharedInstance;
- (id)init;
- (id)initWithMainSwitcherController:(id)mainSwitcherController;
- (void)_forcePressGestureBeganWithGesture:(id)gesture;
- (void)_handleSwitcherForcePressGesture:(id)gesture;
- (void)_handleSwitcherSlideUpGesture:(id)gesture;
- (void)_lockOrientation;
- (void)_releaseOrientationLock;
- (void)_slideUpGestureBegan;
- (void)_slideUpGestureCancelled;
- (void)_slideUpGestureChanged:(float)changed;
- (void)_slideUpGestureEndedWithCompletionType:(int)completionType cumulativePercentage:(float)percentage;
- (void)dealloc;
- (void)handleSwitcherForcePressGesture:(id)gesture;
- (void)handleSwitcherSlideUpGesture:(id)gesture;
- (BOOL)isAppSwitcherShowing;
- (void)transactionDidComplete:(id)transaction;
@end


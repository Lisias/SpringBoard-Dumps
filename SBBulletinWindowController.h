/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBBulletinWindowController : XXUnknownSuperclass {
	UIWindow *_bulletinWindow;
	int _bulletinWindowOrientation;
	NSMutableSet *_windowClients;
	NSMutableSet *_busyClients;
	NSMutableSet *_busyReasons;
}
@property(readonly, assign, nonatomic) UIWindow *window;
@property(readonly, assign, nonatomic) int windowOrientation;
+ (id)sharedInstance;
- (id)init;
- (void)_setWindowOrientation:(int)orientation;
- (void)addBusyClient:(id)client;
- (void)addWindowClient:(id)client;
- (BOOL)allowsDismissBannerGesture;
- (BOOL)allowsHideNotificationsGesture;
- (BOOL)allowsShowNotificationsGesture;
- (void)cleanUpAfterRotatingFromOrientation:(int)orientation;
- (void)dealloc;
- (BOOL)isBusy;
- (void)prepareToRotateToOrientation:(int)orientation;
- (void)removeBusyClient:(id)client;
- (void)removeWindowClient:(id)client;
- (void)rotateToOrientation:(int)orientation;
- (void)setBulletinWindowOrientation:(int)orientation duration:(double)duration;
- (void)setBusy:(BOOL)busy forReason:(id)reason;
- (void)updateBulletinWindowOrientation;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIActiveOrientationObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, UIWindow;

__attribute__((visibility("hidden")))
@interface SBBulletinWindowController : XXUnknownSuperclass <SBUIActiveOrientationObserver> {
	UIWindow *_bulletinWindow;
	int _trueBulletinWindowOrientation;
	int _overrideBulletinWindowOrientation;
	BOOL _rotatingKeyboard;
	BOOL _aboveShowcase;
	NSMutableSet *_windowClients;
	NSMutableSet *_keyClients;
	NSMutableSet *_busyClients;
	NSMutableSet *_busyReasons;
}
@property(readonly, assign, nonatomic) UIWindow *window;
@property(assign, nonatomic, getter=isWindowAboveShowcase) BOOL windowAboveShowcase;
+ (id)sharedInstance;
+ (BOOL)shouldSuppressAlertForBulletin:(id)bulletin;
- (id)init;
- (BOOL)_allowsShowNotificationsGestureFromBanner:(BOOL)banner;
- (void)_assignWindowLevel;
- (void)_becomeKeyWindow;
- (void)_cleanUpAfterRotatingFromOrientation:(int)orientation;
- (void)_didBecomeKeyWindow:(id)window;
- (void)_didResignKeyWindow:(id)window;
- (void)_doRotationToOrientation:(int)orientation duration:(double)duration forOverride:(BOOL)override;
- (BOOL)_hasKeyWindowClients;
- (BOOL)_hasOrientationOverride;
- (BOOL)_isBusyForReason:(id)reason;
- (void)_prepareToRotateToOrientation:(int)orientation forOverride:(BOOL)override;
- (void)_resignAsKeyWindow;
- (void)_setOverrideWindowOrientation:(int)orientation;
- (void)_setTrueWindowOrientation:(int)orientation;
- (void)_updateWindowTransformAndFrameForOrientation;
- (void)activeInterfaceOrientationDidChangeToOrientation:(int)activeInterfaceOrientation willAnimateWithDuration:(double)duration fromOrientation:(int)orientation;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)activeInterfaceOrientation;
- (void)addBusyClient:(id)client;
- (void)addWindowClient:(id)client;
- (BOOL)allowsDismissBannerGesture;
- (BOOL)allowsHideNotificationsGesture;
- (BOOL)allowsShowNotificationsGesture;
- (BOOL)allowsShowNotificationsGestureFromBanner;
- (void)clearOverrideWindowOrientation;
- (void)dealloc;
- (BOOL)isBusy;
- (void)overrideWindowOrientation:(int)orientation;
- (void)removeBusyClient:(id)client;
- (void)removeWindowClient:(id)client;
- (void)setBusy:(BOOL)busy forReason:(id)reason;
- (void)updateBulletinWindowOrientation;
- (int)windowOrientation;
- (int)windowOrientationWithoutOverrides;
@end


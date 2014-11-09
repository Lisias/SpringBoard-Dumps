/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBLockScreenBatteryChargingView, NSTimer;
@protocol SBLockScreenBatteryChargingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenBatteryChargingViewController : XXUnknownSuperclass {
	SBLockScreenBatteryChargingView *_chargingView;
	NSTimer *_visibilityTimer;
	BOOL _displayDetailedCharge;
	int _chargePercentage;
	id<SBLockScreenBatteryChargingViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBLockScreenBatteryChargingViewControllerDelegate> delegate;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_batteryStatusChanged:(id)changed;
- (void)_clearVisibilityTimer;
- (void)_visibilityTimerFired:(id)fired;
- (BOOL)batteryVisible;
- (id)chargingView;
- (void)dealloc;
- (void)loadView;
- (void)prepareForDismissal;
- (void)showChargeLevelWithBatteryVisible:(BOOL)batteryVisible;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBLockScreenBatteryFillView, NSLayoutConstraint, UIView, _UILegibilityLabel, _UILegibilitySettings, _UIBackdropView, NSArray;

__attribute__((visibility("hidden")))
@interface SBLockScreenBatteryChargingView : XXUnknownSuperclass {
	UIView *_batteryContainerView;
	_UIBackdropView *_batteryBlurView;
	SBLockScreenBatteryFillView *_batteryFillView;
	_UILegibilityLabel *_chargePercentLabel;
	NSArray *_batteryConstraints;
	NSLayoutConstraint *_batteryTopOffset;
	_UILegibilitySettings *_legibilitySettings;
}
@property(assign, nonatomic) BOOL batteryVisible;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (id)initWithFrame:(CGRect)frame;
- (float)_batteryBaseline;
- (float)_batteryNoseOffset;
- (id)_chargePercentFont;
- (float)_chargingTextBaselineOffset;
- (void)_prepareConstraints;
- (void)_setChargeString:(id)string;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setChargePercentage:(int)percentage detailed:(BOOL)detailed;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBStatusBarContentsView : UIView {
	SBStatusBar *_statusBar;
	int _mode;
	BOOL _dimmed;
	BOOL _enteringAirplaneMode;
	UIView *_lockIconView;
	SBStatusBarTimeView *_timeView;
	SBStatusBarBatteryView *_batteryView;
	SBStatusBarSignalView *_signalView;
	SBStatusBarCarrierView *_carrierView;
	SBStatusBarIndicatorsView *_indicatorsView;
	SBStatusBarAirPortView *_airPortView;
	SBStatusBarNoServiceView *_noServiceView;
	SBStatusBarBluetoothView *_bluetoothView;
	SBStatusBarProgressView *_progressView;
	SBStatusBarBluetoothBatteryView *_bluetoothBatteryView;
	SBStatusBarVPNView *_vpnView;
}
+ (float)contentAlphaForMode:(int)mode;
- (id)initWithStatusBar:(id)statusBar mode:(int)mode;
- (void)airplaneModeAnimationFinished:(id)finished;
- (void)bluetoothBatteryAvailabilityChanged;
- (void)buildContentViews;
- (void)cloakChanged;
- (void)customTextChanged;
- (void)dealloc;
- (void)indicatorsChanged;
- (void)loopCarrierNameIfNecessary;
- (void)progressChanged;
- (void)reflowContentViews;
- (void)reflowContentViews:(BOOL)views;
- (void)reflowContentViewsNow;
- (void)setAirPortStrength:(int)strength;
- (void)setIsInAirplaneMode:(BOOL)airplaneMode animate:(BOOL)animate;
- (void)setIsInAirplaneMode:(BOOL)airplaneMode animate:(BOOL)animate ignoreAirPortPower:(BOOL)power;
- (void)setShowsAirPort:(BOOL)port animate:(BOOL)animate;
- (void)setShowsService:(BOOL)service SIMStatus:(id)status;
- (void)signalFormatChanged;
- (void)significantTimeChange;
- (void)start;
- (void)startClock;
- (id)statusBar;
- (void)stop;
- (void)stopClock;
- (void)updateClockFormat;
- (void)updateContentViewsAlpha;
@end


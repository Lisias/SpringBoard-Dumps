/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBluetoothAccessoryLowPowerAlertItem : XXUnknownSuperclass {
	int _batteryLevel;
	NSString *_accessoryName;
}
- (id)initWithAccessory:(id)accessory batteryLevel:(int)level;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
@end


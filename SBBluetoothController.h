/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBBluetoothController : XXUnknownSuperclass {
	NSMutableArray *_devices;
}
+ (id)sharedInstance;
- (void)addDeviceNotification:(id)notification;
- (void)batteryChanged:(id)changed;
- (int)batteryLevel;
- (void)bluetoothDeviceEndedVoiceControl:(id)control;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)control;
- (BOOL)canReportBatteryLevel;
- (void)connectionChanged:(id)changed;
- (void)dealloc;
- (id)deviceForAudioRoute:(id)audioRoute;
- (id)firstBTDeviceToReportBatteryLevel;
- (void)iapDeviceChanged:(id)changed;
- (void)noteDevicesChanged;
- (void)removeDeviceNotification:(id)notification;
- (void)startWatchingForDevices;
- (void)stopWatchingForDevices;
- (BOOL)tetheringConnected;
- (void)updateBattery;
@end


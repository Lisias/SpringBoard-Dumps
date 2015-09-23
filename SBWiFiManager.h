/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWiFiManager : XXUnknownSuperclass {
	NSRecursiveLock *_lock;
	void *_manager;
	void *_device;
	NSString *_deviceInterfaceName;
	BOOL _devicePresent;
	void *_currentNetwork;
	void *_previousNetwork;
	BOOL _currentNetworkHasBeenSet;
	BOOL _currentNetworkIsIOSHotspot;
	BOOL _currentNetworkIsIOSHotspotHasBeenSet;
	BOOL _powered;
	BOOL _poweredHasBeenSet;
	int _rssiThreshold;
	int _signalStrengthBars;
	int _signalStrengthRSSI;
	BOOL _signalStrengthHasBeenSet;
	SCDynamicStoreRef _SCDynamicStoreNetworkState;
	NSObject<OS_dispatch_source> *_SCUpdateTimeoutSource;
	void *_primaryInterface;
	BOOL _primaryInterfaceHasBeenSet;
	BOOL _isPrimaryInterface;
	BOOL _isPrimaryInterfaceChanging;
	int linkToken;
	int powerToken;
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)_cachedIsAssociated;
- (void)_linkDidChange;
- (void *)_manager;
- (void)_powerStateDidChange;
- (void)_primaryInterfaceChanged:(BOOL)changed;
- (void)_setPrimaryInterfaceHasBeenSet;
- (void)_setWiFiDevice:(void *)device;
- (void)_updateCurrentNetwork;
- (void)_updateWiFiDevice:(id)device;
- (void)_updateWiFiState;
- (id)_wifiInterface;
- (id)currentNetworkName;
- (BOOL)devicePresent;
- (BOOL)isAssociated;
- (BOOL)isAssociatedToIOSHotspot;
- (BOOL)isPowered;
- (BOOL)isPrimaryInterface;
- (id)knownNetworks;
- (void)resetSettings;
- (void)setPowered:(BOOL)powered;
- (void)setWiFiEnabled:(BOOL)enabled;
- (int)signalStrengthBars;
- (int)signalStrengthRSSI;
- (void)updateDevicePresence;
- (void)updateSignalStrength;
- (void)updateSignalStrengthFromRawRSSI:(int)rawRSSI andScaledRSSI:(float)rssi;
- (BOOL)wiFiEnabled;
- (BOOL)wifiSupported;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBDisplay : XXUnknownSuperclass {
	NSMutableDictionary *_displayValues;
	NSMutableDictionary *_activationValues;
	NSMutableDictionary *_deactivationValues;
	unsigned _displaySettings;
	unsigned _activationSettings;
	unsigned _deactivationSettings;
	NSMutableSet *_suppressVolumeHudCategories;
	float _accelerometerSampleInterval;
	unsigned _disableIdleTimer;
	unsigned _expectsFaceContact : 1;
	unsigned _accelerometerDeviceOrientationChangedEventsEnabled : 1;
	unsigned _proximityEventsEnabled : 1;
	unsigned _suppressHardwareVolumeControl : 1;
	unsigned _showsProgress;
}
+ (id)_defaultDisplayState;
+ (id)defaultValueForKey:(id)key displayIdentifier:(id)identifier urlScheme:(id)scheme;
+ (void)setDefaultValue:(id)value forKey:(id)key displayIdentifier:(id)identifier;
- (void)_exitedCommon;
- (BOOL)accelerometerDeviceOrientationChangedEventsEnabled;
- (double)accelerometerSampleInterval;
- (void)activate;
- (BOOL)activationSetting:(unsigned)setting;
- (id)activationSettingsDescription;
- (id)activationValue:(unsigned)value;
- (BOOL)allowsEventOnlySuspension;
- (double)autoDimTime;
- (double)autoLockTime;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (void)clearDisplaySettings;
- (id)copyWithZone:(NSZone *)zone;
- (void)deactivate;
- (void)deactivateAfterLocking;
- (void)deactivated;
- (BOOL)deactivationSetting:(unsigned)setting;
- (id)deactivationSettingsDescription;
- (id)deactivationValue:(unsigned)value;
- (void)dealloc;
- (BOOL)defaultStatusBarHidden;
- (int)defaultStatusBarStyle;
- (id)description;
- (id)descriptionForActivationSettings:(unsigned)activationSettings;
- (id)descriptionForDeactivationSettings:(unsigned)deactivationSettings;
- (id)descriptionForDisplaySettings:(unsigned)displaySettings;
- (BOOL)disableIdleTimer;
- (id)displayIdentifier;
- (BOOL)displaySetting:(unsigned)setting;
- (id)displaySettingsDescription;
- (id)displayValue:(unsigned)value;
- (int)effectiveStatusBarStyle;
- (void)exitedAbnormally;
- (void)exitedNormally;
- (BOOL)expectsFaceContact;
- (void)handleLock:(BOOL)lock;
- (BOOL)hardwareVolumeControlEnabled;
- (BOOL)isNowRecordingApplication;
- (void)kill;
- (void)launchSucceeded:(BOOL)succeeded;
- (int)launchingInterfaceOrientationForCurrentOrientation;
- (int)launchingInterfaceOrientationForCurrentOrientation:(int)currentOrientation;
- (BOOL)proximityEventsEnabled;
- (void)setAccelerometerDeviceOrientationChangedEventsEnabled:(BOOL)enabled;
- (void)setAccelerometerSampleInterval:(double)interval;
- (void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setActivationSetting:(unsigned)setting value:(id)value;
- (void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;
- (void)setDeactivationSetting:(unsigned)setting value:(id)value;
- (void)setDisableIdleTimer:(BOOL)timer;
- (void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;
- (void)setDisplaySetting:(unsigned)setting value:(id)value;
- (void)setExpectsFaceContact:(BOOL)contact;
- (void)setHardwareVolumeControlEnabled:(BOOL)enabled;
- (void)setProximityEventsEnabled:(BOOL)enabled;
- (void)setShowsProgress:(BOOL)progress;
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forCategory:(id)category;
- (BOOL)showSystemVolumeHUDForCategory:(id)category;
- (BOOL)showsProgress;
- (BOOL)statusBarHidden;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (id)urlScheme;
@end


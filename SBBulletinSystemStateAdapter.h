/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBulletinSystemStateAdapter : XXUnknownSuperclass {
	BBSystemStateProvider *_stateProvider;
	BBSettingsGateway *_settingsGateway;
	BOOL _quietModeEnabled;
}
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_activeBehaviorOverrideTypesChanged:(unsigned)changed;
- (void)_lockStateChanged:(id)changed;
- (void)_lostModeStateChanged;
- (void)_screenDimmed:(id)dimmed;
- (void)dealloc;
- (BOOL)quietModeEnabled;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBDisplaySettings <SBActivationSettings, SBDeactivationSettings, SBStateSettings, SBProcessSettings>
@end

__attribute__((visibility("hidden")))
@interface SBDisplaySettings : XXUnknownSuperclass <SBDisplaySettings> {
	SBActivationSettings *_activationSettings;
	SBDeactivationSettings *_deactivationSettings;
	SBStateSettings *_stateSettings;
	SBProcessSettings *_processSettings;
}
@property(retain, nonatomic) SBActivationSettings *activationSettings;
@property(retain, nonatomic) SBDeactivationSettings *deactivationSettings;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBProcessSettings *processSettings;
@property(retain, nonatomic) SBStateSettings *stateSettings;
@property(readonly, assign) Class superclass;
- (id)init;
- (void)applyActivationSettings:(id)settings;
- (void)applyDeactivationSettings:(id)settings;
- (void)applyProcessSettings:(id)settings;
- (void)applyStateSettings:(id)settings;
- (BOOL)boolForActivationSetting:(unsigned)activationSetting;
- (BOOL)boolForDeactivationSetting:(unsigned)deactivationSetting;
- (BOOL)boolForProcessSetting:(int)processSetting;
- (BOOL)boolForStateSetting:(unsigned)stateSetting;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (void)clearProcessSettings;
- (void)clearStateSettings;
- (id)copyActivationSettings;
- (id)copyDeactivationSettings;
- (id)copyProcessSettings;
- (id)copyStateSettings;
- (void)dealloc;
- (int)flagForActivationSetting:(unsigned)activationSetting;
- (int)flagForDeactivationSetting:(unsigned)deactivationSetting;
- (int)flagForProcessSetting:(int)processSetting;
- (int)flagForStateSetting:(unsigned)stateSetting;
- (id)objectForActivationSetting:(unsigned)activationSetting;
- (id)objectForDeactivationSetting:(unsigned)deactivationSetting;
- (id)objectForProcessSetting:(int)processSetting;
- (id)objectForStateSetting:(unsigned)stateSetting;
- (void)setFlag:(int)flag forActivationSetting:(unsigned)activationSetting;
- (void)setFlag:(int)flag forDeactivationSetting:(unsigned)deactivationSetting;
- (void)setFlag:(int)flag forProcessSetting:(int)processSetting;
- (void)setFlag:(int)flag forStateSetting:(unsigned)stateSetting;
- (void)setObject:(id)object forActivationSetting:(unsigned)activationSetting;
- (void)setObject:(id)object forDeactivationSetting:(unsigned)deactivationSetting;
- (void)setObject:(id)object forProcessSetting:(int)processSetting;
- (void)setObject:(id)object forStateSetting:(unsigned)stateSetting;
@end


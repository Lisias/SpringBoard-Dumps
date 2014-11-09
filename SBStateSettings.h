/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStateSettings.h"
#import "NSObject.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BSSettingDescriptionProvider.h"

@class BSMutableSettings, NSString;

@protocol SBStateSettings <NSObject>
- (void)applyStateSettings:(id)settings;
- (BOOL)boolForStateSetting:(unsigned)stateSetting;
- (int)flagForStateSetting:(unsigned)stateSetting;
- (id)objectForStateSetting:(unsigned)stateSetting;
- (void)setFlag:(int)flag forStateSetting:(unsigned)stateSetting;
- (void)setObject:(id)object forStateSetting:(unsigned)stateSetting;
@end

__attribute__((visibility("hidden")))
@interface SBStateSettings : XXUnknownSuperclass <BSSettingDescriptionProvider, SBStateSettings, NSCopying> {
	BSMutableSettings *_settings;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)init;
- (void)applyStateSettings:(id)settings;
- (id)basicDescriptionWithPrefix:(id)prefix;
- (BOOL)boolForStateSetting:(unsigned)stateSetting;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (int)flagForStateSetting:(unsigned)stateSetting;
- (id)keyDescriptionForSetting:(unsigned)setting;
- (id)objectForStateSetting:(unsigned)stateSetting;
- (id)processSettings;
- (void)setFlag:(int)flag forStateSetting:(unsigned)stateSetting;
- (void)setObject:(id)object forStateSetting:(unsigned)stateSetting;
- (id)valueDescriptionForFlag:(int)flag object:(id)object ofSetting:(unsigned)setting;
@end

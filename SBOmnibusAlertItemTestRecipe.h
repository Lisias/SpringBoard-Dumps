/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBOmnibusAlertItemTestRecipe : XXUnknownSuperclass <SBThermalWarningAlertItemDelegate, SBTestRecipe> {
	SBAlertItem *_item;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)title;
- (id)_anyAppIcon;
- (id)_anyLeafIcon;
- (id)_anySUDescriptor;
- (id)_anyUserInstalledAppIcon;
- (void)_dismissCurrentItem;
- (id)_mapsApp;
- (id)_nextAlertItemToTest;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)thermalWarningAlert:(id)alert didTriggerAction:(int)action;
@end


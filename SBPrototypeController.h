/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBTestRecipe;

__attribute__((visibility("hidden")))
@interface SBPrototypeController : XXUnknownSuperclass <SBVolumePressBandit, _UISettingsKeyObserver> {
	SBRootSettings *_rootSettings;
	UIWindow *_settingsWindow;
	PTSettingsController *_settingsController;
	NSArray *_testRecipeClassNames;
	id<SBTestRecipe> _activeTestRecipe;
	BOOL _showingSettings;
	BOOL _hasPreviousSettings;
}
@property(retain, nonatomic) id<SBTestRecipe> activeTestRecipe;
+ (void)migrateSettings;
+ (void)reloadDefaults;
+ (id)sharedInstance;
- (id)init;
- (void)_changeActiveTestRecipeIfNecessary;
- (void)_configureForDefaults;
- (BOOL)_hasPreviousSettings;
- (void)_hideSettings;
- (CGRect)_offscreenFrame;
- (BOOL)_restorePreviousSettings;
- (void)_showSettings;
- (void)_tearDownSettingsWindow;
- (id)_testRecipeClassNames;
- (void)_updatePreventingLockover;
- (void)dealloc;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (BOOL)isPrototypingEnabled;
- (BOOL)isShowingSettingsUI;
- (id)rootSettings;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)showOrHide;
@end

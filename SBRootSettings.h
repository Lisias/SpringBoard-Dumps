/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBFAnimationFactorySettings, SBAppParallaxSettings, NSString, SBHomeButtonSettings, SBAppSwitcherSettings, SBFolderSettings, SBRootAnimationSettings, SBCarDisplaySettings, SBLockScreenTestPluginSettings, SBReachabilitySettings, SBLegibilitySettings, SBLockScreenSlideUpAppSettings, SBFWallpaperSettings, SBLockScreenSettings, SBControlCenterSettings, SBNotificationCenterSettings, SBAlertItemsSettings, SBIconColorSettings, SBFadeAnimationSettings;

__attribute__((visibility("hidden")))
@interface SBRootSettings : XXUnknownSuperclass {
	BOOL _preventLockover;
	SBAppParallaxSettings *_parallaxSettings;
	SBFolderSettings *_folderSettings;
	SBRootAnimationSettings *_rootAnimationSettings;
	SBControlCenterSettings *_controlCenterSettings;
	SBAppSwitcherSettings *_appSwitcherSettings;
	SBLockScreenSettings *_lockScreenSettings;
	SBCarDisplaySettings *_carDisplaySettings;
	SBLockScreenTestPluginSettings *_lockScreenTestPluginSettings;
	SBIconColorSettings *_iconColorSettings;
	SBFadeAnimationSettings *_fadeAnimationSettings;
	SBAlertItemsSettings *_alertItemsSettings;
	SBNotificationCenterSettings *_notificationCenterSettings;
	SBLegibilitySettings *_legibilitySettings;
	SBFWallpaperSettings *_wallpaperSettings;
	SBFAnimationFactorySettings *_animationSettings;
	SBHomeButtonSettings *_homeButtonSettings;
	SBLockScreenSlideUpAppSettings *_lockScreenSlideUpAppSettings;
	SBReachabilitySettings *_reachabilitySettings;
	NSString *_testRecipeClassName;
}
@property(retain) SBAlertItemsSettings *alertItemsSettings;
@property(retain) SBFAnimationFactorySettings *animationSettings;
@property(retain) SBAppSwitcherSettings *appSwitcherSettings;
@property(retain) SBCarDisplaySettings *carDisplaySettings;
@property(retain) SBControlCenterSettings *controlCenterSettings;
@property(retain) SBFadeAnimationSettings *fadeAnimationSettings;
@property(retain) SBFolderSettings *folderSettings;
@property(retain) SBHomeButtonSettings *homeButtonSettings;
@property(retain) SBIconColorSettings *iconColorSettings;
@property(retain) SBLegibilitySettings *legibilitySettings;
@property(retain) SBLockScreenSettings *lockScreenSettings;
@property(retain) SBLockScreenSlideUpAppSettings *lockScreenSlideUpAppSettings;
@property(retain) SBLockScreenTestPluginSettings *lockScreenTestPluginSettings;
@property(retain) SBNotificationCenterSettings *notificationCenterSettings;
@property(retain) SBAppParallaxSettings *parallaxSettings;
@property(assign) BOOL preventLockover;
@property(retain) SBReachabilitySettings *reachabilitySettings;
@property(retain) SBRootAnimationSettings *rootAnimationSettings;
@property(retain) NSString *testRecipeClassName;
@property(retain) SBFWallpaperSettings *wallpaperSettings;
+ (id)settingsControllerModule;
- (BOOL)_hasPreviousSettings;
- (void)setDefaultValues;
@end


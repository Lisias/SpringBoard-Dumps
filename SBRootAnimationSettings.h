/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBReducedMotionFadeSettings, SBUnlockSettings, SBCenterAppLaunchSettings, SBCenterAppSuspendSettings, SBCrossfadeAppLaunchSettings, SBCrossfadeAppSuspendSettings, SBFolderOpenSettings, SBFolderCloseSettings;

__attribute__((visibility("hidden")))
@interface SBRootAnimationSettings : XXUnknownSuperclass {
	SBReducedMotionFadeSettings *_reducedMotionSettings;
	SBUnlockSettings *_unlockSettings;
	SBCenterAppLaunchSettings *_centerLaunchSettings;
	SBCenterAppSuspendSettings *_centerSuspendSettings;
	SBCrossfadeAppLaunchSettings *_crossfadeLaunchSettings;
	SBCrossfadeAppSuspendSettings *_crossfadeSuspendSettings;
	SBFolderOpenSettings *_folderOpenSettings;
	SBFolderCloseSettings *_folderCloseSettings;
}
@property(retain) SBCenterAppLaunchSettings *centerLaunchSettings;
@property(retain) SBCenterAppSuspendSettings *centerSuspendSettings;
@property(retain) SBCrossfadeAppLaunchSettings *crossfadeLaunchSettings;
@property(retain) SBCrossfadeAppSuspendSettings *crossfadeSuspendSettings;
@property(retain) SBFolderCloseSettings *folderCloseSettings;
@property(retain) SBFolderOpenSettings *folderOpenSettings;
@property(retain) SBReducedMotionFadeSettings *reducedMotionSettings;
@property(retain) SBUnlockSettings *unlockSettings;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
@end

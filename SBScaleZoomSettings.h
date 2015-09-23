/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBScaleZoomSettings : SBIconZoomSettings {
	BOOL _crossfadeWithZoom;
	SBAnimationSettings *_outerFolderFadeSettings;
	SBAnimationSettings *_crossfadeSettings;
}
@property(retain) SBAnimationSettings *crossfadeSettings;
@property(assign) BOOL crossfadeWithZoom;
@property(retain) SBAnimationSettings *outerFolderFadeSettings;
+ (id)settingsControllerModule;
- (id)effectiveCrossfadeAnimationSettings;
- (void)setDefaultValues;
@end


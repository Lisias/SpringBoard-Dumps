/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWallpaperLegibilitySettingsProvider : XXUnknownSuperclass <SBWallpaperObserver, SBFLegibilitySettingsProvider> {
	id<SBFLegibilitySettingsProviderDelegate> _delegate;
	int _variant;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, assign) Class superclass;
- (id)initWithVariant:(int)variant;
- (void)dealloc;
- (void)wallpaperDidChangeForVariant:(int)wallpaper;
- (void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
@end


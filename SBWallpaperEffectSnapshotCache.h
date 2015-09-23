/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWallpaperEffectSnapshotCache : XXUnknownSuperclass <SBWallpaperObserver> {
	NSMutableSet *_mappedImageKeys;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)snapshotForKey:(id)key withGenerationBlockIfNecessary:(id)generationBlockIfNecessary;
- (void)wallpaperWillChangeForVariant:(int)wallpaper;
@end


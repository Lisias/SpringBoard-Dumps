/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBIconModel : XXUnknownSuperclass {
	NSDictionary *_desiredIconState;
	NSOrderedSet *_desiredIconStateFlattened;
	NSMutableDictionary *_leafIconsByIdentifier;
	NSSet *_hiddenIconTags;
	NSSet *_visibleIconTags;
	BOOL _tagsHaveBeenSet;
	SBRootFolder *_rootFolder;
	id<SBIconModelStore> _store;
	id<SBIconModelApplicationDataSource> _applicationDataSource;
	id<SBIconModelDelegate> _delegate;
	BOOL _allowsSaving;
}
@property(assign, nonatomic) BOOL allowsSaving;
@property(readonly, retain, nonatomic) id<SBIconModelApplicationDataSource> applicationDataSource;
@property(assign, nonatomic) id<SBIconModelDelegate> delegate;
@property(retain, nonatomic) NSDictionary *leafIconsByIdentifier;
@property(readonly, retain, nonatomic) id<SBIconModelStore> store;
- (id)initWithStore:(id)store applicationDataSource:(id)source;
- (id)_applicationIcons;
- (BOOL)_canAddDownloadingIconForBundleID:(id)bundleID;
- (id)_iconState;
- (id)_indexPathInRootFolder:(id)rootFolder forNewIcon:(id)newIcon isDesignatedLocation:(BOOL *)location replaceExistingIconAtIndexPath:(id *)indexPath;
- (id)_newsstandIconInFolder:(id)folder outIndexPath:(id *)path;
- (void)_postIconVisibilityChangedNotificationShowing:(id)showing hiding:(id)hiding;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)_replaceAppIconsWithDownloadingIcons:(id)downloadingIcons;
- (void)_saveDesiredIconState;
- (void)_saveIconState;
- (id)_unarchiveRootFolder;
- (id)addBookmarkIconForWebClip:(id)webClip;
- (id)addDownloadingIconForBundleID:(id)bundleID withIdentifier:(id)identifier;
- (id)addDownloadingIconForDownload:(id)download;
- (void)addIcon:(id)icon;
- (void)addIconForApplication:(id)application;
- (id)applicationIconForBundleIdentifier:(id)bundleIdentifier;
- (id)bookmarkIconForWebClipIdentifier:(id)webClipIdentifier;
- (void)clearDesiredIconState;
- (void)clearDesiredIconStateIfPossible;
- (void)dealloc;
- (void)deleteIconState;
- (id)downloadingIconForBundleIdentifier:(id)bundleIdentifier;
- (id)expectedIconForDisplayIdentifier:(id)displayIdentifier;
- (id)exportFlattenedState:(BOOL)state includeMissingIcons:(BOOL)icons;
- (id)exportPendingState:(BOOL)state includeMissingIcons:(BOOL)icons;
- (id)exportState:(BOOL)state;
- (id)forecastedLayoutForIconState:(id)iconState includeMissingIcons:(BOOL)icons;
- (BOOL)hasDesiredIconState;
- (id)iconState;
- (id)iconsOfClass:(Class)aClass;
- (BOOL)importState:(id)state;
- (id)indexPathForIconInPlatformState:(id)platformState;
- (id)indexPathForNewIcon:(id)newIcon isDesignatedLocation:(BOOL *)location replaceExistingIconAtIndexPath:(id *)indexPath;
- (BOOL)isIconVisible:(id)visible;
- (void)layout;
- (id)leafIconForIdentifier:(id)identifier;
- (id)leafIcons;
- (void)loadAllIcons;
- (void)localeChanged;
- (id)newsstandIcon;
- (void)removeIcon:(id)icon;
- (void)removeIconForIdentifier:(id)identifier;
- (id)rootFolder;
- (void)saveIconStateIfNeeded;
- (void)setVisibilityOfIconsWithVisibleTags:(id)visibleTags hiddenTags:(id)tags;
- (id)visibleIconIdentifiers;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver> {
	NSMutableArray *_cachedMiniGrids;
	SBFolder *_folder;
	NSHashTable *_nodeObservers;
	NSMutableSet *_finishedDownloadIdentifiers;
	int _progressState;
	float _progressPercent;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (Class)_iconGridImageClass;
+ (unsigned)_maxIconsInGridImage;
- (id)initWithFolder:(id)folder;
- (void)_adjustForIconsAdded:(id)iconsAdded removed:(id)removed;
- (void)_appPlaceholdersDidChange:(id)_appPlaceholders;
- (void)_containedIconImageChanged:(id)changed;
- (id)_miniIconGridForPage:(int)page;
- (void)_updateBadgeValue;
- (void)_updateProgress;
- (void)addNodeObserver:(id)observer;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)identifier;
- (void)dealloc;
- (id)displayName;
- (id)folder;
- (void)folder:(id)folder didAddList:(id)list;
- (void)folder:(id)folder didRemoveLists:(id)lists atIndexes:(id)indexes;
- (id)generateIconImage:(int)image;
- (id)getGenericIconImage:(int)image;
- (unsigned)gridCellIndexForIconIndex:(unsigned)iconIndex;
- (id)gridImages;
- (BOOL)hasFolderIconView;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (void)iconImageDidUpdate:(id)iconImage;
- (Class)iconImageViewClassForLocation:(int)location;
- (id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
- (BOOL)isFolderIcon;
- (void)launchFromLocation:(int)location;
- (unsigned)listIndexForContainedIcon:(id)containedIcon;
- (void)localeChanged;
- (id)miniGridCellImageForIcon:(id)icon;
- (void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
- (void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
- (id)nodeDescriptionWithPrefix:(id)prefix;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
- (void)noteContainedIcon:(id)icon replacedIcon:(id)icon2;
- (void)noteContainedIconsAdded:(id)added removed:(id)removed;
- (BOOL)progressIsPaused;
- (float)progressPercent;
- (int)progressState;
- (void)purgeCachedImages;
- (void)removeNodeObserver:(id)observer;
- (BOOL)shouldAnimateProgress;
- (void)updateLabel;
@end


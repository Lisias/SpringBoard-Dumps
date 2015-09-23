/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBFolder : XXUnknownSuperclass <SBIconIndexNode, SBIconIndexMutableListObserver> {
	NSString *_displayName;
	NSString *_defaultDisplayName;
	BOOL _open;
	SBFolderIcon *_icon;
	BOOL _cancelable;
	NSMutableSet *_addedIcons;
	NSMutableSet *_removedIcons;
	NSMutableDictionary *_coalesceChangesRequests;
	NSHashTable *_nodeObservers;
	SBIconIndexMutableList *_lists;
}
@property(assign, nonatomic, getter=isCancelable) BOOL cancelable;
@property(retain, nonatomic) NSString *displayName;
@property(assign, nonatomic) SBFolderIcon *icon;
@property(assign, nonatomic) BOOL isOpen;
+ (int)maxListCount;
- (id)init;
- (BOOL)_isCoalescingContentChanges;
- (void)_setDisplayNameFromRepresentation:(id)representation;
- (id)addEmptyList;
- (id)addIcon:(id)icon;
- (void)addNodeObserver:(id)observer;
- (id)allIcons;
- (BOOL)canAddIcon;
- (void)compactIconsAndLists;
- (BOOL)compactLists;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)identifier;
- (void)dealloc;
- (id)folderContainingIndexPath:(id)path relativeIndexPath:(id *)path2;
- (id)folderIcons;
- (Class)folderSlidingViewClass;
- (id)folderType;
- (Class)folderViewClass;
- (id)iconAtIndexPath:(id)indexPath;
- (id)iconsOfClass:(Class)aClass;
- (unsigned)indexOfList:(id)list;
- (id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)firstFreeSlotAvoidingFirstList;
- (id)indexPathForIcon:(id)icon;
- (id)indexPathForIconWithIdentifier:(id)identifier;
- (id)indexPathForNodeIdentifier:(id)nodeIdentifier;
- (id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
- (id)insertIcon:(id)icon atIndexPath:(id *)indexPath;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (BOOL)isIconStateDirty;
- (BOOL)isNewsstandFolder;
- (id)leafIcons;
- (void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
- (void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
- (id)listAtIndex:(unsigned)index;
- (id)listContainingIcon:(id)icon;
- (id)listContainingLeafIconWithIdentifier:(id)identifier;
- (unsigned)listCount;
- (Class)listModelClass;
- (Class)listViewClass;
- (id)lists;
- (void)markIconStateClean;
- (BOOL)matchesRepresentation:(id)representation;
- (id)nodeDescriptionWithPrefix:(id)prefix;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
- (void)noteIcon:(id)icon replacedIcon:(id)icon2;
- (void)noteIconAdded:(id)added;
- (void)noteIconRemoved:(id)removed;
- (id)performCascadingIconInsertion:(id)insertion listIndex:(unsigned)index iconIndex:(unsigned)index3 addPageIfNecessary:(BOOL)necessary;
- (id)placeIcon:(id)icon atIndexPath:(id *)indexPath;
- (void)purgeIconImages;
- (void)purgeLists;
- (void)removeEmptyList:(id)list;
- (void)removeIconAtIndexPath:(id)indexPath;
- (void)removeNodeObserver:(id)observer;
- (id)representation;
- (BOOL)resetWithRepresentation:(id)representation model:(id)model leafIdentifiersAdded:(id)added;
- (void)startCoalescingContentChangesWithRequestID:(id)requestID;
- (void)stopCoalescingContentChangesForRequestID:(id)requestID;
- (void)stopCoalescingContentChangesForRequestID:(id)requestID forceReload:(BOOL)reload;
- (id)visibleIcons;
@end


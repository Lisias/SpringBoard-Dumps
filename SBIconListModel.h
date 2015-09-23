/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBIconListModel : XXUnknownSuperclass {
	NSMutableArray *_icons;
	BOOL _iconStateIsDirty;
	SBFolder *_folder;
}
+ (unsigned)maxIcons;
+ (Class)viewClass;
- (id)initWithFolder:(id)folder;
- (BOOL)addIcon:(id)icon;
- (BOOL)addIcon:(id)icon asDirty:(BOOL)dirty;
- (BOOL)allowsAddingIcon:(id)icon;
- (void)compactIcons;
- (BOOL)containsIcon:(id)icon;
- (BOOL)containsLeafIconWithIdentifier:(id)identifier;
- (void)dealloc;
- (id)description;
- (unsigned)firstFreeSlotIndex;
- (unsigned)firstFreeSlotIndexForType:(int)type;
- (id)folder;
- (id)iconAtIndex:(unsigned)index;
- (id)icons;
- (id)iconsOfClass:(Class)aClass;
- (unsigned)indexForIcon:(id)icon;
- (unsigned)indexForLeafIconWithIdentifier:(id)identifier;
- (id)indexPathForEntity:(id)entity;
- (id)indexPathForFirstFreeSlot;
- (id)insertIcon:(id)icon atIndex:(unsigned *)index;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (BOOL)isIconStateDirty;
- (void)markIconStateClean;
- (BOOL)matchesRepresentation:(id)representation;
- (BOOL)needsCompacting;
- (void)notifyAdded:(id)added;
- (id)placeIcon:(id)icon atIndex:(unsigned *)index;
- (id)placeIcon:(id)icon atIndex:(unsigned *)index notify:(BOOL)notify;
- (void)removeIcon:(id)icon;
- (void)removeIconAtIndex:(unsigned)index;
- (id)representation;
- (BOOL)resetWithRepresentation:(id)representation leafIdentifiersAdded:(id)added;
@end


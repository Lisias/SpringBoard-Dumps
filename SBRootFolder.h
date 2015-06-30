/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBRootFolder : SBFolder {
	SBDockIconListModel *_dock;
}
+ (int)maxListCount;
- (id)init;
- (void)dealloc;
- (id)dockModel;
- (id)iconsOfClass:(Class)aClass;
- (unsigned)indexOfIconList:(id)iconList;
- (id)indexPathForEntity:(id)entity;
- (BOOL)isIconStateDirty;
- (id)listAtIndex:(unsigned)index;
- (id)listContainingIcon:(id)icon;
- (id)listContainingLeafIconWithIdentifier:(id)identifier;
- (Class)listModelClass;
- (Class)listViewClass;
- (void)markIconStateClean;
- (void)placeIconOnFirstPage:(id)page;
- (void)removeEmptyList:(id)list;
- (id)representation;
- (BOOL)resetWithRepresentation:(id)representation leafIdentifiersAdded:(id *)added;
@end


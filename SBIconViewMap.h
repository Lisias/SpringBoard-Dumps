/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBIconViewMap : XXUnknownSuperclass <SBIconViewLocker, SBIconObserver> {
	NSMapTable *_iconViewsForIcons;
	id<SBIconViewDelegate> _iconViewdelegate;
	NSMapTable *_recycledIconViewsByType;
	NSMapTable *_labels;
	NSMapTable *_badges;
}
+ (id)homescreenMap;
+ (Class)iconViewClassForIcon:(id)icon location:(int)location;
- (id)init;
- (void)_addIconView:(id)view forIcon:(id)icon;
- (id)_iconViewForIcon:(id)icon;
- (void)_modelListAddedIcon:(id)icon;
- (void)_modelReloadedIcons;
- (void)_modelReloadedState;
- (void)_modelRemovedIcon:(id)icon;
- (void)_recycleIconView:(id)view;
- (void)captureIconLabel:(id)label forIcon:(id)icon;
- (void)dealloc;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (id)iconViewForIcon:(id)icon;
- (id)mappedIconViewForIcon:(id)icon;
- (void)purgeIconFromMap:(id)map;
- (void)purgeRecycledIconViewsForClass:(Class)aClass;
- (void)recycleAndPurgeAll;
- (void)recycleViewForIcon:(id)icon;
- (id)releaseIconLabelForIcon:(id)icon;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLeafIconDataSource.h"
#import "SpringBoard-Structs.h"
#import "SBApplicationRestrictionObserver.h"
#import "SBFolderControllerDelegate.h"
#import "SBIconViewDelegate.h"
#import "SBIconModelDelegate.h"
#import "SBIconViewMapDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, SBIcon, NSString, _UILegibilitySettings, SBIconViewMap, NSIndexPath, SBStarkFolderController, SBStarkFakeIconOperationController, SBIconModel, SBStarkIconLayoutOverrideStrategy, AVExternalDevice;

__attribute__((visibility("hidden")))
@interface SBStarkIconController : XXUnknownSuperclass <SBIconModelDelegate, SBApplicationRestrictionObserver, SBFolderControllerDelegate, SBIconViewMapDelegate, SBIconViewDelegate, SBLeafIconDataSource> {
	SBIconModel *_iconModel;
	SBIconViewMap *_iconViewMap;
	SBStarkFolderController *_rootFolderController;
	unsigned _interactionAffordances;
	AVExternalDevice *_externalDevice;
	_UILegibilitySettings *_legibilitySettings;
	SBIcon *_highlightedIcon;
	SBIcon *_launchingIcon;
	SBIcon *_focusedIconForLayout;
	NSIndexPath *_indexPathToResetTo;
	SBStarkFakeIconOperationController *_fakeIconOperationController;
	SBStarkIconLayoutOverrideStrategy *_iconLayoutOverrideStrategy;
	BOOL _geoSupported;
	NSSet *_visibleTags;
	NSSet *_hiddenTags;
	BOOL _invalidated;
	BOOL _hidden;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBStarkIconLayoutOverrideStrategy *iconLayoutOverrideStrategy;
@property(readonly, assign) Class superclass;
- (id)initWithInteractionAffordances:(unsigned)interactionAffordances externalDevice:(id)device;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (BOOL)_buttons:(id)buttons hasType:(int)type;
- (void)_clearHighlightedIcon;
- (Class)_controllerClassForFolderClass:(Class)folderClass;
- (void)_geoSupportChanged;
- (void)_iconModelDidLayout:(id)_iconModel;
- (void)_iconModelDidReloadIcons:(id)_iconModel;
- (void)_iconModelWillLayout:(id)_iconModel;
- (void)_iconModelWillReloadIcons:(id)_iconModel;
- (void)_iconVisibilityChanged:(id)changed;
- (void)_installedAppsDidChange:(id)_installedApps;
- (void)_launchIcon:(id)icon;
- (void)_moveWithEvent:(id)event;
- (void)_physicalButtonsBegan:(id)began withEvent:(id)event;
- (void)_physicalButtonsEnded:(id)ended withEvent:(id)event;
- (void)_prepareToResetRootIconLists;
- (void)_resetRootIconLists;
- (id)applicationIconForBundleIdentifier:(id)bundleIdentifier;
- (void)applicationRestrictionController:(id)controller didUpdateVisibleTags:(id)tags hiddenTags:(id)tags3;
- (BOOL)canAddDownloadingIconForApplication:(id)application;
- (BOOL)canAddWebClip:(id)clip;
- (BOOL)canSaveIconState:(id)state;
- (Class)controllerClassForFolder:(id)folder;
- (id)currentFolderController;
- (void)dealloc;
- (void)didDeleteIconState:(id)state;
- (void)didSaveIconState:(id)state;
- (BOOL)folderController:(id)controller draggedIconDidMoveFromListView:(id)draggedIcon toListView:(id)listView;
- (BOOL)folderController:(id)controller draggedIconDidPauseAtLocation:(CGPoint)draggedIcon inListView:(id)listView;
- (BOOL)folderController:(id)controller draggedIconMightDropFromListView:(id)listView;
- (void)folderController:(id)controller draggedIconShouldDropFromListView:(id)draggedIcon;
- (void)folderControllerDidEndScrolling:(id)folderController;
- (void)folderControllerShouldBeginEditing:(id)folderController;
- (void)folderControllerShouldClose:(id)folderController;
- (id)icon:(id)icon defaultImageWithFormat:(int)format;
- (id)icon:(id)icon imageWithFormat:(int)format;
- (BOOL)icon:(id)icon launchFromLocation:(int)location;
- (void)icon:(id)icon touchEnded:(BOOL)ended;
- (void)icon:(id)icon touchMoved:(id)moved;
- (int)iconAccessoryType:(id)type;
- (BOOL)iconAllowsLaunch:(id)launch;
- (BOOL)iconAllowsUninstall:(id)uninstall;
- (BOOL)iconAppearsInNewsstand:(id)newsstand;
- (id)iconBadgeNumberOrString:(id)string;
- (BOOL)iconCanEllipsizeLabel:(id)label;
- (BOOL)iconCanTightenLabel:(id)label;
- (BOOL)iconCompleteUninstall:(id)uninstall;
- (id)iconDisplayName:(id)name;
- (id)iconForLeafID:(id)leafID;
- (id)iconFormattedAccessoryString:(id)string;
- (BOOL)iconIsBeta:(id)beta;
- (BOOL)iconIsRecentlyUpdated:(id)updated;
- (unsigned)iconPriority:(id)priority;
- (BOOL)iconProgressIsPaused:(id)paused;
- (float)iconProgressPercent:(id)percent;
- (int)iconProgressState:(id)state;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (void)iconTouchBegan:(id)began;
- (Class)iconViewClassForIcon:(id)icon location:(int)location;
- (BOOL)iconViewDisplaysBadges:(id)badges;
- (id)iconsView;
- (void)invalidate;
- (BOOL)isHidden;
- (void)loadView;
- (unsigned)maxColCountForListInRootFolderWithInterfaceOrientation:(int)interfaceOrientation;
- (unsigned)maxIconCountForDock;
- (unsigned)maxIconCountForListInFolderClass:(Class)folderClass;
- (unsigned)maxListCountForFolders;
- (unsigned)maxRowCountForListInRootFolderWithInterfaceOrientation:(int)interfaceOrientation;
- (void)relayout;
- (id)rootFolder;
- (void)setHidden:(BOOL)hidden withAnimationFactory:(id)animationFactory;
- (BOOL)supportsDock;
- (int)viewMap:(id)map locationForIcon:(id)icon;
- (unsigned)viewMap:(id)map maxRecycledViewsOfClass:(Class)aClass;
- (id)windowForRecycledViewsInViewMap:(id)viewMap;
@end


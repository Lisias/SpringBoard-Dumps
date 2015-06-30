/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBIconController : XXUnknownSuperclass <SBIconListPageControlDelegate, BBObserverDelegate, UIScrollViewDelegate, SBIconViewDelegate, SBIconIndexNodeObserver, SBIconModelDelegate, SBIconViewMapDelegate> {
	SBIconModel *_iconModel;
	SBRootFolder *_rootFolder;
	UIView *_contentView;
	SBIconScrollView *_scrollView;
	SBIconListPageControl *_pageControl;
	NSMutableArray *_rootIconLists;
	SBDockIconListView *_dock;
	UIView *_dockContainerView;
	BOOL _needsRelayout;
	BOOL _sendITunesNotification;
	BBObserver *_bbObserver;
	NSMutableSet *_displayIDsWithBadgingDisabled;
	SBFolderView *_folderView;
	NSMutableArray *_folderIconLists;
	SBFolder *_openFolder;
	SBFolder *_closingFolder;
	SBFolder *_folderToReopenWhenSwitcherCloses;
	SBFolder *_folderToOpenWhenScrollingEnds;
	SBFolderScrollOffset *_openFolderScrollOffset;
	NSIndexPath *_openFolderIndexPath;
	NSString *_openFolderName;
	UIView *_slidingViewsContainer;
	SBFolderSlidingView *_upperSlidingView;
	SBFolderSlidingView *_lowerSlidingView;
	UIView *_upperIconsSlidingView;
	SBWallpaperNotchView *_slidingNotchView;
	int _ghostedRequesters;
	SBIconListView *_ghostedIconListForFolder;
	SBIconListView *_ghostedIconListForSwitcher;
	int _currentIconListIndex;
	unsigned _currentFolderIconListIndex;
	int _minVisibleListViewIndex;
	int _maxVisibleListViewIndex;
	int _disableUpdatingCurrentIconListCount;
	BOOL _rotating;
	SBIconListView *_rotatingIconList;
	TPLCDTextView *_idleText;
	float _currentIdleTextOffset;
	SBSearchView *_searchView;
	SBSearchController *_searchController;
	int _orientation;
	SBIcon *_lastTappedIcon;
	SBLeafIcon *_iconToReveal;
	SBIcon *_grabbedIcon;
	SBIcon *_recipientIcon;
	NSMutableArray *_droppedIconsAnimatingIntoPlace;
	NSMutableArray *_droppedIconsInToOrOutOfFolder;
	unsigned _numberOfDroppedIconsAnimatingIntoOrOutOfFolder;
	NSTimer *_closeFolderTimer;
	SBIcon *_lastTouchedIcon;
	NSTimer *_scrollPageTimer;
	unsigned _didScroll : 1;
	unsigned _isEditing : 1;
	unsigned _animatedScrolling : 1;
	unsigned _scrollingToSearch : 1;
	unsigned _movedFromOrigin : 1;
	unsigned _animatingFolder : 1;
	unsigned _folderClosedWhileAnimatingOpen : 1;
	unsigned _grabbedIconHasEverEnteredFolderView : 1;
	unsigned _grabbedIconIsDraggedOutOfFolderView : 1;
	BOOL _allowsUninstall;
	float _iconAlpha;
	float _searchViewAlpha;
	float _oldScrollOffset;
	UITouch *_lastTouch;
	CGPoint _dragPausePoint;
	NSTimer *_dragPauseTimer;
	NSTimer *_folderSpringloadTimer;
	BOOL _folderKeyboardIsAnimatingRotation;
	BOOL _isAnimatingDockForIconScatter;
	BOOL _isAnimatingDockFade;
	BOOL _isAnimatingFolderCreation;
	BOOL _isAnimatingForUnscatter;
	NSObject<OS_dispatch_queue> *_folderIconLoadingBackgroundQueue;
	unsigned _maxIconViewsInHierarchy;
	unsigned _maxNewsstandItemViewsInHierarchy;
}
@property(readonly, assign, nonatomic) SBSearchController *searchController;
+ (id)sharedInstance;
- (id)init;
- (void)_addEmptyListIfNecessary;
- (void)_addToFolderAnimation:(id)folderAnimation didFinish:(id)finish context:(id)context;
- (BOOL)_badgesAreDisabledForSectionInfo:(id)sectionInfo;
- (void)_cleanupForClosingFolderAnimated:(BOOL)closingFolderAnimated;
- (void)_clearFolderViewAndSlidingViews;
- (void)_commonScrollingWillBegin;
- (void)_compactRootListsAfterFolderCloseWithAnimation:(BOOL)animation;
- (int)_computePageIndexFromOffset:(float)offset pageWidth:(float)width maxLists:(int)lists;
- (void)_computeUpperTransform:(CGAffineTransform *)transform lowerTransform:(CGAffineTransform *)transform2 notchTransform:(CGAffineTransform *)transform3 forFolderIcon:(id)folderIcon;
- (void)_configureBBObserver;
- (CGRect)_contentViewRelativeFrameForIcon:(id)icon;
- (id)_dockContainerViewWithOrientation:(int)orientation contentView:(id)view dock:(id)dock pageControl:(id)control;
- (void)_dropIcon:(id)icon withInsertionPath:(id)insertionPath;
- (void)_dropIconIntoOpenFolder:(id)folder withInsertionPath:(id)insertionPath;
- (void)_dropIconOutOfClosingFolder:(id)closingFolder withInsertionPath:(id)insertionPath;
- (void)_finishedUnscattering;
- (void)_folderRotationIconFadeAnimationDidStop:(id)_folderRotationIconFadeAnimation finished:(id)finished context:(id)context;
- (unsigned)_folderRowsForFolder:(id)folder;
- (unsigned)_folderRowsForFolder:(id)folder inOrientation:(int)orientation;
- (CGRect)_frameForDockContainerView:(id)dockContainerView orientation:(int)orientation contentView:(id)view dock:(id)dock;
- (id)_ghostedIconListForRequester:(int)requester;
- (BOOL)_iconCanBeGrabbed:(id)grabbed;
- (void)_iconDropDidFinish:(id)_iconDrop;
- (BOOL)_iconListIndexIsValid:(int)valid;
- (void)_iconModelDidLayout:(id)_iconModel;
- (void)_iconModelDidReloadIcons:(id)_iconModel;
- (void)_iconModelWillLayout:(id)_iconModel;
- (void)_iconVisibilityChanged:(id)changed;
- (id)_iconsOnGhostedListForRequester:(int)requester;
- (id)_iconsOnGhostedListForRequester:(int)requester skippingIcon:(id)icon;
- (void)_insertFolderViewAndSlidingViewsForFolder:(id)folder;
- (id)_keyboard;
- (void)_keyboardWillHide:(id)_keyboard;
- (void)_keyboardWillShow:(id)_keyboard;
- (void)_launchIcon:(id)icon;
- (void)_lockStateChanged:(id)changed;
- (void)_moveDroppedIconsToLocation:(int)location;
- (XXStruct_9ihRqB)_notchInfoForFolderIcon:(id)folderIcon;
- (void)_noteFolderAnimationStateDidChange;
- (void)_observeNewsstandFolder;
- (void)_openCloseFolderAnimationEnded:(id)ended finished:(id)finished context:(void *)context;
- (void)_outOfFolderAnimation:(id)folderAnimation didFinish:(id)finish context:(id)context;
- (void)_placeIcon:(id)icon inSlidingViewsWithNotchInfo:(XXStruct_9ihRqB)notchInfo;
- (void)_popDisableUpdateCurrentIconListCount;
- (void)_positionFolderViewAndSlidingViewsForFolder:(id)folder notchInfo:(XXStruct_9ihRqB)info;
- (void)_precacheFolderImages:(id)images location:(int)location;
- (void)_prepareToResetRootIconLists;
- (id)_proposedFolderNameForGrabbedIcon:(id)grabbedIcon recipientIcon:(id)icon;
- (void)_pushDisableUpdateCurrentIconListCount;
- (void)_resetRootIconLists;
- (void)_runFolderOpenCloseTest;
- (void)_scrollByListOffset:(int)offset;
- (CGRect)_scrollViewFrameForContentView:(id)contentView dockContainerView:(id)view;
- (void)_scrollingDidFinish;
- (void)_setAnimatedScrolling:(BOOL)scrolling;
- (void)_setAnimatingFolderCreation:(BOOL)creation;
- (void)_setFolderToOpenAfterScrolling:(id)openAfterScrolling;
- (void)_setHasAnimatingFolder:(BOOL)folder;
- (BOOL)_shouldDisableUpdatingCurrentIconList;
- (BOOL)_shouldLockItemsInStoreDemoMode;
- (void)_showDockAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;
- (void)_showSearchKeyboardIfNecessary:(BOOL)necessary;
- (void)_slideFolderOpen:(BOOL)open animated:(BOOL)animated;
- (void)_snapshotFadeDidStop:(id)_snapshotFade finished:(id)finished snapshot:(id)snapshot;
- (void)_updateDisabledBadgesSetWithSections:(id)sections;
- (id)addEmptyListViewForFolder:(id)folder;
- (void)addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
- (void)addNewIconsToDesignatedLocations:(id)designatedLocations saveIconState:(BOOL)state;
- (void)adjustViewsForTransition;
- (BOOL)allowsUninstall;
- (void)animateIcons:(id)icons intoFolderIcon:(id)icon openFolderOnFinish:(BOOL)finish complete:(id)complete;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (BOOL)canSaveIconState:(id)state;
- (BOOL)canUninstallIcon:(id)icon;
- (void)cancelCloseFolderTimer;
- (void)cancelDragPauseTimer;
- (void)cancelFolderSpringloadTimer;
- (void)cancelScrollTimer;
- (void)cleanUpFolderAndSlidingViewsAfterRotation;
- (void)cleanUpGhostlyIconsForRequester:(int)requester;
- (void)clearFolderToReopenWhenSwitcherCloses;
- (int)closeBoxTypeForIcon:(id)icon;
- (void)closeFolderAnimated:(BOOL)animated;
- (void)closeFolderAnimated:(BOOL)animated toSwitcher:(BOOL)switcher;
- (void)closeFolderTimerFired;
- (void)compactFolders:(id)folders;
- (void)compactIconsInIconListsInFolder:(id)folder moveNow:(BOOL)now limitToIconList:(id)iconList;
- (void)compactRootIconLists;
- (id)contentView;
- (id)createNewFolderFromRecipientIcon:(id)recipientIcon grabbedIcon:(id)icon;
- (id)currentFolderIconList;
- (int)currentIconListIndex;
- (id)currentRootIconList;
- (void)dealloc;
- (void)didDeleteIconState:(id)state;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)didSaveIconState:(id)state;
- (void)dismissFolderKeyboard;
- (id)dock;
- (id)dockContainerView;
- (void)dragPauseTimerFired;
- (void)finishInstallingIconAnimated:(BOOL)animated;
- (void)finishedUnscatteringIconList:(id)list;
- (void)finishedUnscatteringSearchView;
- (void)fixupBouncedIconsInFolder:(id)folder startingWithIndex:(int)index;
- (id)folderIconListAtIndex:(unsigned)index;
- (void)folderSpringloadTimerFired;
- (id)folderToReopenWhenSwitcherCloses;
- (void)getListView:(id *)view folder:(id *)folder relativePath:(id *)path forIndexPath:(id)indexPath createIfNecessary:(BOOL)necessary;
- (id)grabbedIcon;
- (BOOL)hasAnimatingFolder;
- (BOOL)hasIdleModeText;
- (BOOL)hasOpenFolder;
- (id)homeScreenSnapshotInOrientation:(int)orientation;
- (BOOL)icon:(id)icon canReceiveGrabbedIcon:(id)icon2;
- (void)icon:(id)icon touchEnded:(BOOL)ended;
- (void)icon:(id)icon touchMovedWithEvent:(id)event;
- (BOOL)iconAllowJitter:(id)jitter;
- (BOOL)iconAllowsBadging:(id)badging;
- (BOOL)iconAppearsOnCurrentPage:(id)page;
- (void)iconCloseBoxTapped:(id)tapped;
- (void)iconHandleLongPress:(id)press;
- (id)iconListViewAtIndex:(unsigned)index inFolder:(id)folder createIfNecessary:(BOOL)necessary;
- (BOOL)iconPositionIsEditable:(id)editable;
- (BOOL)iconShouldAllowTap:(id)icon;
- (BOOL)iconShouldPrepareGhostlyImage:(id)icon;
- (void)iconTapped:(id)tapped;
- (id)iconToReveal;
- (void)iconTouchBegan:(id)began;
- (BOOL)iconViewDisplaysBadges:(id)badges;
- (void)iconWasTapped:(id)tapped;
- (void)idleTextDidAnimate:(id)idleText finished:(id)finished toText:(id)text;
- (BOOL)importIconState:(id)state;
- (id)insertIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now;
- (id)insertIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now pop:(BOOL)pop;
- (id)insertIcon:(id)icon intoListView:(id)view iconIndex:(int)index moveNow:(BOOL)now;
- (id)insertIcon:(id)icon intoListView:(id)view iconIndex:(int)index moveNow:(BOOL)now pop:(BOOL)pop;
- (BOOL)isAnimatingDockForIconScatter;
- (BOOL)isAnimatingForUnscatter;
- (BOOL)isDroppingIcon:(id)icon;
- (BOOL)isDroppingIconsInOrOutOfFolder;
- (BOOL)isEditing;
- (BOOL)isFolderScrolling;
- (BOOL)isIconVisiblyRepresented:(id)represented;
- (BOOL)isNewsstandOpen;
- (BOOL)isScrolling;
- (BOOL)isShowingSearch;
- (id)lastTouchedIcon;
- (void)layoutIconLists:(float)lists domino:(BOOL)domino forceRelayout:(BOOL)relayout;
- (void)lcdTextViewCompletedScroll:(id)scroll;
- (int)lowestVisibleIconListIndexAndColumn:(int *)column columnsOnScreen:(int *)screen totalLists:(unsigned)lists columnsPerList:(unsigned)list;
- (id)model;
- (void)moveIconFromWindow:(id)window toIconList:(id)iconList;
- (void)moveIconToWindow:(id)window;
- (void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
- (void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
- (void)noteGrabbedIconLocationChangedWithTouch:(id)touch;
- (void)noteIconStateChangedExternally;
- (void)noteViewCovered;
- (void)observer:(id)observer updateSectionInfo:(id)info;
- (id)openFolder;
- (void)openFolder:(id)folder animated:(BOOL)animated;
- (void)openFolder:(id)folder animated:(BOOL)animated fromSwitcher:(BOOL)switcher;
- (int)orientation;
- (void)pageControl:(id)control didRecieveTouchInDirection:(int)direction;
- (id)placeIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now layoutNow:(BOOL)now4 pop:(BOOL)pop;
- (void)prepareToGhostCurrentPageIconsForRequester:(int)requester skipIcon:(id)icon;
- (void)prepareToRotateFolderAndSlidingViewsToOrientation:(int)orientation;
- (id)recipientIcon;
- (BOOL)relayout;
- (void)removeEmptyIconList:(id)list animate:(BOOL)animate;
- (void)removeIcon:(id)icon andCompactFolder:(BOOL)folder folderRef:(id *)ref;
- (void)removeIcon:(id)icon compactFolder:(BOOL)folder;
- (void)replaceFolderIcon:(id)icon byContainedIcon:(id)icon2 animated:(BOOL)animated;
- (void)replaceIconAtPath:(id)path withIcon:(id)icon saveState:(BOOL)state;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (void)resetDragPauseTimer;
- (void)resetFolderSpringloadTimer;
- (void)restoreScrollingAndRotationAfterUngrab;
- (id)rootIconListAtIndex:(int)index;
- (void)rotateFolderAndSlidingViewsWithDuration:(double)duration;
- (void)saveFolderToReopenWhenSwitcherCloses;
- (void)scatterWithDuration:(double)duration delay:(double)delay;
- (void)scatterWithDuration:(double)duration delay:(double)delay fade:(BOOL)fade;
- (void)scrollLeft;
- (void)scrollRight;
- (void)scrollToIconListAtIndex:(int)index animate:(BOOL)animate;
- (void)scrollToIconListContainingIcon:(id)iconListContainingIcon animate:(BOOL)animate;
- (void)scrollToIconToRevealAnimated:(BOOL)revealAnimated;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDecelerating:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)setAllowsUninstall:(BOOL)uninstall;
- (void)setCloseFolderTimerIfNecessary;
- (void)setCurrentPageIconsGhostly:(BOOL)ghostly forRequester:(int)requester skipIcon:(id)icon;
- (void)setCurrentPageIconsPartialGhostly:(float)ghostly forRequester:(int)requester skipIcon:(id)icon;
- (void)setFolderToReopenWhenSwitcherCloses:(id)reopenWhenSwitcherCloses;
- (void)setGrabbedIcon:(id)icon;
- (void)setIconToReveal:(id)reveal revealingPrevious:(BOOL)previous;
- (void)setIdleModeText:(id)text;
- (void)setIsEditing:(BOOL)editing;
- (void)setLastTouch:(id)touch;
- (void)setLastTouchedIcon:(id)icon;
- (void)setOpenFolder:(id)folder;
- (void)setPageControlAlpha:(float)alpha;
- (void)setPageControlVisible:(BOOL)visible;
- (void)setRecipientIcon:(id)icon duration:(double)duration;
- (void)setShouldRasterizeFirstIconList:(BOOL)rasterizeFirstIconList;
- (void)shiftFolderViewsForKeyboardAppearing:(BOOL)keyboardAppearing keyboardHeight:(float)height;
- (void)showCarrierDebuggingAlertIfNeeded;
- (void)showDock:(BOOL)dock delay:(double)delay duration:(double)duration;
- (void)showInfoAlertIfNeeded:(BOOL)needed;
- (XXStruct_5beXPD)statusBarOverridesForSnapshot;
- (void)uninstallIcon:(id)icon;
- (void)uninstallIcon:(id)icon animate:(BOOL)animate;
- (void)uninstallIconDidAnimate:(id)uninstallIcon finished:(id)finished icon:(id)icon;
- (void)unscatterWithDuration:(double)duration delay:(double)delay;
- (void)unscatterWithDuration:(double)duration delay:(double)delay fade:(BOOL)fade;
- (void)updateContentSize;
- (void)updateCurrentIconListIndexAndVisibility;
- (void)updateCurrentIconListIndexAndVisibility:(BOOL)visibility;
- (void)updateGhostlyRequestersForIcon:(id)icon inListView:(id)listView;
- (void)updateNumberOfRootIconLists;
- (void)updateNumberOfRowsWithDuration:(float)duration;
- (void)updateRootIconListFrames;
- (void)updateSlidingViewWithIcon:(id)icon fromListView:(id)listView;
- (Class)viewMap:(id)map iconViewClassForIcon:(id)icon;
- (int)viewMap:(id)map locationForIcon:(id)icon;
- (unsigned)viewMap:(id)map maxRecycledIconViewsOfClass:(Class)aClass;
- (unsigned)viewMap:(id)map numberOfViewsToPrepareOfClass:(Class)aClass;
- (id)viewMapShouldPrepareViewsOfClasses:(id)viewMap;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIScrollViewDelegate.h"
#import "SBIconController.h"
#import "SBIconListPageControlDelegate.h"
#import "SBIconDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBIconController : XXUnknownSuperclass <UIScrollViewDelegate, SBIconListPageControlDelegate, SBIconDelegate> {
	SBIconModel *_iconModel;
	SBRootFolder *_rootFolder;
	UIView *_contentView;
	SBIconScrollView *_scrollView;
	SBIconListPageControl *_pageControl;
	NSMutableArray *_rootIconLists;
	SBDockIconListView *_dock;
	UIView *_dockContainerView;
	SBFolderView *_folderView;
	NSMutableArray *_folderIconLists;
	SBFolder *_openFolder;
	SBFolder *_closingFolder;
	SBFolder *_folderToReopenWhenSwitcherCloses;
	SBFolder *_folderToOpenWhenScrollingEnds;
	int _wantsToScrollListIndex;
	BOOL _wantsToScrollAnimated;
	SBIconIndexPath *_openFolderIndexPath;
	id _currentListRepresentation;
	id _dockRepresentation;
	UIView *_slidingViewsContainer;
	SBFolderSlidingView *_upperSlidingView;
	SBFolderSlidingView *_lowerSlidingView;
	UIView *_upperIconsSlidingView;
	SBWallpaperNotchView *_slidingNotchView;
	SBIconListView *_ghostedIconListForFolder;
	SBIconListView *_ghostedIconListForSwitcher;
	int _currentIconListIndex;
	unsigned _currentFolderIconListIndex;
	TPLCDTextView *_idleText;
	float _currentIdleTextOffset;
	SBSearchView *_searchView;
	SBSearchController *_searchController;
	int _orientation;
	SBIcon *_lastTappedIcon;
	double _lastTapTime;
	SBLeafIcon *_iconToReveal;
	SBIcon *_grabbedIcon;
	SBIcon *_recipientIcon;
	NSMutableArray *_iconsDroppedWhileFolderIsAnimating;
	NSMutableArray *_insertionIndexPathsForDroppedIcons;
	unsigned _numberOfDroppedIconsStillAnimatingIntoPlace;
	NSTimer *_closeFolderTimer;
	SBIconListView *_destinationIconList;
	unsigned _destinationIndex;
	SBIcon *_lastTouchedIcon;
	NSTimer *_scrollPageTimer;
	unsigned _didScroll : 1;
	unsigned _isEditing : 1;
	unsigned _animatedScrolling : 1;
	unsigned _scrollingToSearch : 1;
	unsigned _movedFromOrigin : 1;
	unsigned _disableUpdatingCurrentIconList : 1;
	unsigned _onWallpaper : 1;
	unsigned _animatingFolder : 1;
	unsigned _folderClosedWhileAnimatingOpen : 1;
	unsigned _grabbedIconHasEverEnteredFolderView : 1;
	unsigned _grabbedIconIsDraggedOutOfFolderView : 1;
	BOOL _allowsUninstall;
	float _iconAlpha;
	float _searchViewAlpha;
	UITouch *_lastTouch;
	CGPoint _dragPausePoint;
	NSTimer *_dragPauseTimer;
	NSTimer *_folderSpringloadTimer;
	UIKeyboard *_folderKeyboard;
	BOOL _folderKeyboardIsAnimatingRotation;
}
@property(readonly, assign, nonatomic) SBSearchController *searchController;
+ (id)sharedInstance;
- (id)init;
- (void)_addEmptyListIfNecessary;
- (void)_awayControllerLocked:(id)locked;
- (void)_awayControllerUnlocked:(id)unlocked;
- (CGRect)_dockContainerViewFrameForCurrentOrientation;
- (void)_dropIconInDestinationHole:(id)destinationHole;
- (void)_finishedUnscattering;
- (BOOL)_iconCanBeGrabbed:(id)grabbed;
- (void)_keyboardWillHide:(id)_keyboard;
- (void)_keyboardWillShow:(id)_keyboard;
- (BOOL)_shouldLockItemsInStoreDemoMode;
- (void)_showDockAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;
- (void)_showSearchKeyboardIfNecessary:(BOOL)necessary;
- (id)addEmptyListViewForFolder:(id)folder;
- (void)addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
- (void)adjustIconListAlpha;
- (BOOL)allowsUninstall;
- (void)animateToNewState:(float)newState domino:(BOOL)domino;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (BOOL)canUninstallIcon:(id)icon;
- (void)cancelCloseFolderTimer;
- (void)cancelDragPauseTimer;
- (void)cancelFolderSpringloadTimer;
- (void)cancelScrollTimer;
- (int)closeBoxTypeForIcon:(id)icon;
- (void)closeFolderTimerFired;
- (void)compactIconsInIconListsInFolder:(id)folder moveNow:(BOOL)now limitToIconList:(id)iconList;
- (void)compactRootIconLists;
- (id)contentView;
- (id)currentFolderIconList;
- (int)currentIconListIndex;
- (id)currentRootIconList;
- (void)dealloc;
- (id)destinationIconList;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (id)dock;
- (id)dockContainerView;
- (void)dragPauseTimerFired;
- (void)finishInstallingIcon;
- (void)finishedUnscatteringIconList:(id)list;
- (void)finishedUnscatteringSearchView;
- (void)fixupBouncedIconsInFolder:(id)folder startingWithIndex:(int)index;
- (id)folderIconListAtIndex:(unsigned)index;
- (void)folderKeyboardHideAnimationDidStop:(id)folderKeyboardHideAnimation finished:(id)finished context:(void *)context;
- (void)folderSpringloadTimerFired;
- (id)grabbedIcon;
- (BOOL)hasIdleModeText;
- (BOOL)icon:(id)icon canReceiveGrabbedIcon:(id)icon2;
- (void)icon:(id)icon closeFolderAnimated:(BOOL)animated;
- (void)icon:(id)icon grabbedLocationChangedWithEvent:(id)event;
- (void)icon:(id)icon openFolder:(id)folder animated:(BOOL)animated;
- (void)icon:(id)icon touchEnded:(BOOL)ended;
- (void)icon:(id)icon touchMovedWithEvent:(id)event;
- (BOOL)iconAllowJitter:(id)jitter;
- (BOOL)iconAppearsOnCurrentPage:(id)page;
- (void)iconCloseBoxTapped:(id)tapped;
- (void)iconDidBeginGrab:(id)icon;
- (void)iconDownloadStateChanged:(id)changed;
- (void)iconGrabbed:(id)grabbed;
- (void)iconHandleLongPress:(id)press;
- (BOOL)iconPositionIsEditable:(id)editable;
- (BOOL)iconShouldAllowGrab:(id)icon;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (id)iconToReveal;
- (void)iconTouchBegan:(id)began;
- (void)iconUninstall:(id)uninstall;
- (void)iconWasDoubleTapped:(id)tapped;
- (void)iconWasTapped:(id)tapped;
- (void)idleTextDidAnimate:(id)idleText finished:(id)finished toText:(id)text;
- (id)insertIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now;
- (id)insertIcon:(id)icon intoListView:(id)view iconIndex:(int)index moveNow:(BOOL)now;
- (BOOL)isEditing;
- (BOOL)isScrolling;
- (BOOL)isShowingSearch;
- (id)lastTouchedIcon;
- (void)launchIcon:(id)icon;
- (void)lcdTextViewCompletedScroll:(id)scroll;
- (int)lowestVisibleIconListIndexAndColumn:(int *)column totalLists:(unsigned)lists columnsPerList:(unsigned)list;
- (void)moveAnimation:(id)animation didFinish:(id)finish movePlan:(id)plan;
- (void)moveIcon:(id)icon fromIconList:(id)iconList toIndex:(int)index toIconList:(id)iconList4;
- (void)moveIcon:(id)icon fromIconList:(id)iconList toIndex:(int)index toIconList:(id)iconList4 animate:(BOOL)animate;
- (void)moveIconFromWindow:(id)window toIconList:(id)iconList;
- (void)moveIconToWindow:(id)window;
- (void)noteDownloadStateChanged;
- (void)noteGrabbedIconLocationChangedWithEvent:(id)event;
- (void)noteGrabbedIconLocationChangedWithTouch:(id)touch;
- (void)noteViewCovered;
- (int)orientation;
- (void)overlapAnimationStopped:(id)stopped finished:(id)finished oldRecipientIcon:(id)icon;
- (void)pageControl:(id)control didRecieveTouchInDirection:(int)direction;
- (id)placeIcon:(id)icon atIndexPath:(id)indexPath moveNow:(BOOL)now layoutNow:(BOOL)now4 pop:(BOOL)pop;
- (void)prepareToResetRootIconLists;
- (id)recipientIcon;
- (void)removeEmptyIconList:(id)list animate:(BOOL)animate;
- (void)removeIcon:(id)icon animate:(BOOL)animate;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (void)resetDragPauseTimer;
- (void)resetFolderSpringloadTimer;
- (void)resetRootIconLists;
- (void)restoreScrollingAndRotationAfterUngrab;
- (id)rootIconListAtIndex:(int)index;
- (void)scatterWithDuration:(double)duration startTime:(double)time;
- (void)scatterWithDuration:(double)duration startTime:(double)time fade:(BOOL)fade;
- (void)scrollLeft;
- (void)scrollRight;
- (void)scrollToIconDestination;
- (void)scrollToIconListAtIndex:(int)index animate:(BOOL)animate;
- (void)scrollToIconListContainingIcon:(id)iconListContainingIcon animate:(BOOL)animate;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDecelerating:(id)scrollView;
- (void)setAllowsUninstall:(BOOL)uninstall;
- (void)setCloseFolderTimerIfNecessary;
- (void)setDestinationIconList:(id)list;
- (void)setGrabbedIcon:(id)icon;
- (void)setIconToReveal:(id)reveal;
- (void)setIconsDisplayOnWallpaper:(BOOL)wallpaper;
- (void)setIdleModeText:(id)text;
- (void)setIsEditing:(BOOL)editing;
- (void)setLastTouch:(id)touch;
- (void)setLastTouchedIcon:(id)icon;
- (void)setPageControlAlpha:(float)alpha;
- (void)setPageControlVisible:(BOOL)visible;
- (void)setRecipientIcon:(id)icon duration:(double)duration;
- (void)setShouldRasterizeFirstIconList:(BOOL)rasterizeFirstIconList;
- (void)setShowsFolderKeyboard:(BOOL)keyboard;
- (void)showCarrierDebuggingAlertIfNeeded;
- (void)showDock:(BOOL)dock startTime:(double)time duration:(double)duration;
- (void)showInfoAlertIfNeeded;
- (void)ungrabAnimation:(id)animation didFinish:(id)finish grabbedIcon:(id)icon;
- (void)uninstallIcon:(id)icon;
- (void)uninstallIcon:(id)icon animate:(BOOL)animate;
- (void)uninstallIconDidAnimate:(id)uninstallIcon finished:(id)finished icons:(id)icons;
- (void)unscatterWithDuration:(double)duration startTime:(double)time;
- (void)unscatterWithDuration:(double)duration startTime:(double)time fade:(BOOL)fade;
- (void)updateContentSize;
- (void)updateCurrentIconListIndexAndVisibility;
- (void)updateIconListWallpaperState;
- (void)updateNumberOfRootIconLists;
- (void)updateNumberOfRowsWithDuration:(float)duration;
- (void)updateRootIconListFrames;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

@interface SBIconController (Folders)
- (void)_addToFolderAnimation:(id)folderAnimation didFinish:(id)finish context:(id)context;
- (void)_cleanupForClosingFolderAnimated:(BOOL)closingFolderAnimated;
- (void)_clearFolderViewAndSlidingViews;
- (void)_compactRootListsAfterFolderClose;
- (void)_computeUpperTransform:(CGAffineTransform *)transform lowerTransform:(CGAffineTransform *)transform2 notchTransform:(CGAffineTransform *)transform3 forFolderIcon:(id)folderIcon;
- (CGRect)_contentViewRelativeFrameForIcon:(id)icon;
- (void)_folderRotationIconFadeAnimationDidStop:(id)_folderRotationIconFadeAnimation finished:(id)finished context:(id)context;
- (unsigned)_folderRowsForIconCount:(unsigned)iconCount;
- (id)_ghostedIconListForRequester:(int)requester;
- (id)_iconsOnGhostedListForRequester:(int)requester;
- (id)_iconsOnGhostedListForRequester:(int)requester skippingIcon:(id)icon;
- (void)_insertFolderViewAndSlidingViewsForFolder:(id)folder;
- (void)_moveDroppedIconsIntoFolderIconListView;
- (void)_moveDroppedIconsIntoRootIconListView;
- (XXStruct_9ihRqB)_notchInfoForFolderIcon:(id)folderIcon;
- (void)_openCloseFolderAnimationEnded:(id)ended finished:(id)finished context:(void *)context;
- (void)_outOfFolderAnimation:(id)folderAnimation didFinish:(id)finish context:(id)context;
- (void)_placeIcon:(id)icon inSlidingViewsWithNotchInfo:(XXStruct_9ihRqB)notchInfo;
- (void)_positionFolderViewAndSlidingViewsForFolder:(id)folder notchInfo:(XXStruct_9ihRqB)info;
- (id)_proposedFolderNameForGrabbedIcon:(id)grabbedIcon recipientIcon:(id)icon;
- (void)_runFolderOpenCloseTest;
- (void)_setHasAnimatingFolder:(BOOL)folder;
- (void)_slideFolderOpen:(BOOL)open animated:(BOOL)animated;
- (void)_snapshotFadeDidStop:(id)_snapshotFade finished:(id)finished snapshot:(id)snapshot;
- (void)animateIcon:(id)icon intoFolderIcon:(id)icon2;
- (void)animateIcons:(id)icons intoFolderIcon:(id)icon openFolderOnFinish:(BOOL)finish;
- (void)cleanUpFolderAndSlidingViewsAfterRotation;
- (void)cleanUpGhostlyIconsForRequester:(int)requester;
- (void)clearFolderToReopenWhenSwitcherCloses;
- (void)closeFolderAnimated:(BOOL)animated;
- (void)closeFolderAnimated:(BOOL)animated toSwitcher:(BOOL)switcher;
- (id)createNewFolderFromRecipientIcon:(id)recipientIcon grabbedIcon:(id)icon;
- (void)dismissFolderKeyboard;
- (void)dropIconIntoOpeningFolder:(id)folder;
- (void)dropIconIntoOpeningFolderAnimationDidStop:(id)dropIconIntoOpeningFolderAnimation finished:(id)finished context:(void *)context;
- (void)dropIconOutOfClosingFolder:(id)closingFolder insertionPosition:(int)position;
- (void)dropIconOutOfClosingFolderAnimationDidStop:(id)dropIconOutOfClosingFolderAnimation finished:(id)finished context:(void *)context;
- (id)folderToReopenWhenSwitcherCloses;
- (void)getListView:(id *)view folder:(id *)folder relativePath:(id *)path forIcon:(id)icon;
- (void)getListView:(id *)view folder:(id *)folder relativePath:(id *)path forIndexPath:(id)indexPath createIfNecessary:(BOOL)necessary;
- (BOOL)hasAnimatingFolder;
- (BOOL)hasOpenFolder;
- (id)iconListViewAtIndex:(unsigned)index inFolder:(id)folder createIfNecessary:(BOOL)necessary;
- (BOOL)isDroppingIconsInOrOutOfFolder;
- (id)openFolder;
- (void)openFolder:(id)folder animated:(BOOL)animated;
- (void)openFolder:(id)folder animated:(BOOL)animated fromSwitcher:(BOOL)switcher;
- (void)prepareToGhostCurrentPageIconsForRequester:(int)requester skipIcon:(id)icon;
- (void)prepareToRotateFolderAndSlidingViewsToOrientation:(int)orientation;
- (void)replaceFolderIcon:(id)icon byContainedIcon:(id)icon2 animated:(BOOL)animated;
- (void)rotateFolderAndSlidingViewsWithDuration:(double)duration;
- (void)saveFolderToReopenWhenSwitcherCloses;
- (void)setCurrentPageIconsGhostly:(BOOL)ghostly forRequester:(int)requester skipIcon:(id)icon;
- (void)setCurrentPageIconsPartialGhostly:(float)ghostly forRequester:(int)requester skipIcon:(id)icon;
- (void)setOpenFolder:(id)folder;
- (void)shiftFolderViewsForKeyboardAppearing:(BOOL)keyboardAppearing keyboardHeight:(float)height;
@end


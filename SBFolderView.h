/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBFolderView : XXUnknownSuperclass <SBIconListPageControlDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, SBIconScrollViewDelegate> {
	NSMutableArray *_iconListViews;
	NSMutableSet *_scrollingDisabledReasons;
	SBIconListView *_rotatingIconList;
	int _minVisibleListViewIndex;
	int _maxVisibleListViewIndex;
	int _minAnimatingListViewIndex;
	int _maxAnimatingListViewIndex;
	int _disableUpdatingCurrentIconListCount;
	int _firstDisplayedColumnOnCurrentList;
	BOOL _animatedScrolling;
	BOOL _scalingViewIsBorrowed;
	SBIconViewMap *_viewMap;
	NSMutableArray *_scrollFrames;
	unsigned _scrollFrameCount;
	SBIconListPageControl *_pageControl;
	SBIconScrollView *_scrollView;
	SBFolderTitleTextField *_titleTextField;
	UIView *_scalingView;
	SBFakeStatusBarView *_reachabilityStatusBar;
	UISwipeGestureRecognizer *_swipeToCancelReachabilityGestureRecognizer;
	UISwipeGestureRecognizer *_swipeToRevealNotificationCenterGestureRecognizer;
	UITapGestureRecognizer *_tapToCancelReachabilityGestureRecognizer;
	BOOL _isEditing;
	BOOL _isScrolling;
	int _currentPageIndex;
	float _statusBarHeight;
	id<SBFolderViewDelegate> _delegate;
	SBFolder *_folder;
	int _orientation;
	_UILegibilitySettings *_legibilitySettings;
	int _animatingToOrientation;
	UIEdgeInsets _reachabilityStatusBarEdgeInsets;
}
@property(assign, nonatomic) int animatingToOrientation;
@property(readonly, assign, nonatomic) int currentPageIndex;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBFolderViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;
@property(retain, nonatomic) SBFolder *folder;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) unsigned iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic) UIEdgeInsets reachabilityStatusBarEdgeInsets;
@property(assign, nonatomic, getter=isScrolling) BOOL scrolling;
@property(assign, nonatomic) float statusBarHeight;
@property(readonly, assign) Class superclass;
@property(readonly, retain, nonatomic) SBIconViewMap *viewMap;
+ (unsigned)_countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (Class)_scrollViewClass;
- (id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map context:(id)context;
- (void)_addIconListView:(id)view;
- (void)_addIconListViewsForModels:(id)models;
- (void)_backgroundContrastDidChange:(id)_backgroundContrast;
- (unsigned)_countOfAdditionalPagesToKeepAnimatingInOneDirection;
- (id)_createIconListViewForList:(id)list;
- (id)_currentIconListView;
- (void)_currentPageIndexDidChange;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_endScrollingTest;
- (CGRect)_frameForScalingView;
- (BOOL)_hasMinusPages;
- (CGRect)_iconListFrameForPageRect:(CGRect)pageRect atIndex:(unsigned)index;
- (id)_iconListViewAtIndex:(unsigned)index;
- (id)_iconListViewForList:(id)list;
- (id)_interactionTintColor;
- (BOOL)_isValidPageIndex:(int)index;
- (void)_layoutSubviews;
- (id)_legibilitySettingsWithPrimaryColor:(id)primaryColor;
- (unsigned)_minusPageCount;
- (id)_newPageControl;
- (float)_offsetToCenterPageControlInSpaceForPageControl;
- (void)_orientationDidChange:(int)_orientation;
- (int)_pageIndexForOffset:(float)offset;
- (float)_pageWidth;
- (void)_popDisableUpdateCurrentIconListCount;
- (void)_purgeListViews;
- (void)_pushDisableUpdateCurrentIconListCount;
- (void)_removeIconListView:(id)view;
- (void)_resetIconListViews;
- (float)_scrollOffsetForFirstListView;
- (float)_scrollOffsetForPageAtIndex:(int)index;
- (CGSize)_scrollViewContentSize;
- (BOOL)_scrollViewThinksItsScrolling;
- (void)_setAnimatedScrolling:(BOOL)scrolling;
- (void)_setCurrentPageIndex:(int)index;
- (void)_setCurrentPageIndex:(int)index deferringPageControlUpdate:(BOOL)update;
- (void)_setFolderName:(id)name;
- (void)_setScrollingDisabled:(BOOL)disabled forReason:(id)reason;
- (BOOL)_shouldDisableUpdatingCurrentIconList;
- (BOOL)_showsTitle;
- (float)_titleFontSize;
- (void)_updateEditingStateAnimated:(BOOL)animated;
- (void)_updateIconListContainment:(id)containment atIndex:(unsigned)index;
- (void)_updateIconListFrames;
- (void)_updateIconListViews;
- (void)_updatePageControlToIndex:(int)index;
- (void)_updateTitleLegibilitySettings;
- (BOOL)_updatesWallpaperRelativeCenter;
- (id)borrowScalingView;
- (void)cleanUpAfterZoomAnimation;
- (void)cleanupAfterClosing;
- (id)currentIconListView;
- (void)dealloc;
- (void)didAnimate;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)doesPageContainIconListView:(int)view;
- (void)fadeContentForMagnificationFraction:(float)magnificationFraction;
- (void)fadeContentForMinificationFraction:(float)minificationFraction;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (void)handleCancelReachabilityGesture:(id)gesture;
- (void)handleReachabilityActivated:(BOOL)activated animated:(BOOL)animated completion:(id)completion;
- (void)handleRevealNotificationCenterGesture:(id)gesture;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (id)iconListViewAtIndex:(unsigned)index;
- (id)iconListViewAtPoint:(CGPoint)point;
- (id)iconListViewForTouch:(id)touch;
- (void)iconScrollView:(id)view willSetContentOffset:(inout CGPoint *)offset;
- (void)iconScrollViewDidCancelTouchTracking:(id)iconScrollView;
- (void)iconScrollViewWillCancelTouchTracking:(id)iconScrollView;
- (void)layoutIconLists:(double)lists domino:(BOOL)domino forceRelayout:(BOOL)relayout;
- (void)layoutSubviews;
- (BOOL)locationCountsAsInsideFolder:(CGPoint)folder;
- (int)lowestVisibleIconListIndexAndColumn:(int *)column columnsOnScreen:(int *)screen totalLists:(unsigned)lists columnsPerList:(unsigned)list;
- (void)noteUserHasGrabbedIcon:(BOOL)icon;
- (void)noteUserIsInteractingWithIcons;
- (void)pageControl:(id)control didRecieveTouchInDirection:(int)direction;
- (void)prepareForZoomAnimation;
- (void)prepareToOpen;
- (float)reachabilityYOffset;
- (void)repositionForReachabilityActivated:(BOOL)reachabilityActivated animated:(BOOL)animated actions:(id)actions completion:(id)completion;
- (void)resetContentOffsetToCurrentPage;
- (void)resetIconListViews;
- (void)returnScalingView;
- (CGRect)scalingViewFrame;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (BOOL)setCurrentPageIndex:(int)index animated:(BOOL)animated;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
- (void)setIconPageIndicatorImageSetCache:(id)cache;
- (void)setNeedsLayout;
- (void)setPageControlHidden:(BOOL)hidden;
- (void)tearDownListViews;
- (void)textFieldDidEndEditing:(id)textField;
- (BOOL)textFieldShouldBeginEditing:(id)textField;
- (BOOL)textFieldShouldReturn:(id)textField;
- (void)updateIconListIndexAndVisibility;
- (void)updateIconListIndexAndVisibility:(BOOL)visibility;
- (void)updateIconListViews;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willAnimateWithSettings:(id)settings;
- (void)willMoveToWindow:(id)window;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
@end


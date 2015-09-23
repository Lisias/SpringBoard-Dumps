/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSideSwitcherScrollingItemViewController : XXUnknownSuperclass <UIScrollViewDelegate> {
	SBAppSwitcherScrollView *_scrollView;
	NSArray *_displayItems;
	NSMutableDictionary *_visiblePageViews;
	SBDisplayItem *_transitioningDisplayItem;
	float _transitionProgress;
	float _interactiveTransitionProgress;
	float _displayItemContentTransitionProgress;
	BOOL _isAnimatingDisplayItemContentTransition;
	BOOL _transitionPresenting;
	unsigned _transitionState;
	SBChevronView *_grabberView;
	int _sideSwitcherGrabberStyle;
	BOOL _sideSwitcherGrabberPressed;
	CGPoint _beginningOfDismissalContentOffset;
	BOOL _shouldResetContentOffset;
	id<SBSideSwitcherScrollingItemViewDelegate> _delegate;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBSideSwitcherScrollingItemViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *displayItems;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property(assign, nonatomic) int sideSwitcherGrabberStyle;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) float transitionProgress;
@property(assign, nonatomic) unsigned transitionState;
- (void)_applyPageViewStyleToVisiblePageViews;
- (void)_applyStyleToPageView:(id)pageView;
- (CGPoint)_centerOfIndex:(int)index;
- (CGPoint)_centerOfIndex:(int)index forProgress:(float)progress;
- (CGPoint)_contentOffsetOnRotationToSize:(CGSize)size oldViewHeight:(float)height oldOffsetY:(float)y;
- (float)_distanceBetweenItems;
- (CGRect)_frameForItem:(unsigned)item;
- (CGRect)_frameForItem:(unsigned)item progressPresented:(float)presented;
- (BOOL)_isItemVisible:(id)visible withSidePadding:(float)sidePadding progress:(float)progress;
- (CGSize)_itemSize;
- (CGSize)_itemSizeForProgress:(float)progress;
- (unsigned)_itemsPerScreen;
- (void)_layoutGrabber;
- (CGPoint)_scrollViewContentOffsetForProgress:(float)progress;
- (CGSize)_scrollViewContentSizeForProgress:(float)progress;
- (void)_startUpdatingScrollViewForPresentationOrDismissal;
- (void)_updateScrollViewFrameAndContentSize;
- (void)_updateScrollViewLayoutForPresentationOrDismissal;
- (void)_updateVisiblePageViews;
- (float)contentOffsetSpeedInScrollingDirection;
- (void)dealloc;
- (void)endTransitionWithSuccess:(BOOL)success;
- (float)heightFromTopForFinalItemSize;
- (void)insertItem:(id)item atIndex:(unsigned)index duration:(double)duration updateScrollPosition:(BOOL)position completion:(id)completion;
- (void)prepareToEndTransitionAnimated:(BOOL)endTransitionAnimated;
- (void)removeItem:(id)item duration:(double)duration updateScrollPosition:(BOOL)position completion:(id)completion;
- (void)replaceItemAtIndex:(unsigned)index withNewItem:(id)newItem duration:(double)duration;
- (void)scrollViewDidBeginDragging:(id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;
- (void)startTransitionWithDisplayItem:(id)displayItem presenting:(BOOL)presenting;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)view withTransitionCoordinator:(id)transitionCoordinator;
@end


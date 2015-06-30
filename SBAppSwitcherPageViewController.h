/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBAppSwitcherScrollingViewDelegate;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPageViewController : XXUnknownSuperclass <UIScrollViewDelegate> {
	NSMutableArray *_displayLayouts;
	NSMutableDictionary *_items;
	BOOL _itemsListIsValid;
	SBAppSwitcherScrollView *_scrollView;
	BOOL _dragMaster;
	BOOL _preventScroll;
	UITapGestureRecognizer *_tapGesture;
	SBStopScrollingGestureRecognizer *_stopScrollingGesture;
	int _layoutOrientation;
	id _scrollDoneBlock;
	BOOL _isMoving;
	BOOL _isLayingOutForReachability;
	SBDisplayItem *_displayItemForWhichRemovalIsBeingCancelled;
	id<SBAppSwitcherScrollingViewDelegate> _delegate;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBAppSwitcherScrollingViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *displayLayouts;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float normalizedOffset;
@property(readonly, assign) Class superclass;
- (id)init;
- (CGPoint)_centerOfIndex:(unsigned)index;
- (id)_createScrollViewForItem;
- (void)_disableScrolling;
- (float)_distanceBetweenCenters;
- (void)_enableScrolling;
- (void)_fireAndCleanupScrollCompleteBlockIfNecessary;
- (void)_generateContentViewForDisplayLayoutIfNecessary:(id)displayLayoutIfNecessary;
- (float)_halfWidth;
- (void)_handleStopGesture:(id)gesture;
- (void)_handleTapGesture:(id)gesture;
- (BOOL)_isAnyScrollContainerScrolling;
- (BOOL)_isItemVisible:(id)visible withSidePadding:(float)sidePadding;
- (void)_layout;
- (void)_layoutItemContainer:(id)container;
- (float)_maxXOffset;
- (CGRect)_naturalScrollViewFrame;
- (void)_notifyDelegateOfKillOffsetChange;
- (id)_safeDelegate;
- (void)_setContentOffset:(CGPoint)offset animated:(BOOL)animated;
- (void)_setScrollingDoneBlock:(id)block;
- (void)_updateVisiblePageViews;
- (void)cancelPossibleRemovalOfDisplayItem:(id)displayItem;
- (void)cancelScrolling;
- (void)cancelTracking;
- (unsigned)currentPage;
- (void)dealloc;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)insertItem:(id)item atIndex:(unsigned)index duration:(double)duration updateScrollPosition:(BOOL)position completion:(id)completion;
- (BOOL)isDisplayLayoutVisible:(id)visible;
- (BOOL)isScrolling;
- (void)loadView;
- (id)pageViewForDisplayLayout:(id)displayLayout;
- (float)preferredHeightForOrientation:(int)orientation;
- (void)reloadInOrientation:(int)orientation;
- (void)removeItem:(id)item duration:(double)duration updateScrollPosition:(BOOL)position completion:(id)completion;
- (void)replaceItemAtIndex:(unsigned)index withNewItem:(id)newItem duration:(double)duration;
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;
- (void)setOffsetToIndex:(unsigned)index animated:(BOOL)animated;
- (void)setOffsetToIndex:(unsigned)index animated:(BOOL)animated completion:(id)completion;
- (unsigned)settledIndexForNormalizedOffset:(inout float *)normalizedOffset andXVelocity:(float)velocity;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotate;
- (unsigned)supportedInterfaceOrientations;
- (void)switcherWasDismissed:(BOOL)dismissed;
- (NSRange)visibleItems;
@end


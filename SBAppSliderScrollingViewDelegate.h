/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBAppSliderScrollingViewDelegate <NSObject>
- (void)sliderScroller:(id)scroller contentOffsetChanged:(float)changed;
- (BOOL)sliderScroller:(id)scroller isIndexRemovable:(unsigned)removable;
- (void)sliderScroller:(id)scroller itemTapped:(unsigned)tapped;
- (BOOL)sliderScroller:(id)scroller itemWantsToBeKeptInViewHierarchy:(unsigned)viewHierarchy;
- (void)sliderScroller:(id)scroller itemWantsToBeRemoved:(unsigned)beRemoved;
- (id)sliderScroller:(id)scroller viewForIndex:(unsigned)index;
- (void)sliderScrollerBeganMoving:(id)moving;
- (void)sliderScrollerBeganPanning:(id)panning;
- (void)sliderScrollerDidEndScrolling:(id)sliderScroller;
- (float)sliderScrollerDistanceBetweenItemCenters:(id)centers forOrientation:(int)orientation;
- (BOOL)sliderScrollerIsRelayoutBlocked:(id)blocked;
- (unsigned)sliderScrollerItemCount:(id)count;
- (CGSize)sliderScrollerItemSize:(id)size forOrientation:(int)orientation;
@end


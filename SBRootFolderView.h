/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSearchGestureObserver.h"
#import "_UISettingsKeyObserver.h"
#import "SBFolderView.h"

@class SBRootFolder, SBFParallaxSettings, SBSearchViewController, SBDockView, SBDockIconListView, TPLegacyLCDTextView;

__attribute__((visibility("hidden")))
@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBSearchGestureObserver> {
	SBDockView *_dockView;
	SBDockIconListView *_dockListView;
	TPLegacyLCDTextView *_idleTextView;
	SBFParallaxSettings *_parallaxSettings;
	float _searchGestureProgress;
	SBSearchViewController *_searchViewController;
}
@property(retain, nonatomic) SBRootFolder *folder;
@property(readonly, assign, nonatomic) SBSearchViewController *searchViewController;
- (id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map;
- (id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map forSnapshot:(BOOL)snapshot;
- (void)_configureParallax;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_layoutSubviews;
- (void)_updateEditingStateAnimated:(BOOL)animated;
- (void)dealloc;
- (void)didAnimate;
- (id)dockView;
- (float)effectiveStatusBarHeight;
- (void)fadeContentForMagnificationFraction:(float)magnificationFraction;
- (void)fadeContentForMinificationFraction:(float)minificationFraction;
- (id)iconListViewAtIndex:(unsigned)index;
- (id)iconListViewAtPoint:(CGPoint)point;
- (void)layoutIconLists:(double)lists domino:(BOOL)domino forceRelayout:(BOOL)relayout;
- (void)layoutViewsForSearch;
- (void)lcdTextViewCompletedScroll:(id)scroll;
- (void)resetIconListViews;
- (void)returnScalingView;
- (void)searchGesture:(id)gesture changedPercentComplete:(float)complete;
- (void)setDockOffscreenFraction:(float)fraction;
- (void)setDockVerticalStretch:(float)stretch;
- (void)setIdleText:(id)text;
- (void)setLegibilitySettings:(id)settings;
- (void)setNeedsLayout;
- (void)setOrientation:(int)orientation;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)tearDownListViews;
- (void)willAnimate;
@end


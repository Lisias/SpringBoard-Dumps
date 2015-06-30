/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBAppSwitcherBarViewDelegate;

@interface SBAppSwitcherBarView : UIView <SBAppSwitcherScrollViewDelegate> {
	id<SBAppSwitcherBarViewDelegate> _delegate;
	int _orientation;
	NSMutableArray *_appIcons;
	UIView *_contentView;
	UIImageView *_backgroundImage;
	UIView *_auxView;
	SBAppSwitcherScrollView *_scrollView;
	UIImageView *_topShadowView;
	UIImageView *_bottomShadowView;
}
@property(retain, nonatomic) UIView *auxiliaryView;
@property(assign, nonatomic) id<SBAppSwitcherBarViewDelegate> delegate;
+ (unsigned)iconsPerPage:(int)page;
+ (CGSize)viewSize;
- (id)initWithOrientation:(int)orientation;
- (CGPoint)_firstPageOffset;
- (CGRect)_frameForIndex:(unsigned)index withSize:(CGSize)size;
- (void)_iconRemoveDidStop:(id)_iconRemove finished:(id)finished context:(id)context;
- (unsigned)_pageCount;
- (void)_positionAtFirstPage:(BOOL)firstPage;
- (void)_reflowContent:(BOOL)content;
- (void)_setOrientation:(int)orientation;
- (id)appIcons;
- (id)applicationIconForDisplayIdentifier:(id)displayIdentifier;
- (void)dealloc;
- (void)didMoveToSuperview;
- (BOOL)isScrollingOrOtherwiseBusy;
- (void)layoutSubviews;
- (BOOL)nowPlayingControlsVisible;
- (void)positionForHidden;
- (void)positionForRevealed;
- (void)prepareForDisplay:(id)display orientation:(int)orientation;
- (void)removeIcon:(id)icon;
- (void)replaceIcons:(id)icons with:(id)with;
- (BOOL)scrollView:(id)view shouldCancelInContentForView:(id)view2;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)setEditing:(BOOL)editing;
@end


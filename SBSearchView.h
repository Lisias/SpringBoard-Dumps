/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


@interface SBSearchView : XXUnknownSuperclass {
	SBRoundedCornersView *_roundedCornersView;
	UISearchBar *_searchBar;
	UITableView *_tableView;
	UILabel *_noResultsLabel;
	SBNoResultsView *_noResultsView;
	UIView *_rootView;
	UIView *_contentView;
	BOOL _isKeyboardAnimatingRotation;
	BOOL _hidesEmptyTableFooter;
}
@property(retain, nonatomic) UIView *contentView;
@property(retain, nonatomic) UIView *rootView;
@property(readonly, assign, nonatomic) UIView *roundedCornersView;
@property(readonly, assign, nonatomic) UISearchBar *searchBar;
@property(readonly, assign, nonatomic) UITableView *tableView;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame withContent:(id)content onWallpaper:(id)wallpaper;
- (float)_footerHeight;
- (id)_keyboard;
- (void)_layoutNoResultsView;
- (void)_resetContentViewTransform;
- (void)_setDistantContentViewTransform;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)isKeyboardMinimized;
- (BOOL)isKeyboardVisible;
- (void)keyboardDidShow:(id)keyboard;
- (void)layoutCornerView;
- (void)layoutFooterView;
- (void)scatter:(BOOL)scatter startTime:(double)time;
- (void)scrollViewIsScrollingHorizontally;
- (Class)searchBarClass;
- (void)setFrame:(CGRect)frame;
- (void)setHidesEmptyTableFooter:(BOOL)footer;
- (void)setShowingNoResultsText:(BOOL)text;
- (void)setShowsKeyboard:(BOOL)keyboard animated:(BOOL)animated;
- (void)setShowsNoResultsView:(BOOL)view;
- (Class)tableViewClass;
- (void)unscatter:(BOOL)unscatter startTime:(double)time;
- (void)unscatterAnimationDidStop;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end


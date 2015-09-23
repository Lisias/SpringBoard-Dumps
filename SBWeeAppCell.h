/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWeeAppCell : SBBulletinLinenBackedCell {
	SBWeeApp *_weeApp;
	UIView *_weeAppView;
	BOOL _useTopPadding;
	UITapGestureRecognizer *_tapRecognizer;
}
@property(retain, nonatomic) SBWeeApp *weeApp;
+ (float)rowHeightForViewHeight:(float)viewHeight withTopPadding:(BOOL)topPadding;
- (id)initWithLinenView:(id)linenView reuseIdentifier:(id)identifier;
- (void)_tapped:(id)tapped;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)noteDidDisappear;
- (void)noteWillAppear;
- (void)prepareForReuse;
- (void)setUsesTopPadding:(BOOL)padding;
- (void)willMoveToWindow:(id)window;
@end


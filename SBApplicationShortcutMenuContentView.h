/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBApplicationShortcutMenuContentView : XXUnknownSuperclass {
	SBApplicationShortcutMenuBackgroundView *_backgroundView;
	UIView *_rowAndMaskContainer;
	UIView *_rowContainer;
	UIView *_dividerContainer;
	UIImageView *_maskView;
	NSMutableArray *_itemViews;
	NSMutableArray *_dividers;
	UILongPressGestureRecognizer *_pressGestureRecognizer;
	id<SBApplicationShortcutMenuContentViewDelegate> _delegate;
	int _orientation;
	float _cornerRadius;
	unsigned _maskPresentSlideDirection;
	_UIAssetManager *_assetManager;
	CGRect _initialFrame;
	CGRect _containerBounds;
	CGRect _maxConcentricFrame;
	CGRect _maxMenuFrame;
	CGRect _dismissStartingFrame;
	int _menuPosition;
}
@property(retain, nonatomic) _UIAssetManager *assetManager;
@property(assign, nonatomic) float cornerRadius;
@property(assign, nonatomic) id<SBApplicationShortcutMenuContentViewDelegate> delegate;
@property(readonly, assign, nonatomic) int menuPosition;
+ (float)defaultCornerRadius;
- (id)initWithInitialFrame:(CGRect)initialFrame containerBounds:(CGRect)bounds orientation:(int)orientation shortcutItems:(id)items application:(id)application;
- (void)_configureForMenuPosition:(int)menuPosition menuItemCount:(int)count;
- (void)_dismissForFraction:(float)fraction;
- (void)_enumerateAllowedMenuPositionsInPreferredOrderUsingBlock:(id)preferredOrderUsingBlock;
- (void)_handlePress:(id)press;
- (float)_iconMenuMargin;
- (CGRect)_maxMenuFrameForIconFrame:(CGRect)iconFrame menuPosition:(int)position menuItemCount:(unsigned)count;
- (CGRect)_maxMenuFrameInsideContainerBounds:(CGRect)bounds iconFrame:(CGRect)frame menuPosition:(int)position menuItemCount:(unsigned)count;
- (float)_menuWidth;
- (void)_peekForFraction:(float)fraction;
- (void)_populateRowsWithShortcutItems:(id)shortcutItems application:(id)application;
- (int)_preferredMenuPositionWithContainerBounds:(CGRect)containerBounds menuItemCount:(int)count;
- (void)_prepareForDismiss;
- (void)_presentForFraction:(float)fraction;
- (float)_rowHeight;
- (void)_updateMaskForFraction:(float)fraction exponentialFraction:(float)fraction2 menuContentFrame:(CGRect)frame;
- (void)_updateRowContainerTransformForFraction:(float)fraction menuContentFrame:(CGRect)frame;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)layoutSubviews;
- (float)peekScaleAmount;
- (void)prepareForTransitionType:(unsigned)transitionType;
- (void)updateFraction:(float)fraction forTransitionType:(unsigned)transitionType;
- (void)updateSelectionFromPressGestureRecognizer:(id)pressGestureRecognizer;
@end


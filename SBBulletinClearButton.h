/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBBulletinClearButton : XXUnknownSuperclass {
	BOOL _showingClear;
	UIImageView *_backgroundView;
	UIImageView *_xImageView;
	UIImageView *_clearImageView;
	float _widthWhenShowingX;
	float _widthWhenShowingClear;
	id _clearShownAction;
	id _clearPressedAction;
}
@property(copy, nonatomic) id clearPressedAction;
@property(copy, nonatomic) id clearShownAction;
- (id)init;
- (id)_background;
- (id)_clearImage;
- (void)_pressAction;
- (void)_setShowsClear:(BOOL)clear animated:(BOOL)animated;
- (id)_xImage;
- (void)dealloc;
- (void)resetAnimated:(BOOL)animated;
- (void)setHighlighted:(BOOL)highlighted;
@end


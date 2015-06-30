/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBWallpaperClipView : UIImageView {
	SBWallpaperView *_wallpaperView;
	UIImageView *_gradientView;
	int _orientation;
	CGPoint _contentOffset;
	UIView *_maskView;
	BOOL _usesFilter;
}
@property(assign, nonatomic) CGPoint contentOffset;
@property(retain, nonatomic) SBWallpaperView *wallpaperView;
- (id)initWithFrame:(CGRect)frame wallpaperView:(id)view;
- (void)_gradientAlphaChanged:(id)changed;
- (void)_recomputeGeometry;
- (void)_setWallpaperAlpha:(float)alpha;
- (void)_updateMask;
- (void)_updateWallpaperImage;
- (void)_wallpaperAlphaChanged:(id)changed;
- (void)_wallpaperFrameChanged:(id)changed;
- (void)_wallpaperImageChanged:(id)changed;
- (void)dealloc;
- (void)setFrame:(CGRect)frame;
- (void)setMaskView:(id)view;
- (void)setWallpaperView:(id)view force:(BOOL)force;
@end


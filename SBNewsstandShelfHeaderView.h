/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBNewsstandShelfHeaderView : SBNewsstandTilingImageView {
	float _borderWidth;
	UIImageView *_appleLogo;
	UIImageView *_middleShadow;
	UIImageView *_shelvesTopShading;
	int _orientation;
}
+ (id)_backgroundTileImage;
+ (id)_pathForCachedBackgroundTile;
+ (void)setupCache;
- (id)initWithFrame:(CGRect)frame;
- (void)configureForOrientation:(int)orientation;
- (void)dealloc;
- (void)layoutSubviews;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIImageView.h>
#import "SpringBoard-Structs.h"


@interface SBWallpaperView : UIImageView {
	int _orientation;
	int _variant;
	UIImageView *_topGradient;
	UIImageView *_bottomGradient;
	BOOL _usesFilter;
	float _gradientAlpha;
	CGRect _wallpaperContentsRect;
	BOOL _postsNotifications;
	BOOL _flushWallpaperAutomatically;
}
@property(assign, nonatomic) float filterAlpha;
@property(assign, nonatomic) BOOL flushWallpaperAutomatically;
@property(assign, nonatomic) float gradientAlpha;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic) BOOL postsNotifications;
@property(assign, nonatomic) BOOL usesFilter;
@property(readonly, assign, nonatomic) int variant;
- (id)initWithOrientation:(int)orientation variant:(int)variant;
- (void)_resetImage;
- (void)_setGradientImagesWithOrientation:(int)orientation;
- (void)_setOrientation:(int)orientation duration:(double)duration force:(BOOL)force;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)_wallpaperChanged;
- (float)alpha;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)gradientImageForInterfaceOrientation:(int)interfaceOrientation;
- (void)replaceWallpaperWithImage:(id)image;
- (void)resetCurrentImageToWallpaper;
- (void)setAlpha:(float)alpha;
- (void)setOrientation:(int)orientation duration:(double)duration;
- (CGRect)wallpaperContentsRect;
@end


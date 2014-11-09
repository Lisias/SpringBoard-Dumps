/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, _UILegibilitySettings, SBIconLabelImageParameters, SBIconLabelView, SBWallpaperEffectView, NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleButtonAndLabelView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	SBIconLabelView *_titleLabel;
	SBWallpaperEffectView *_wallpaperEffectView;
	UIView *_wallpaperEffectBackingView;
	UIImageView *_pictureImageView;
	UIImageView *_legibilityImageView;
	UIEdgeInsets _mostlyInsideEdgeInsets;
	SBIconLabelImageParameters *_lastDrawnLabelParameters;
	unsigned _imageRenderingMode;
	BOOL _highlighted;
	BOOL _compact;
	NSString *_title;
	UIImage *_image;
	UIImage *_legibilityImage;
	float _monogramSize;
	_UILegibilitySettings *_legibilitySettings;
}
@property(assign, nonatomic) BOOL compact;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImage *image;
@property(assign, nonatomic) unsigned imageRenderingMode;
@property(retain, nonatomic) UIImage *legibilityImage;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(assign, nonatomic) float monogramSize;
@property(readonly, assign) Class superclass;
@property(copy, nonatomic) NSString *title;
+ (BOOL)_centerImageVerticallyForLayout;
+ (float)_layoutLabelFontSizeCompact:(BOOL)compact;
+ (float)_layoutLabelMaxHeightCompact:(BOOL)compact;
+ (float)_layoutLabelVerticalPaddingCompact:(BOOL)compact;
+ (CGSize)preferredLayoutSizeForMonogramSize:(float)monogramSize compact:(BOOL)compact;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame forMonogramSize:(float)monogramSize compact:(BOOL)compact;
- (void)_handlePressGesture:(id)gesture;
- (BOOL)_highlighted;
- (id)_labelImageParameters:(BOOL)parameters;
- (CGSize)_maxLabelLayoutSize;
- (void)_setHighlighted:(BOOL)highlighted;
- (void)_updateTextLabelIfNecessaryHighlighted:(BOOL)highlighted;
- (void)_updateWallpaperViewLegibilitySettings;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
- (void)layoutSubviews;
@end

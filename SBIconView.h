/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconObserver.h"
#import "_UISettingsKeyObserver.h"
#import "SBReusableView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBIconImageCrossfadeView, SBIconImageView, _UILegibilitySettings, SBFolderIconBackgroundView, UIView, NSTimer, SBCloseBoxView, SBIcon, SBFParallaxSettings, SBIconLabelView;
@protocol SBIconViewDelegate, SBIconAccessoryView, SBIconViewObserver;

__attribute__((visibility("hidden")))
@interface SBIconView : XXUnknownSuperclass <_UISettingsKeyObserver, SBIconObserver, SBReusableView> {
	SBIcon *_icon;
	int _iconLocation;
	UIView *_currentImageView;
	SBIconImageView *_iconImageView;
	SBIconImageCrossfadeView *_crossfadeView;
	UIView<SBIconAccessoryView> *_accessoryView;
	SBCloseBoxView *_closeBox;
	SBFParallaxSettings *_closeBoxParallaxSettings;
	CGPoint _wallpaperRelativeCloseBoxCenter;
	SBIconLabelView *_labelView;
	UIView *_updatedMark;
	SBFolderIconBackgroundView *_dropGlow;
	unsigned _drawsLabel : 1;
	unsigned _isEditing : 1;
	unsigned _isPaused : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _launchDisabled : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _hideLabel : 1;
	unsigned _hideUpdatedMark;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer *_longPressTimer;
	CGRect _visibleImageRect;
	id<SBIconViewDelegate> _delegate;
	id<SBIconViewObserver> _observer;
	_UILegibilitySettings *_legibilitySettings;
	float _iconImageAlpha;
	float _iconAccessoryAlpha;
	float _iconLabelAlpha;
	CGPoint _wallpaperRelativeImageCenter;
}
@property(assign, nonatomic) id<SBIconViewDelegate> delegate;
@property(retain, nonatomic) SBIcon *icon;
@property(assign, nonatomic) float iconAccessoryAlpha;
@property(assign, nonatomic) float iconImageAlpha;
@property(assign, nonatomic) float iconLabelAlpha;
@property(assign, nonatomic) BOOL isEditing;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(assign, nonatomic) int location;
@property(assign, nonatomic) id<SBIconViewObserver> observer;
@property(assign, nonatomic) CGPoint wallpaperRelativeImageCenter;
+ (int)_defaultIconFormat;
+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimation;
+ (float)_labelHeight;
+ (CGRect)_rectForLayoutMetric:(int)layoutMetric;
+ (BOOL)canShowUpdatedMark;
+ (CGPoint)defaultIconImageCenter;
+ (CGSize)defaultIconImageSize;
+ (CGSize)defaultIconSize;
+ (CGSize)defaultVisibleIconImageSize;
+ (CGSize)maxLabelSize;
+ (float)updatedMarkRightMargin;
- (id)initWithDefaultSize;
- (void)_applyEditingStateAnimated:(BOOL)animated;
- (void)_applyIconAccessoryAlpha:(float)alpha;
- (void)_applyIconImageAlpha:(float)alpha;
- (void)_applyIconLabelAlpha:(float)alpha;
- (id)_automationID;
- (void)_backgroundContrastDidChange:(id)_backgroundContrast;
- (CGPoint)_centerForCloseBox;
- (CGPoint)_centerForCloseBoxRelativeToVisibleImageFrame:(CGRect)visibleImageFrame;
- (void)_closeBoxTapped;
- (void)_createAccessoryViewIfNecessary;
- (BOOL)_delegateTapAllowed;
- (void)_delegateTouchEnded:(BOOL)ended;
- (CGRect)_frameForAccessoryView;
- (CGRect)_frameForImageView;
- (CGRect)_frameForLabel;
- (CGRect)_frameForUpdatedMarkWithLabelFrame:(CGRect)labelFrame;
- (CGRect)_frameForVisibleImage;
- (id)_iconImageView;
- (BOOL)_isShowingCloseBox;
- (id)_labelImage;
- (id)_labelImageParameters;
- (float)_labelVerticalOffset;
- (id)_legibilitySettingsWithParameters:(id)parameters;
- (id)_legibilitySettingsWithPrimaryColor:(id)primaryColor;
- (id)_legibilitySettingsWithStyle:(int)style primaryColor:(id)color;
- (void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned)_recursiveNotifyInteractionTintColor;
- (void)_recursivelyUpdateBackdropMaskFrames;
- (void)_setIcon:(id)icon animated:(BOOL)animated;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)_updateAccessoryViewWithAnimation:(BOOL)animation;
- (void)_updateAdaptiveColors;
- (void)_updateBrightness;
- (void)_updateCloseBoxAnimated:(BOOL)animated;
- (void)_updateIconImageViewAnimated:(BOOL)animated;
- (void)_updateJitter;
- (void)_updateLabel;
- (void)_updateProgressAnimated:(BOOL)animated;
- (void)_updateUpdatedMark;
- (BOOL)allowsTapWhileEditing;
- (BOOL)canReceiveGrabbedIcon:(id)icon;
- (void)cancelLongPressTimer;
- (void)cleanupAfterImageCrossfade;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)dropGlow;
- (double)grabDurationForEvent:(id)event;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (CGPoint)iconImageCenter;
- (CGRect)iconImageFrame;
- (id)iconImageSnapshot;
- (CGSize)iconImageVisibleSize;
- (void)iconLaunchEnabledDidChange:(id)iconLaunchEnabled;
- (void)invalidateLabelLayoutGeometry;
- (BOOL)isGrabbed;
- (BOOL)isHighlighted;
- (BOOL)isInDock;
- (BOOL)isTouchDownInIcon;
- (void)layoutSubviews;
- (void)longPressTimerFired;
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
- (void)prepareDropGlow;
- (void)prepareForReuse;
- (void)prepareToCrossfadeImageWithView:(id)view maskCorners:(BOOL)corners trueCrossfade:(BOOL)crossfade;
- (void)prepareToCrossfadeImageWithView:(id)view maskCorners:(BOOL)corners trueCrossfade:(BOOL)crossfade anchorPoint:(CGPoint)point;
- (void)removeAllIconAnimations;
- (void)removeDropGlow;
- (void)setAllowJitter:(BOOL)jitter;
- (void)setFrame:(CGRect)frame;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setIconImageAndAccessoryAlpha:(float)alpha;
- (void)setIconPosition:(CGPoint)position;
- (void)setImageCrossfadeFadeFraction:(float)fraction;
- (void)setImageCrossfadeMorphFraction:(float)fraction totalScale:(float)scale;
- (void)setIsEditing:(BOOL)editing animated:(BOOL)animated;
- (void)setIsGrabbed:(BOOL)grabbed;
- (void)setIsOverlapping:(BOOL)overlapping;
- (void)setLabelHidden:(BOOL)hidden;
- (void)setPaused:(BOOL)paused;
- (void)setRefusesRecipientStatus:(BOOL)status;
- (void)setShouldRasterizeImageView:(BOOL)rasterizeImageView;
- (void)setSuppressesBlurryBackgroundChanges:(BOOL)changes;
- (void)setTouchDownInIcon:(BOOL)icon;
- (void)setUpdatedMarkHidden:(BOOL)hidden;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)showDropGlow:(BOOL)glow;
- (UIEdgeInsets)snapshotEdgeInsets;
- (void)swapInIcon:(id)icon;
- (id)tintColor;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
@end

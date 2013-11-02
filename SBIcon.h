/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIPushButton, UIImageView, SBIconLabel, UIImage, SBIconImageView, SBIconBadge, NSTimer;

@interface SBIcon : UIView {
	UIImageView *_shadow;
	SBIconImageView *_image;
	UIImageView *_reflection;
	SBIconBadge *_badge;
	id _badgeNumberOrString;
	SBIconLabel *_label;
	UIPushButton *_closeBox;
	unsigned _isShowingImages : 1;
	unsigned _drawsLabel : 1;
	unsigned _isHidden : 1;
	unsigned _isRevealable : 1;
	unsigned _inDock : 1;
	unsigned _isGrabbed : 1;
	unsigned _isGrabbing : 1;
	unsigned _highlighted : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _onWallpaper : 1;
	NSTimer *_delayedUnhighlightTimer;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer *_grabTimer;
	UIImage *_cachedIconImages[3];
}
+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimation;
+ (CGSize)defaultIconImageSize;
+ (CGSize)defaultIconSize;
+ (id)dequeueReusableIconImageView;
+ (void)enqueueReusableIconImageView:(id)view;
+ (id)genericAppIcon:(int)icon;
- (id)initWithDefaultSize;
- (id)_automationID;
- (void)_delayedUnhighlight;
- (id)_shadowImageName;
- (BOOL)_shouldLockItemsInStoreDemoMode;
- (void)_updateShadow;
- (void)_updateShadowFrame;
- (void)_updateShadowFrameForShadow:(id)shadow;
- (BOOL)allowJitter;
- (BOOL)allowsCloseBox;
- (int)badgeValue;
- (void)cancelGrabTimer;
- (void)closeBoxClicked:(id)clicked;
- (void)completeUninstall;
- (id)createShadowImageView;
- (id)darkenedIcon:(id)icon alpha:(float)alpha;
- (void)dealloc;
- (id)description;
- (id)displayIdentifier;
- (id)displayName;
- (id)generateIconImage:(int)image;
- (id)getIconImage:(int)image;
- (double)grabDurationForEvent:(id)event;
- (void)grabTimerFired;
- (void)hideCloseBoxAnimationDidStop:(id)hideCloseBoxAnimation didFinish:(id)finish closeBox:(id)box;
- (BOOL)isHidden;
- (BOOL)isHighlighted;
- (BOOL)isInDock;
- (BOOL)isRevealable;
- (BOOL)isShowingCloseBox;
- (BOOL)isShowingImages;
- (BOOL)isTouchDownInIcon;
- (void)launch;
- (BOOL)launchEnabled;
- (void)localeChanged;
- (int)localizedCompareDisplayNames:(id)names;
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
- (void)purgeCachedImages;
- (id)reflectedIcon:(BOOL)icon;
- (void)reloadIconImage;
- (void)removeAllIconAnimations;
- (id)representation;
- (void)setAllowJitter:(BOOL)jitter;
- (void)setBadge:(id)badge;
- (void)setDisplayedIcon:(id)icon;
- (void)setDisplaysOnWallpaper:(BOOL)wallpaper;
- (void)setDrawsLabel:(BOOL)label;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
- (void)setIconPosition:(CGPoint)position;
- (void)setInDock:(BOOL)dock;
- (void)setIsGrabbed:(BOOL)grabbed;
- (void)setIsHidden:(BOOL)hidden animate:(BOOL)animate;
- (void)setIsJittering:(BOOL)jittering;
- (void)setIsRevealable:(BOOL)revealable;
- (void)setIsShowingCloseBox:(BOOL)box;
- (void)setOrigin:(CGPoint)origin;
- (void)setShadowsHidden:(BOOL)hidden;
- (void)setShowsImages:(BOOL)images;
- (BOOL)shouldCacheImageForFormat:(int)format;
- (BOOL)shouldEllipsizeLabel;
- (BOOL)shouldKernLabel;
- (void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
- (BOOL)showsReflection;
- (UIEdgeInsets)snapshotEdgeInsets;
- (id)tags;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (id)uninstallAlertBody;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
- (void)updateLabelKerningAndEllipsing;
- (void)updateLabelOrigin;
@end

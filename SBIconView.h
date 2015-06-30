/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBIconViewLocker, SBIconViewDelegate;

@interface SBIconView : XXUnknownSuperclass <SBIconObserver> {
	SBIcon *_icon;
	id<SBIconViewDelegate> _delegate;
	id<SBIconViewLocker> _locker;
	SBIconImageContainerView *_iconImageContainer;
	SBIconImageView *_iconImageView;
	UIImageView *_iconDarkeningOverlay;
	UIImageView *_ghostlyImageView;
	UIImageView *_reflection;
	UIImageView *_shadow;
	SBIconBadgeImage *_badgeImage;
	UIImageView *_badgeView;
	SBIconLabel *_label;
	BOOL _labelHidden;
	BOOL _labelOnWallpaper;
	UIView *_closeBox;
	int _closeBoxType;
	UIImageView *_dropGlow;
	unsigned _drawsLabel : 1;
	unsigned _isHidden : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _launchDisabled : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _hideShadow : 1;
	NSTimer *_delayedUnhighlightTimer;
	unsigned _onWallpaper : 1;
	unsigned _ghostlyRequesters;
	int _iconLocation;
	float _iconImageAlpha;
	float _iconImageBrightness;
	float _iconLabelAlpha;
	float _accessoryAlpha;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer *_longPressTimer;
	unsigned _ghostlyTag;
	UIImage *_ghostlyImage;
	BOOL _ghostlyPending;
}
@property(assign) id<SBIconViewDelegate> delegate;
@property(readonly, retain) SBIcon *icon;
@property(assign) id<SBIconViewLocker> locker;
+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimation;
+ (BOOL)allowsRecycling;
+ (CGSize)defaultIconImageSize;
+ (CGSize)defaultIconSize;
- (id)initWithDefaultSize;
- (id)_automationID;
- (void)_delayedUnhighlight;
- (int)_delegateCloseBoxType;
- (BOOL)_delegatePositionIsEditable;
- (BOOL)_delegateTapAllowed;
- (void)_delegateTouchEnded:(BOOL)ended;
- (id)_genGhostlyImage:(id)image;
- (Class)_labelClass;
- (CGSize)_labelSize;
- (id)_newCloseBoxOfType:(int)type;
- (id)_overriddenBadgeTextForText:(id)text;
- (float)_reflectionImageOffset;
- (id)_shadowImage;
- (void)_updateBadgePosition;
- (void)_updateIconBrightness;
- (void)_updateShadow;
- (void)_updateShadowFrame;
- (void)_updateShadowFrameForShadow:(id)shadow;
- (BOOL)allowJitter;
- (BOOL)allowsTapWhileEditing;
- (void)applyIconImageTransform:(CATransform3D)transform duration:(float)duration delay:(float)delay;
- (BOOL)canReceiveGrabbedIcon:(id)icon;
- (void)cancelLongPressTimer;
- (void)closeBoxTapped;
- (id)createShadowImageView;
- (void)dealloc;
- (CGRect)defaultFrameForProgressBar;
- (BOOL)delaysUnhighlightWhenTapped;
- (id)dropGlow;
- (CGRect)frameForIconOverlay;
- (int)ghostlyRequesters;
- (double)grabDurationForEvent:(id)event;
- (void)hideCloseBoxAnimationDidStop:(id)hideCloseBoxAnimation didFinish:(id)finish closeBox:(id)box;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (void)iconImageDidUpdate:(id)iconImage;
- (id)iconImageSnapshot:(id)snapshot;
- (id)iconImageView;
- (void)iconLaunchEnabledDidChange:(id)iconLaunchEnabled;
- (BOOL)isGhostly;
- (BOOL)isGrabbed;
- (BOOL)isHidden;
- (BOOL)isHighlighted;
- (BOOL)isInDock;
- (BOOL)isRevealable;
- (BOOL)isShowingCloseBox;
- (BOOL)isShowingDropGlow;
- (BOOL)isTouchDownInIcon;
- (int)location;
- (void)longPressTimerFired;
- (void)placeGhostlyImageView;
- (void)placeIconOverlayView;
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
- (void)positionCloseBoxOfType:(int)type;
- (void)positionIconImageView;
- (void)positionLabel;
- (void)prepareDropGlow;
- (void)prepareForRecycling;
- (void)prepareGhostlyImage;
- (void)prepareGhostlyImageIfNeeded;
- (void)prepareGhostlyImageView;
- (id)reflectedIconWithBrightness:(float)brightness;
- (void)removeAllIconAnimations;
- (void)removeDropGlow;
- (void)removeGhostlyImageView;
- (void)setAllowJitter:(BOOL)jitter;
- (void)setDisplayedIconImage:(id)image;
- (void)setDisplaysOnWallpaper:(BOOL)wallpaper;
- (void)setFrame:(CGRect)frame;
- (void)setGhostly:(BOOL)ghostly requester:(int)requester;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
- (void)setIcon:(id)icon;
- (void)setIconImageAlpha:(float)alpha;
- (void)setIconLabelAlpha:(float)alpha;
- (void)setIconPosition:(CGPoint)position;
- (void)setIsGrabbed:(BOOL)grabbed;
- (void)setIsHidden:(BOOL)hidden animate:(BOOL)animate;
- (void)setIsJittering:(BOOL)jittering;
- (void)setIsOverlapping:(BOOL)overlapping;
- (void)setLabelDisplaysOnWallpaper:(BOOL)wallpaper;
- (void)setLabelHidden:(BOOL)hidden;
- (void)setLocation:(int)location;
- (void)setPartialGhostly:(float)ghostly requester:(int)requester;
- (void)setRefusesRecipientStatus:(BOOL)status;
- (void)setShadowsHidden:(BOOL)hidden;
- (void)setShowsCloseBox:(BOOL)box;
- (void)setShowsCloseBox:(BOOL)box animated:(BOOL)animated;
- (void)setTouchDownInIcon:(BOOL)icon;
- (void)showDropGlow:(BOOL)glow;
- (void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
- (BOOL)showsReflection;
- (UIEdgeInsets)snapshotEdgeInsets;
- (id)snapshotSettings;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (CGAffineTransform)transformToMakeDropGlowShrinkToIconSize;
- (void)updateBadge;
- (void)updateIconOverlayView;
- (void)updateLabel;
- (void)updateReflection;
@end


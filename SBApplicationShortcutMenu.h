/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBApplicationShortcutMenu : XXUnknownSuperclass <SBIconViewDelegate, SBApplicationShortcutMenuContentViewDelegate, UIInteractionProgressObserver, UIGestureRecognizerDelegate> {
	SBApplication *_application;
	SBFWeakReference *_weakIconView;
	UIInteractionProgress *_interactionProgress;
	id<SBApplicationShortcutMenuDelegate> _applicationShortcutMenuDelegate;
	SBFParallaxSettings *_parallaxSettings;
	UIView *_transformedContainerView;
	int _orientation;
	UIView *_backgroundContainerView;
	UIView *_foregroundContainerView;
	_UIBackdropViewSettings *_blurSettings;
	_UIBackdropView *_blurView;
	UIView *_proxyIconViewWrapper;
	SBIconView *_proxyIconView;
	SBApplicationShortcutMenuContentView *_contentView;
	unsigned _presentState;
	float _contentTransitionFraction;
	float _blurAndScaleTransitionFraction;
	float _iconScaleFactor;
	UITapGestureRecognizer *_dismissGestureRecognizer;
	SBClientSideAnimation *_presentAnimation;
	SBClientSideAnimation *_dismissAnimation;
	SBClientSideAnimation *_finishPeekingAnimation;
	NSMutableArray *_dismissCompletionBlocks;
	int _editingForceScore;
	double _lastForceUpdateTime;
	double _presentationStartTime;
	float _lastForceUpdateFraction;
	BOOL _interactionProgressEnded;
	SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}
@property(retain, nonatomic) SBApplication *application;
@property(assign, nonatomic) id<SBApplicationShortcutMenuDelegate> applicationShortcutMenuDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBClientSideAnimation *dismissAnimation;
@property(retain, nonatomic) SBClientSideAnimation *finishPeekingAnimation;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) SBIconView *iconView;
@property(readonly, retain, nonatomic) UIInteractionProgress *interactionProgress;
@property(readonly, assign, nonatomic) BOOL isPresented;
@property(retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property(retain, nonatomic) SBClientSideAnimation *presentAnimation;
@property(assign, nonatomic) unsigned presentState;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) UIView *transformedContainerView;
+ (id)_potentialPresentationReasons;
+ (void)cancelPrepareForPotentialPresentationWithReason:(id)reason;
+ (void)prepareForPotentialPresentationWithReason:(id)reason;
- (id)initWithFrame:(CGRect)frame application:(id)application iconView:(id)view interactionProgress:(id)progress orientation:(int)orientation;
- (void)_applyIconScaleTransformWithIconFactor:(float)iconFactor contentFactor:(float)factor;
- (BOOL)_canDisplayShortcutItem:(id)item;
- (void)_cancelUpdateEditingScoreTimer;
- (void)_dismissAnimated:(BOOL)animated finishPeeking:(BOOL)peeking ignorePresentState:(BOOL)state completionHandler:(id)handler;
- (void)_finishPeekingWithCompletionHandler:(id)completionHandler;
- (void)_handleDismissGesture:(id)gesture;
- (void)_peekWithContentFraction:(float)contentFraction smoothedBlurFraction:(float)fraction;
- (void)_scheduleUpdateEditingScoreAfterTimeout;
- (void)_setupViews;
- (id)_shortcutItemsToDisplay;
- (void)_updateBackgroundForBlurFraction:(float)blurFraction;
- (void)_updateEditingScoreAfterTimeout;
- (void)_updateEditingScoreWithForceVelocity:(float)forceVelocity;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)animated completionHandler:(id)handler;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (BOOL)icon:(id)icon canReceiveGrabbedIcon:(id)icon2;
- (void)icon:(id)icon openFolder:(id)folder animated:(BOOL)animated;
- (void)icon:(id)icon touchEnded:(BOOL)ended;
- (void)icon:(id)icon touchMoved:(id)moved;
- (void)iconCloseBoxTapped:(id)tapped;
- (void)iconHandleLongPress:(id)press;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (void)iconTouchBegan:(id)began;
- (BOOL)iconViewDisplaysBadges:(id)badges;
- (BOOL)iconViewDisplaysCloseBox:(id)box;
- (void)interactionProgress:(id)progress didEnd:(BOOL)end;
- (void)interactionProgressDidUpdate:(id)interactionProgress;
- (void)layoutSubviews;
- (void)menuContentView:(id)view activateShortcutItem:(id)item index:(int)index;
- (BOOL)menuContentView:(id)view canActivateShortcutItem:(id)item;
- (void)presentAnimated:(BOOL)animated;
- (void)updateFromPressGestureRecognizer:(id)pressGestureRecognizer;
@end


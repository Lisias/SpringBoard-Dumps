/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAppResizeGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBMainDisplaySceneLayoutResizeUIManagerDelegate> {
	NSMutableArray *_transactionCompletionBlocks;
	NSMutableArray *_finalActionCompletionBlocks;
	NSMutableDictionary *_cachedSnapshotViews;
	NSMutableDictionary *_cachedPlaceholderViews;
	BOOL _resizingSpeculatively;
	BOOL _hasResizedSpeculatively;
	BOOL _slidingOffOverlaySideApp;
	BOOL _finishingWithOverlaySideAppDismissal;
	BOOL _lastGestureWasFullResizeGesture;
	BOOL _performingFinalAction;
	SBMainDisplaySceneLayoutViewController *_layoutViewController;
	SBLayoutElementViewController *_primaryLayoutElementController;
	SBLayoutElementViewController *_sideLayoutElementController;
	FBUIApplicationSceneDeactivationAssertion *_appDeactivationAssertion;
	SBMainDisplaySceneLayoutResizeUIManager *_resizeUIManager;
	unsigned _lastResizeGestureRegion;
	SBMainWorkspaceTransaction *_currentWorkspaceTransaction;
	NSDate *_currentWorkspaceTransactionStartDate;
	NSTimer *_longPressPinTimer;
	NSTimer *_pinUnpinTapTimer;
	unsigned _pendingFinalActionCount;
	unsigned _currentGestureIdentifier;
}
@property(readonly, retain, nonatomic) FBUIApplicationSceneDeactivationAssertion *appDeactivationAssertion;
@property(assign, nonatomic) unsigned currentGestureIdentifier;
@property(retain, nonatomic) SBMainWorkspaceTransaction *currentWorkspaceTransaction;
@property(copy, nonatomic) NSDate *currentWorkspaceTransactionStartDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(assign, nonatomic, getter=isFinishingWithOverlaySideAppDismissal) BOOL finishingWithOverlaySideAppDismissal;
@property(assign, nonatomic) BOOL hasResizedSpeculatively;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL lastGestureWasFullResizeGesture;
@property(assign, nonatomic) unsigned lastResizeGestureRegion;
@property(readonly, retain, nonatomic) SBMainDisplaySceneLayoutViewController *layoutViewController;
@property(retain, nonatomic) NSTimer *longPressPinTimer;
@property(assign, nonatomic) unsigned pendingFinalActionCount;
@property(assign, nonatomic, getter=isPerformingFinalAction) BOOL performingFinalAction;
@property(retain, nonatomic) NSTimer *pinUnpinTapTimer;
@property(readonly, retain, nonatomic) SBLayoutElementViewController *primaryLayoutElementController;
@property(retain, nonatomic) SBMainDisplaySceneLayoutResizeUIManager *resizeUIManager;
@property(assign, nonatomic, getter=isResizingSpeculatively) BOOL resizingSpeculatively;
@property(readonly, retain, nonatomic) SBLayoutElementViewController *sideLayoutElementController;
@property(assign, nonatomic, getter=isSlidingOffOverlaySideApp) BOOL slidingOffOverlaySideApp;
@property(readonly, assign) Class superclass;
+ (float)_rubberbandingStartScreenEdgeMargin;
+ (id)resizeGestureZoomAnimationFactory;
+ (id)resizeGestureZoomAnimationSettings;
- (id)initWithTransitionRequest:(id)transitionRequest;
- (id)initWithTransitionRequest:(id)transitionRequest layoutViewController:(id)controller;
- (void)_addChildWorkspaceTransaction:(id)transaction;
- (unsigned)_affectedLayoutRolesForFinalAction:(unsigned)finalAction;
- (void)_animateElementViewsForFinalAction:(unsigned)finalAction animationFactory:(id)factory initialVelocity:(float)velocity completionHandler:(id)handler;
- (CGRect)_appFrameForElementWithRole:(int)role inLayoutState:(id)layoutState withSideAppPresentationStyle:(int)sideAppPresentationStyle sideAppWidth:(int)width inCoordinateSpace:(id)coordinateSpace withHeight:(float)height;
- (void)_bailOutOfResizeUIInAnUnsightlyManner;
- (void)_begin;
- (void)_beginSpeculativeResizeIfAppropriate;
- (BOOL)_canBeInterrupted;
- (BOOL)_canTransitionIntoFullResizeWithLayoutState:(id)layoutState;
- (void)_childTransactionDidComplete:(id)_childTransaction;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)reason;
- (void)_dismissResizeUI;
- (void)_dismissResizeUIAnimated:(BOOL)animated;
- (unsigned)_finalActionForGestureState:(int)gestureState gestureRegion:(unsigned)region distanceTraveled:(float)traveled numberOfTouches:(unsigned)touches;
- (void)_finishWithCompletionType:(int)completionType;
- (void)_getPrimaryAppFrame:(CGRect *)frame sideAppFrame:(CGRect *)frame2 grabberHorizontalOffset:(float *)offset forResizeGestureLocation:(float)resizeGestureLocation region:(unsigned)region allowRubberbanding:(BOOL)rubberbanding;
- (void)_getPrimaryAppTransform:(CGAffineTransform *)transform forPrimaryTranslationAmount:(float)primaryTranslationAmount primaryScaleAmount:(float)amount;
- (void)_getPrimaryAppTransform:(CGAffineTransform *)transform sideAppTransform:(CGAffineTransform *)transform2 forPrimaryTranslationAmount:(float)primaryTranslationAmount primaryScaleAmount:(float)amount sideTranslationAmount:(float)amount5 sideScaleAmount:(float)amount6;
- (void)_getPrimaryAppTransform:(CGAffineTransform *)transform sideAppTransform:(CGAffineTransform *)transform2 grabberHorizontalOffset:(float *)offset forResizeGestureRegion:(unsigned)resizeGestureRegion location:(float)location allowRubberbanding:(BOOL)rubberbanding;
- (void)_getSideAppTransform:(CGAffineTransform *)transform forSideTranslationAmount:(float)sideTranslationAmount sideScaleAmount:(float)amount;
- (void)_invalidateTimers;
- (BOOL)_isResizeGestureInSpeculativeResizeRegionForLocation:(float)location;
- (void)_longPressPinTimerDidFire:(id)_longPressPinTimer;
- (float)_maxRubberBandOffsetForAppWidth:(float)appWidth;
- (void)_performFinalAction:(unsigned)action velocity:(float)velocity completionHandler:(id)handler;
- (void)_performWhenCurrentFinalActionCompletesUsingBlock:(id)block;
- (void)_performWhenCurrentWorkspaceTransactionCompletesUsingBlock:(id)block;
- (void)_pinUnpinTapTimerDidFire:(id)_pinUnpinTapTimer;
- (unsigned)_requiredResizeUIStateBeforeAnimatingViewsForFinalAction:(unsigned)finalAction;
- (unsigned)_requiredResizeUIStateBeforeDismissingResizeUIForFinalAction:(unsigned)finalAction;
- (void)_resizeGestureDidUpdate:(id)_resizeGesture;
- (void)_resizeGestureFinishedWithState:(int)state dividerPosition:(float)position velocity:(float)velocity absoluteDistanceTraveled:(float)traveled directionalDistanceTraveled:(float)traveled5 numberOfTouches:(unsigned)touches;
- (void)_resizeGestureFinishedWithState:(int)state gestureRegion:(unsigned)region velocity:(float)velocity distanceTraveled:(float)traveled numberOfTouches:(unsigned)touches;
- (unsigned)_resizeGestureRegionForLocation:(float)location;
- (void)_restartResizeUIWithGestureRecognizer:(id)gestureRecognizer;
- (float)_rubberBandOffsetForOffset:(float)offset maxOffset:(float)offset2 minOffset:(float)offset3 range:(float)range outside:(BOOL *)outside;
- (BOOL)_shouldObscureAppsBeforePerformingFinalAction:(unsigned)action;
- (int)_sideAppWidthForResizeGestureRegion:(unsigned)resizeGestureRegion;
- (void)_tellElementViewsWeEndedResize;
- (void)_tellElementViewsWeWillBeginResize;
- (id)_transactionForExecutingApplicationTransitionContext:(id)executingApplicationTransitionContext eventLabel:(id)label;
- (id)_transitionContextForFinalAction:(unsigned)finalAction;
- (void)_updateFullResizeUIFromGestureRecognizer:(id)gestureRecognizer;
- (void)_updateResizeUIFromGestureRecognizer:(id)gestureRecognizer;
- (void)_updateSlideOffUIFromGestureRecognizer:(id)gestureRecognizer;
- (void)_updateSlideOffUIWithDistance:(float)distance gestureRecognizer:(id)recognizer;
- (void)dealloc;
- (id)resizeGestureRecognizer;
- (id)resizeUIManager:(id)manager cachedResizingPlaceholderViewForLayoutElementViewController:(id)layoutElementViewController;
- (id)resizeUIManager:(id)manager cachedSceneSnapshotViewForLayoutElementViewController:(id)layoutElementViewController;
- (void)resizeUIManager:(id)manager didCreateResizingPlacholderView:(id)view forLayoutElementViewController:(id)layoutElementViewController;
- (void)resizeUIManager:(id)manager didCreateSceneSnapshotView:(id)view forLayoutElementViewController:(id)layoutElementViewController;
- (void)resizeUIManager:(id)manager willChangeDisplayModeOfAppController:(id)appController toDisplayMode:(int)displayMode;
- (void)resizeUIManager:(id)manager willChangeToState:(unsigned)state;
- (void)systemGestureStateChanged:(id)changed;
@end

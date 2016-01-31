/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBMainDisplaySceneLayoutGestureManager : XXUnknownSuperclass <SBSystemGestureRecognizerDelegate, SBSceneResizeSnakebiteGestureRecognizerDelegate, BSTransactionObserver, SBGrabberTongueDelegate> {
	SBMainDisplaySceneLayoutViewController *_sceneViewController;
	SBGrabberTongue *_sideAppGrabberTongue;
	SBGrabberTongue *_sideSwitcherGrabberTongue;
	UIView *_adornmentView;
	BOOL _sideAppRevealGestureIsActive;
	BOOL _sideSwitcherRevealGestureIsActive;
	BOOL _sideSwitcherRevealGestureAsOverlayIsActive;
	CGRect _effectiveKeyboardFrame;
	NSUUID *_lastSideAppRevealGestureTransactionRequestUUID;
	NSUUID *_lastSideSwitcherRevealGestureTransactionRequestUUID;
	NSMutableDictionary *_transactionRequestUUIDToRevealGestureSuccess;
	SBSideAppSlideGestureWorkspaceTransaction *_currentSideAppRevealWorkspaceTransaction;
	SBSideAppSlideGestureWorkspaceTransaction *_currentSideSwitcherRevealWorkspaceTransaction;
	SBSceneResizeSnakebiteGestureRecognizer *_resizeGestureRecognizer;
	SBAppResizeGestureWorkspaceTransaction *_resizeGestureTransaction;
	UILongPressGestureRecognizer *_sideSwitcherPressGestureRecognizer;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBSceneResizeSnakebiteGestureRecognizer *resizeGestureRecognizer;
@property(retain, nonatomic) SBAppResizeGestureWorkspaceTransaction *resizeGestureTransaction;
@property(readonly, retain, nonatomic) SBMainDisplaySceneLayoutViewController *sceneViewController;
@property(readonly, retain, nonatomic) UILongPressGestureRecognizer *sideSwitcherPressGestureRecognizer;
@property(readonly, assign) Class superclass;
- (id)init;
- (id)initWithSceneLayoutViewController:(id)sceneLayoutViewController;
- (void)_activateSideAppViewWithInitialPosition:(float)initialPosition forActivation:(BOOL)activation;
- (void)_activateSideSwitcherViewWithInitialDistance:(float)initialDistance;
- (BOOL)_disableGestureWithTypeForCommonReasons:(unsigned)commonReasons;
- (double)_effectiveValue:(double)value;
- (void)_finishSideAppRevealGestureWithVelocity:(float)velocity distance:(float)distance forActivation:(BOOL)activation;
- (void)_finishSideSwitcherRevealGestureWithVelocity:(float)velocity distance:(float)distance;
- (void)_keyboardFrameDidChange:(id)_keyboardFrame;
- (float)_progressForSideAppTransitionWithNewDistance:(float)newDistance;
- (void)_resizeGestureBegan;
- (void)_resizeGestureDidUpdate:(id)_resizeGesture;
- (void)_setCurrentSideAppRevealTransaction:(id)transaction;
- (void)_setCurrentSideSwitcherRevealTransaction:(id)transaction;
- (void)_setLastSideAppRevealGestureTransactionRequestUUID:(id)uuid;
- (void)_setLastSideSwitcherRevealGestureTransactionRequestUUID:(id)uuid;
- (void)_sideAppRevealGestureBeganForActivation:(BOOL)activation ofSideSwitcher:(BOOL)sideSwitcher;
- (void)_sideAppRevealGestureUpdatedWithDistance:(float)distance;
- (int)_sidePullGestureSucceededForRequestID:(id)requestID;
- (void)_sideSwitcherLongPress:(id)press;
- (void)_sideSwitcherRevealGestureBegan;
- (void)_sideSwitcherRevealGestureUpdatedWithDistance:(float)distance;
- (void)_startResizeTransactionWithLabel:(id)label checkGestureStatus:(BOOL)status;
- (BOOL)anyLayoutGestureActive;
- (BOOL)anyLayoutGestureWaitingToComplete;
- (void)dealloc;
- (BOOL)dismissGrabbersWithStyle:(int)style animated:(BOOL)animated;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;
- (void)grabberTongueBeganPulling:(id)pulling withDistance:(float)distance andVelocity:(float)velocity;
- (void)grabberTongueCanceledPulling:(id)pulling withDistance:(float)distance andVelocity:(float)velocity;
- (float)grabberTongueCenterOnEdge:(id)edge;
- (void)grabberTongueEndedPulling:(id)pulling withDistance:(float)distance andVelocity:(float)velocity;
- (BOOL)grabberTongueOrPullEnabled:(id)enabled;
- (BOOL)grabberTongueRequiredForWholeEdge:(id)wholeEdge;
- (BOOL)grabberTongueRequiredOutsideGrabberFreeRegion:(id)region;
- (void)grabberTongueUpdatedPulling:(id)pulling withDistance:(float)distance andVelocity:(float)velocity;
- (float)grabberTongueWidthOfActiveEdge:(id)activeEdge;
- (float)grabberTongueWidthOfGrabberFreeRegion:(id)grabberFreeRegion;
- (void)grabberTongueWillPresent:(id)grabberTongue;
- (float)heightOfPinningAreaInDividerForSceneResizeGestureRecognizer:(id)sceneResizeGestureRecognizer;
- (float)heightOfSingleTapAreaInDividerForSceneResizeGestureRecognizer:(id)sceneResizeGestureRecognizer;
- (void)installAccessoriesInView:(id)view;
- (int)interfaceOrientationForSceneResizeGestureRecognizer:(id)sceneResizeGestureRecognizer;
- (float)locationOfDividerForSceneResizeGestureRecognizer:(id)sceneResizeGestureRecognizer;
- (float)minimumDistanceForSingleTouchForSceneResizeGestureRecognizer:(id)sceneResizeGestureRecognizer;
- (double)minimumDurationForSingleTouchForSceneResizeGestureRecognizer:(id)sceneResizeGestureRecognizer;
- (float)sceneResizeGestureRecognizer:(id)recognizer locationForViewOffset:(float)viewOffset;
- (BOOL)sceneResizeGestureRecognizer:(id)recognizer shouldWaitForInvalidSingleTouchToBecomeValidWithDistanceFromDivider:(float)divider;
- (float)sceneResizeGestureRecognizer:(id)recognizer viewOffsetForLocation:(float)location;
- (BOOL)sceneResizeGestureRecognizerShouldOnlyRecognizeForSingleTouch:(id)sceneResizeGestureRecognizer;
- (id)sideSwitcherRevealGesture;
- (BOOL)sideSwitcherRevealGestureActive;
- (void)transactionDidBegin:(id)transaction;
- (void)transactionDidComplete:(id)transaction;
- (float)verticalCenterOfSingleTouchRegionForSceneResizeGestureRecognizer:(id)sceneResizeGestureRecognizer;
- (id)viewForSystemGestureRecognizer:(id)systemGestureRecognizer;
@end

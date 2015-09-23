/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate> {
	id _delegate;
	SBAlertView<SBPowerDownViewInterface> *_powerDownView;
	id _orderOutCompletion;
	BOOL _wasStatusBarHiddenAtActivation;
}
@property(assign, nonatomic) id<SBPowerDownControllerDelegate> delegate;
@property(copy, nonatomic) id orderOutCompletion;
@property(assign, nonatomic) BOOL wasStatusBarHiddenAtActivation;
- (id)init;
- (void)_lockedOnTop;
- (void)_restoreIconListIfNecessary;
- (void)activate;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (double)autoLockTime;
- (void)cancel;
- (void)dealloc;
- (BOOL)hasTranslucentBackground;
- (BOOL)managesOwnStatusBarAtActivation;
- (void)orderFront;
- (void)orderOutWithCompletion:(id)completion;
- (void)powerDown;
- (void)powerDownViewAnimateOutCompleted:(id)completed;
- (void)powerDownViewRequestCancel:(id)cancel;
- (void)powerDownViewRequestPowerDown:(id)down;
- (BOOL)powerDownViewShouldShowStatusBarWhenAnimatingOut:(id)powerDownView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (BOOL)showsSpringBoardStatusBar;
@end


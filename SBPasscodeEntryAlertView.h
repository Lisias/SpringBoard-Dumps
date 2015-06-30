/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBPasscodeEntryAlertViewDelegate, SBUIPasscodeLockView;

__attribute__((visibility("hidden")))
@interface SBPasscodeEntryAlertView : SBAlertView {
	SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
	BOOL _dismissing;
	id<SBPasscodeEntryAlertViewDelegate> _delegate;
}
@property(assign, nonatomic) id<SBPasscodeEntryAlertViewDelegate> delegate;
@property(readonly, assign, nonatomic) UIView<SBUIPasscodeLockView> *passcodeLockView;
- (id)initWithFrame:(CGRect)frame;
- (void)_animatePasscodeViewsToVisible:(BOOL)visible completion:(id)completion;
- (void)_dismissAnimationCompleted;
- (id)_passcodeViewGenerator;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)dealloc;
- (BOOL)isReadyToBeRemovedFromView;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
@end


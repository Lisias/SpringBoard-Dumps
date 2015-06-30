/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UINavigationControllerDelegate.h"
#import <Foundation/NSObject.h>
#import "SBSwitcherPopoverWindowControllerDelegate.h"
#import "UIPrintStatusDelegate.h"
#import "UIStatusBarStyleDelegate.h"


@interface SBPrintStatusController : NSObject <UIPrintStatusDelegate, UINavigationControllerDelegate, UIStatusBarStyleDelegate, SBSwitcherPopoverWindowControllerDelegate> {
	SBAppSwitcherController *_switcherController;
	UIPrintStatusViewController *_printStatusController;
	int _numPrintJobs;
	BOOL _dismissingImmediately;
	BOOL _printViewVisible;
	UIView *_rootView;
	UITransitionView *_transitionView;
	UIStatusBar *_fakeStatusBar;
	BOOL _savePopoverWindowForRotation;
	BOOL _showPopoverWhenRotationComplete;
}
@property(readonly, assign, nonatomic) int numPrintJobs;
- (id)initWithSwitcherController:(id)switcherController;
- (void)_cleanupPopoverViews:(BOOL)views;
- (void)_cleanupPrintController;
- (void)_dismissPrintStatus;
- (void)_printStateChanged:(id)changed;
- (void)_updateStateForNumberOfJobs:(int)jobs;
- (void)activatePrintStatusPopoverForView:(id)view;
- (void)activatePrintStatusView;
- (void)dealloc;
- (void)dismissPrintStatusView;
- (double)durationForTransition:(int)transition;
- (void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
- (void)printStatusViewController:(id)controller didDismissWithCancel:(BOOL)cancel;
- (void)printStatusViewControllerJobDidCancel:(id)printStatusViewControllerJob;
- (BOOL)printStatusViewIsShowing;
- (void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
- (void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;
- (void)switcherPopoverController:(id)controller didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)switcherPopoverController:(id)controller willRotateToOrientation:(int)orientation duration:(double)duration;
- (void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;
@end


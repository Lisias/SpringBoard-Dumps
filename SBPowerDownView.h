/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertDisplay.h"


@interface SBPowerDownView : SBAlertDisplay {
	UIView *_dimView;
	TPTopLockBar *_lockView;
	TPBottomButtonBar *_cancelView;
	SBPowerDownController *_powerDownController;
	NSTimer *_autoDismissTimer;
}
- (id)initWithFrame:(CGRect)frame;
- (void)animateDark;
- (void)animateIn;
- (void)animateOut;
- (void)cancel:(id)cancel;
- (void)cancelAutoDismissTimer;
- (void)dealloc;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (void)lockBarStartedTracking:(id)tracking;
- (void)lockBarStoppedTracking:(id)tracking;
- (void)lockBarUnlocked:(id)unlocked;
- (void)notifyDelegateOfPowerDown;
- (void)powerDown:(id)down;
- (void)resetAutoDismissTimer;
- (void)setPowerDownController:(id)controller;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBCallAlertDisplay.h"
#import "SpringBoard-Structs.h"

@class TPPushButton, TPBottomButtonBar, TPCallWaitingButton;

@interface SBCallWaitingAlertDisplay : SBCallAlertDisplay {
	TPCallWaitingButton *_ignoreButton;
	TPCallWaitingButton *_answerButton;
	TPPushButton *_answerAndReleaseButton;
	TPBottomButtonBar *_animatingBottomBar;
	unsigned _didRelease : 1;
	unsigned _didHeldRelease : 1;
	unsigned _setupForThree : 1;
}
+ (id)_createBottomButtonBarForDisplay:(id)display;
+ (id)createBottomBarForInstance:(id)instance;
- (id)initWithSize:(CGSize)size;
- (void)_addCallWaitingButtons:(BOOL)buttons;
- (void)_answerButtonsSwapped;
- (void)_bottomBarSwitchDone;
- (void)_bottomBarSwitchHalfDone;
- (void)_callCountChanged:(id)changed;
- (void)_callWaitingControlsFaded;
- (void)_setPhoneFlipBackAttribute;
- (id)additionalURLParameter;
- (void)answerAndRelease:(id)release;
- (void)answerCall:(CTCallRef)call;
- (void)dealloc;
- (void)dismiss;
- (void)ignore;
- (void)lockBarUnlocked:(id)unlocked;
- (void)setMiddleContentAlpha:(float)alpha;
@end

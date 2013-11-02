/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class UIWindow, UIView, SBApplication;

@interface SBMiniAlertController : NSObject {
	SBApplication *_displayShowingAnAlert;
	UIWindow *_dimmingWindow;
	unsigned _miniAlertVisible : 1;
	unsigned _showDimmingWindowAfterAlertsDismissed : 1;
	UIView *_hiddenAlertWindow;
	CGAffineTransform _dimmingWindowTransform;
}
+ (id)sharedInstance;
- (id)init;
- (void)applyTransformToDimmingWindow:(CGAffineTransform)dimmingWindow;
- (BOOL)canShowAlerts;
- (void)cancelHideDimmingWindow;
- (void)deactivateAlertItemsForDisplay:(id)display;
- (void)dealloc;
- (id)dimImageForKeyboard:(BOOL)keyboard;
- (void)displayDidDismissMiniAlert:(id)display;
- (id)displayShowingAnAlert;
- (void)displayWillDismissMiniAlert:(id)display andShowAnother:(BOOL)another fenceId:(unsigned)anId;
- (void)displayWillShowMiniAlert:(id)display fenceId:(unsigned)anId;
- (void)finishedAnimatingDimWindowOut:(id)anOut didFinish:(id)finish;
- (void)hideAlertWindowForFullscreenAlertActivation:(id)fullscreenAlertActivation;
- (void)hideApplicationMiniAlerts;
- (void)hideDimmingWindow;
- (void)hideDimmingWindowAfterDelay;
- (BOOL)miniAlertVisible;
- (void)noteFullscreenAlertsDismissed;
- (void)noteMiniAlertStateChanged;
- (void)showApplicationMiniAlertsIfNeeded;
- (void)showDimmingWindow;
@end


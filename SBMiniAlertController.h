/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIWindow, SBApplication;

@interface SBMiniAlertController : NSObject {
	SBApplication *_displayShowingAnAlert;
	UIWindow *_dimmingWindow;
	unsigned _miniAlertVisible : 1;
}
+ (id)sharedInstance;
- (BOOL)canShowAlerts;
- (void)cancelHideDimmingWindow;
- (void)deactivateAlertItemsForDisplay:(id)display;
- (id)dimImageForKeyboard:(BOOL)keyboard;
- (void)displayDidDismissMiniAlert:(id)display;
- (id)displayShowingAnAlert;
- (void)displayWillDismissMiniAlert:(id)display andShowAnother:(BOOL)another fenceId:(unsigned)anId;
- (void)displayWillShowMiniAlert:(id)display fenceId:(unsigned)anId;
- (void)finishedAnimatingDimWindowOut:(id)anOut didFinish:(id)finish;
- (void)hideApplicationMiniAlerts;
- (void)hideDimmingWindow;
- (void)hideDimmingWindowAfterDelay;
- (BOOL)miniAlertVisible;
- (void)noteMiniAlertStateChanged;
- (void)showApplicationMiniAlertsIfNeeded;
- (void)showDimmingWindow;
@end

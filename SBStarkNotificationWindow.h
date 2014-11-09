/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWindow.h"
#import "SBStarkNotificationViewControllerDelegate.h"

@class SBStarkNotificationViewController, SBStarkScreenFocusController;

__attribute__((visibility("hidden")))
@interface SBStarkNotificationWindow : SBWindow <SBStarkNotificationViewControllerDelegate> {
	SBStarkScreenFocusController *_focusController;
	id _borrowScreenToken;
}
@property(retain, nonatomic) SBStarkScreenFocusController *focusController;
@property(retain, nonatomic) SBStarkNotificationViewController *rootViewController;
- (id)initWithScreen:(id)screen jailBehavior:(int)behavior;
- (void)dealloc;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (void)notificationViewController:(id)controller stateDidChangeFrom:(int)state;
@end

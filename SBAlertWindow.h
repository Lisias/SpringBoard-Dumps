/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWindow.h"

@class SBAlertWindowViewController, NSMapTable;

__attribute__((visibility("hidden")))
@interface SBAlertWindow : SBWindow {
	SBAlertWindowViewController *_rootViewController;
	NSMapTable *_alertToDisplayMap;
}
+ (int)jailBehavior;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithScreen:(id)screen;
- (id)initWithScreen:(id)screen rootViewController:(id)controller;
- (BOOL)deactivateAlert:(id)alert;
- (void)dealloc;
- (void)displayAlert:(id)alert;
- (BOOL)hasActiveAlertsOrDisplays;
- (BOOL)isOpaque;
- (void)noteInterfaceOrientationChangingTo:(int)to animated:(BOOL)animated;
- (id)stackedAlertsIncludingActiveAlert:(BOOL)alert;
- (int)stackedDisplayCount;
@end


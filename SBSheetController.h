/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBSheetController : NSObject {
	NSMutableDictionary *_appToSheetMap;
	UIWindow *_presentationWindow;
}
+ (id)sharedInstance;
- (id)init;
- (void)animateSheetDown:(id)down;
- (void)animateSheetUp:(id)up;
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;
- (void)dealloc;
- (void)dismissAllSheets;
- (void)dismissRemoteViewIdentifier:(id)identifier forApplication:(id)application;
- (void)dismissSheetsForApplication:(id)application;
- (BOOL)isShowingSheets;
- (BOOL)presentRemoteViewIdentifier:(id)identifier asSheetForApplication:(id)application;
- (BOOL)sheetWantsProgress;
@end


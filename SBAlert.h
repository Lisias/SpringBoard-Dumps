/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDisplay.h"
#import "SpringBoard-Structs.h"

@class NSMutableDictionary, SBAlertWindow, SBAlertDisplay;

@interface SBAlert : SBDisplay {
	SBAlertDisplay *_display;
	NSMutableDictionary *_dictionary;
	SBAlertWindow *_deferredAlertWindow;
}
+ (id)_adapterForController:(id)controller;
+ (void)activateAlertForController:(id)controller animated:(BOOL)animated animateCurrentDisplayOut:(BOOL)anOut withDelay:(BOOL)delay isSlidingDisplay:(BOOL)display;
+ (void)alertAdapterDisplayDidDisappear:(id)alertAdapterDisplay;
+ (id)alertWindow;
+ (void)deactivateAlertForController:(id)controller animated:(BOOL)animated animateOldDisplayInWithStyle:(int)style isSlidingDisplay:(BOOL)display;
+ (void)registerForAlerts;
+ (void)test;
- (void)_updateStatusBarLockAndTime;
- (void)activate;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (Class)alertWindowClass;
- (CGRect)alertWindowRect;
- (BOOL)allowsStackingOfAlert:(id)alert;
- (double)autoDimTime;
- (void)deactivate;
- (void)dealloc;
- (void)didAnimateLockKeypadIn;
- (void)didAnimateLockKeypadOut;
- (void)didFinishAnimatingIn;
- (void)didFinishAnimatingOut;
- (id)display;
- (int)effectiveStatusBarStyle;
- (float)finalAlpha;
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonTap;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)hasTranslucentBackground;
- (int)interfaceOrientationForActivation;
- (id)objectForKey:(id)key;
- (void)removeFromView;
- (void)removeObjectForKey:(id)key;
- (void)setDisplay:(id)display;
- (void)setObject:(id)object forKey:(id)key;
- (BOOL)shouldDeactivateAlertItemsOnActivation;
- (BOOL)showsSpringBoardStatusBar;
- (int)statusBarStyle;
- (int)statusBarStyleOverridesToCancel;
- (BOOL)suppressesNotifications;
- (void)tearDownAlertWindow:(id)window;
- (BOOL)undimsDisplay;
@end


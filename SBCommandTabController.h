/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBCommandTabController : XXUnknownSuperclass <SBCommandTabViewControllerDelegate> {
	SBCommandTabViewController *_commandTabViewController;
	NSTimer *_timer;
	FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
	SBWindow *_window;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, retain, nonatomic) SBWindow *window;
+ (id)keyCommands;
+ (id)sharedInstance;
- (id)init;
- (void)_activateWithForwardDirection:(BOOL)forwardDirection;
- (void)_clearTimer;
- (void)_showCommandTabBarAfterTimer:(id)timer;
- (void)_showWindow:(BOOL)window;
- (void)activateWithKeyCommand:(id)keyCommand;
- (void)dealloc;
- (void)dismiss;
- (void)launchCurrentSelectedApplication;
- (void)next;
- (void)previous;
- (void)viewController:(id)controller selectedApplicationWithBundleID:(id)bundleID;
- (void)viewControllerWantsDismissal:(id)dismissal;
@end


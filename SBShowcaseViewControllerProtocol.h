/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBShowcaseViewControllerProtocol <NSObject>
@property(assign, nonatomic) int revealMode;
@property(assign, nonatomic) SBShowcaseController *showcase;
- (BOOL)activateIgnoringTouches;
- (float)bottomBarHeight;
- (BOOL)expectsFaceContact;
- (float)revealAmountForMode:(int)mode;
- (void)revealModeWillChange:(int)revealMode;
- (BOOL)shouldShowLockStatusBarTime;
- (id)view;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidRotateFromInterfaceOrientation:(int)view;
- (void)viewWillAnimateRotationToInterfaceOrientation:(int)view;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillRotateToInterfaceOrientation:(int)view;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegatePrivate.h"
#import "SpringBoard-Structs.h"
#import "SBNotificationsModeViewController.h"


__attribute__((visibility("hidden")))
@interface SBNotificationsAllModeViewController : SBNotificationsModeViewController <UIGestureRecognizerDelegatePrivate> {
	SBNotificationCenterTouchEater *_clearButtonTouchEater;
	SBNotificationCenterHeaderView *_headerViewCurrentlyInClearState;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_handleEatenTouch:(id)touch;
- (id)_headerViewCurrentlyInClearState;
- (void)_installClearButtonTouchEater;
- (void)_setHeaderViewCurrentlyInClearState:(id)clearState;
- (UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)mode;
- (void)commitReloadOfSections:(id)sections;
- (id)contentUnavailableText;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)infoForBulletin:(id)bulletin inSection:(id)section forFeed:(unsigned)feed;
- (id)infoForBulletinSection:(id)bulletinSection;
- (void)viewDidAppear:(BOOL)view;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end

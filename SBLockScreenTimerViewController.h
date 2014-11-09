/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BBObserverDelegate.h"
#import "SpringBoard-Structs.h"

@class BBBulletin, NSTimer, BBObserver, NSDate, NSString;
@protocol SBLockScreenTimerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenTimerViewController : XXUnknownSuperclass <BBObserverDelegate> {
	BOOL _enabled;
	NSTimer *_updateTimer;
	NSDate *_endDate;
	BBObserver *_observer;
	id<SBLockScreenTimerViewControllerDelegate> _delegate;
	BBBulletin *_timerBulletin;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign) id<SBLockScreenTimerViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(retain) BBBulletin *timerBulletin;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (BOOL)_isEndDateValid;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_updateTimerFired;
- (void)_updateTimerLabelView;
- (void)dealloc;
- (BOOL)isTimerActive;
- (void)loadView;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
- (void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
- (void)observer:(id)observer purgeReferencesToBulletinID:(id)bulletinID;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
- (void)setContentAlpha:(float)alpha;
- (void)setEnabled:(BOOL)enabled;
- (void)setEndDate:(id)date;
- (void)setTimerHidden:(BOOL)hidden;
- (id)timerView;
@end


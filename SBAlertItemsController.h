/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAssertionDelegate.h"
#import "BBObserverDelegate.h"
#import "SpringBoard-Structs.h"
#import "_UISettingsKeyObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBVolumePressBandit.h"

@class NSMutableSet, CPDistributedNotificationCenter, NSString, NSArray, NSTimer, BBObserver, NSMutableArray, SBAlertItem, SBAlertItemsSettings, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBAlertItemsController : XXUnknownSuperclass <_UISettingsKeyObserver, SBVolumePressBandit, SBAssertionDelegate, BBObserverDelegate> {
	NSMutableArray *_lockedAlertItems;
	NSMutableArray *_unlockedAlertItems;
	NSMutableArray *_pendingAlertItems;
	NSMutableArray *_superModalAlertItems;
	NSTimer *_autoDismissTimer;
	CPDistributedNotificationCenter *_notificationCenter;
	unsigned _notificationClientCount;
	BOOL _systemShuttingDown;
	BOOL _lockedButNotSetupYet;
	NSMutableSet *_forceAlertsToPendReasons;
	BBObserver *_bbObserver;
	NSHashTable *_observers;
	SBAlertItemsSettings *_settings;
	SBAlertItem *_testItem;
	NSMutableSet *_suppressionAssertions;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSArray *lockedAlertItems;
@property(readonly, assign) Class superclass;
+ (id)sharedInstance;
- (id)init;
- (void)_activateSuperModalAlertsIfNecessary;
- (void)_buddyDidExit;
- (void)_lockedButNotSetupYetChanged;
- (void)_notificationClientEnded:(id)ended;
- (void)_notificationClientStarted:(id)started;
- (void)_notifyObservers:(id)observers;
- (void)_postAlertPresentedNotificationForType:(int)type sender:(id)sender date:(id)date;
- (void)activateAlertItem:(id)item;
- (void)activateAlertItem:(id)item animated:(BOOL)animated;
- (void)activatePendedAlertsIfNecessary;
- (void)addObserver:(id)observer;
- (id)alertItemsOfClass:(Class)aClass;
- (void)assertionExpired:(id)expired;
- (void)autoDismissAlertItem:(id)item;
- (BOOL)canDeactivateAlertForMenuClickOrSystemGesture;
- (BOOL)captureSuppressionAssertionWithPort:(unsigned)port reason:(id)reason;
- (void)convertUnlockedAlertsToLockedAlerts;
- (BOOL)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(BOOL)animation;
- (void)deactivateAlertItem:(id)item;
- (void)deactivateAlertItem:(id)item reason:(int)reason;
- (void)deactivateAlertItem:(id)item reason:(int)reason animated:(BOOL)animated;
- (void)deactivateAlertItemsForFullscreenAlertActivationAndPendMiniAlerts:(BOOL)fullscreenAlertActivationAndPendMiniAlerts;
- (BOOL)deactivateAlertItemsOfClass:(Class)aClass;
- (BOOL)deactivateAlertItemsOfClass:(Class)aClass reason:(int)reason;
- (BOOL)deactivateAlertItemsOfClass:(Class)aClass reason:(int)reason animated:(BOOL)animated;
- (void)dealloc;
- (BOOL)dontLockOverAlertItems;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (BOOL)hasAlertOfClass:(Class)aClass;
- (BOOL)hasAlerts;
- (BOOL)hasVisibleAlert;
- (BOOL)hasVisibleSuperModalAlert;
- (void)moveActiveAlertsToPendingWithAnimation:(BOOL)animation;
- (void)noteSystemShuttingDown;
- (void)noteVolumeOrLockPressedOverLockedAlerts;
- (void)notifySystemOfAlertItemActivation:(id)alertItemActivation;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
- (void)removeObserver:(id)observer;
- (void)resetAutoDismissTimer;
- (void)setForceAlertsToPend:(BOOL)pend forReason:(id)reason;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (void)stopPendingAlertItemsForFullscreenAlert;
- (id)visibleAlertItem;
@end


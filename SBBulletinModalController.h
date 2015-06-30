/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinModalController.h"
#import "SpringBoard-Structs.h"
#import "SBBulletinBusyClient.h"
#import "BBObserverDelegate.h"
#import "SBBulletinAlertHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBBulletinModalController : XXUnknownSuperclass <BBObserverDelegate, SBBulletinAlertHandler, SBBulletinBusyClient> {
	BBObserver *_observer;
	BOOL _deviceIsLocked;
	NSMutableArray *_incomingBulletinEventQueue;
	NSMutableDictionary *_handlersBySectionID;
	NSMapTable *_handlersByBulletinID;
	NSMapTable *_alertsByBulletinID;
}
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_dequeuePendedEventsIfPossible;
- (BOOL)_enqueueEventBlock:(id)block;
- (BOOL)bindBulletin:(id)bulletin forRegistry:(id)registry;
- (void)bulletinWindowStoppedBeingBusy;
- (void)handleEvent:(int)event withBulletin:(id)bulletin forRegistry:(id)registry;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
- (void)observer:(id)observer modifyBulletin:(id)bulletin;
- (void)observer:(id)observer purgeReferencesToBulletinID:(id)bulletinID;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
@end

@interface SBBulletinModalController (SBBulletinModalAlertLifeCycle)
- (void)destroyingAlert:(id)alert withBulletinID:(id)bulletinID;
@end


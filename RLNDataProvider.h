/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBPushStoreObserver.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BBRemoteDataProvider.h"

@class NSObject, BBDataProviderProxy, BBSectionInfo, NSString, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RLNDataProvider : XXUnknownSuperclass <SBPushStoreObserver, BBRemoteDataProvider> {
	NSString *_sectionID;
	NSMutableArray *_publisherBulletinIDs;
	BBSectionInfo *_defaultSectionInfo;
	NSString *_displayName;
	unsigned _pushSettings;
	BBDataProviderProxy *_proxy;
	NSObject<OS_dispatch_queue> *_queue;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) BBDataProviderProxy *proxy;
@property(readonly, assign) Class superclass;
+ (CGSize)_sizeFromSizeConstraint:(id)sizeConstraint originalSize:(CGSize)size;
- (id)initWithSectionID:(id)sectionID displayName:(id)name queue:(id)queue;
- (id)_actionsForCategoryIdentifier:(id)categoryIdentifier context:(unsigned)context;
- (id)_allBulletinsWithLimit:(unsigned)limit;
- (id)_bbActionFromUIUserNotificationAction:(id)uiuserNotificationAction;
- (unsigned)_bbActivationModeFromUIActivationMode:(unsigned)uiactivationMode;
- (id)_bulletinForNotification:(id)notification;
- (void)_cleanupMigrationFromBrightonWithLastClearedDate:(id)lastClearedDate;
- (id)_defaultActionWithTitle:(id)title;
- (id)_imageForRecordID:(id)recordID;
- (BOOL)_isPushDataProvider;
- (id)_latestBulletinInSet:(id)set;
- (id)_publisherBulletinIDForNotification:(id)notification;
- (void)_saveUpdatedSectionInfo;
- (id)_sortKey;
- (id)_supplementaryActionsForPushStoreNotification:(id)pushStoreNotification context:(unsigned)context;
- (float)attachmentAspectRatioForRecordID:(id)recordID;
- (id)attachmentPNGDataForRecordID:(id)recordID sizeConstraints:(id)constraints;
- (id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
- (id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned)limit lastClearedInfo:(id)info;
- (id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
- (void)dealloc;
- (id)defaultSectionInfo;
- (void)invalidate;
- (void)noteSectionInfoDidChange:(id)noteSectionInfo;
- (void)pushStoreClearedNotifications;
- (void)pushStoreNotificationsDidChange;
- (void)pushStoreUpdatedPushSettings;
- (void)pushStoreUserAcceptedDelivery;
- (void)pushStoreUserDeclinedDelivery;
- (void)rebuildDefaultSectionInfoForPushSettings:(unsigned)pushSettings;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (id)sortDescriptors;
- (BOOL)syncsBulletinDismissal;
@end


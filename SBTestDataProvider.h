/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BBRemoteDataProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BBDataProviderProxy, NSMutableArray, BBDataProviderConnection, NSString;

__attribute__((visibility("hidden")))
@interface SBTestDataProvider : XXUnknownSuperclass <BBRemoteDataProvider> {
	BBDataProviderConnection *_connection;
	BBDataProviderProxy *_proxy;
	NSMutableArray *_bulletins;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)sharedInstance;
- (id)init;
- (id)_bulletin;
- (float)attachmentAspectRatioForRecordID:(id)recordID;
- (id)attachmentPNGDataForRecordID:(id)recordID sizeConstraints:(id)constraints;
- (id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
- (id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
- (void)dataProviderDidLoad;
- (id)defaultSectionInfo;
- (void)noteSectionInfoDidChange:(id)noteSectionInfo;
- (void)publish;
- (void)receiveMessageWithName:(id)name userInfo:(id)info;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (id)sortDescriptors;
@end


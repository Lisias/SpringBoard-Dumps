/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBVolumePressBandit.h"
#import "BBObserverDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBStarkBannerSource.h"


__attribute__((visibility("hidden")))
@interface SBStarkBulletinBannerSource : SBStarkBannerSource <BBObserverDelegate, SBVolumePressBandit> {
	BBObserver *_bbObserver;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithAllowedTargetIdentifier:(void *)allowedTargetIdentifier;
- (void)_reloadVolumePressBanditPreference;
- (void)_showTestBanner:(id)banner;
- (void)dealloc;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
- (void)observer:(id)observer modifyBulletin:(id)bulletin;
- (void)observer:(id)observer noteServerReceivedResponseForBulletin:(id)bulletin;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
@end

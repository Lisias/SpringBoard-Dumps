/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBDefaultBannerViewSource.h"


__attribute__((visibility("hidden")))
@interface SBBulletinBannerItem : XXUnknownSuperclass <SBDefaultBannerViewSource> {
	BBBulletin *_seedBulletin;
	BBObserver *_observer;
	NSArray *_additionalBulletins;
	UIImage *_iconImage;
	SBUISound *_sound;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)itemWithBulletin:(id)bulletin andObserver:(id)observer;
+ (id)itemWithSeedBulletin:(id)seedBulletin additionalBulletins:(id)bulletins andObserver:(id)observer;
- (id)_defaultBBAction;
- (id)_initWithSeedBulletin:(id)seedBulletin additionalBulletins:(id)bulletins andObserver:(id)observer;
- (id)_seedBulletinMessage;
- (void)_setSound;
- (BOOL)_supportsSubActions;
- (id)_uiBannerActionForBBAction:(id)bbaction context:(id)context;
- (id)accessoryIconMask;
- (id)action;
- (id)actionWithIdentifier:(id)identifier;
- (id)additionalBulletins;
- (id)attachmentImage;
- (id)attachmentText;
- (BOOL)canShowInAssistant;
- (void)dealloc;
- (id)defaultActionWithContext:(id)context;
- (id)iconImage;
- (BOOL)inertWhenLocked;
- (BOOL)isCritical;
- (id)lockScreenActionContextWithContext:(id)context;
- (id)message;
- (BOOL)overridesQuietMode;
- (id)pullDownNotification;
- (id)seedBulletin;
- (id)sortDate;
- (id)sound;
- (id)sourceDate;
- (id)subActionLabels;
- (id)subActions;
- (id)suppressedMessage;
- (id)title;
@end


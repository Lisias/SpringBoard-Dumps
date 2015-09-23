/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayBulletinListItem : XXUnknownSuperclass {
	NSMutableArray *_bulletins;
	int _personID;
	NSString *_contactInfo;
	BBBulletin *_activeBulletin;
	NSDate *_sortDate;
	NSDate *_displayDate;
	NSString *_message;
	UIImage *_listItemImage;
}
- (id)initWithBulletin:(id)bulletin;
- (void)_update;
- (id)activeBulletin;
- (void)addBulletin:(id)bulletin;
- (id)attachmentImageForKey:(id)key;
- (id)attachmentText;
- (id)bulletinWithID:(id)anId;
- (id)bulletins;
- (BOOL)canCoalesceWithBulletin:(id)bulletin;
- (BOOL)containsBulletinWithID:(id)anId;
- (id)date;
- (void)dealloc;
- (id)description;
- (BOOL)hasSamePersonAsBulletin:(id)bulletin;
- (id)iconImage;
- (unsigned)maxMessageLines;
- (id)message;
- (void)modifyBulletin:(id)bulletin;
- (void)removeBulletin:(id)bulletin;
- (id)sortDate;
- (id)subtitle;
- (id)title;
@end


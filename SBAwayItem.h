/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SBAwayItem : NSObject {
	NSString *_title;
	NSString *_secondTitle;
	NSString *_singletonTitle;
	int _uid;
	int _type;
	NSDate *_date;
	int _count;
}
- (id)initWithTitle:(id)title uid:(int)uid type:(int)type date:(id)date;
- (id)initWithTitle:(id)title uid:(int)uid type:(int)type date:(id)date count:(int)count;
- (int)compare:(id)compare;
- (int)compareSortingMaskedSMSToBottom:(id)bottom;
- (int)count;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)secondTitle;
- (void)setSecondTitle:(id)title;
- (void)setSingletonTitle:(id)title;
- (id)singletonTitle;
- (id)title;
- (int)type;
- (int)uid;
@end


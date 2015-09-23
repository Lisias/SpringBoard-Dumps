/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayItem : NSObject {
	NSString *_title;
	NSString *_secondTitle;
	int _uid;
	int _type;
	NSDate *_date;
	int _count;
}
- (id)initWithTitle:(id)title uid:(int)uid type:(int)type date:(id)date;
- (id)initWithTitle:(id)title uid:(int)uid type:(int)type date:(id)date count:(int)count;
- (int)compare:(id)compare;
- (int)count;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)secondTitle;
- (void)setSecondTitle:(id)title;
- (id)title;
- (int)type;
- (int)uid;
@end


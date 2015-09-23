/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAwaySystemAlertItem : XXUnknownSuperclass <SBAwayListCellButtonHandler> {
	SBAlertItem *_currentAlert;
	NSString *_title;
	NSArray *_buttonLabels;
	UIImage *_appImage;
	NSString *_message;
	int _cancelButtonIdx;
	BOOL _isAlarm;
}
- (id)initWithSystemAlert:(id)systemAlert;
- (id)buttonLabels;
- (void)buttonPressedAtIndex:(int)index;
- (int)cancelButtonIndex;
- (id)currentAlert;
- (void)dealloc;
- (id)iconImage;
- (BOOL)isAlarm;
- (id)message;
- (void)setCurrentAlert:(id)alert;
- (id)sortDate;
- (id)title;
@end


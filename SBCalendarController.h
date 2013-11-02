/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>


@interface SBCalendarController : NSObject {
	CFDateFormatterRef _dayFormatter;
	int _unreadInvitationCount;
	CalEventExpirationMonitor *_expirationMonitor;
	CalAlarmEngine *_alarmEngine;
	CalDatabase *_database;
}
+ (id)sharedInstance;
- (id)init;
- (void)_adjustOnWake;
- (void)_alarmsDidFire:(id)_alarms;
- (void)_alertForInvitations;
- (void)_checkForTimeZoneIfNecessary;
- (void)_databaseChanged:(id)changed;
- (id)_dayStringForDate:(double)date allDay:(BOOL)day shortFormat:(BOOL)format;
- (void)_didWakeFromSleep;
- (void)_finishInitialization;
- (void)_setInvitationUnreadCount:(int)count;
- (void)_significantTimeChange;
- (id)_stringForDay:(XXStruct_fhKmAA)day withLongFormatString:(id)longFormatString useAbbreviatedFormats:(BOOL)formats;
- (id)_timeStringForDate:(double)date;
- (void)_unreadInvitationsExpired:(id)expired;
- (id)abbreviatedStringForDay:(XXStruct_fhKmAA)day withLongFormatString:(id)longFormatString;
- (id)dateStringForDate:(double)date allDay:(BOOL)day shortFormat:(BOOL)format;
- (void)dealloc;
- (void)playAlertSound;
- (id)stringForDay:(XXStruct_fhKmAA)day withLongFormatString:(id)longFormatString;
- (CFDateFormatterRef)timeFormatter;
- (id)timeStringForDate:(double)date inTimeZone:(id)timeZone;
- (int)unreadInvitationCount;
@end


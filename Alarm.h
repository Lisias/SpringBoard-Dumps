/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface Alarm : NSObject {
	unsigned _alarmHour;
	unsigned _alarmMinute;
	int _alarmSetting;
	NSString *_alarmSoundIdentifier;
	NSString *_alarmTitle;
	NSCalendarDate *_snoozeUntilDate;
	unsigned _isActive : 1;
	unsigned _repeats : 1;
	unsigned _allowsSnooze : 1;
	unsigned _dontSendUpdate : 1;
	unsigned _dontStopSnoozing : 1;
	unsigned _reserved : 27;
}
- (id)init;
- (void)_activateAlertItem;
- (id)_fireDateAfterDate:(id)date;
- (id)_initWithDictionary:(id)dictionary;
- (id)_prefsDictionary;
- (id)_snoozeUntilDate;
- (void)_update;
- (id)alarmSoundIdentifier;
- (BOOL)alarmTimesEqualTo:(id)to;
- (id)alarmTitle;
- (BOOL)allowsSnooze;
- (int)daySetting;
- (void)dealloc;
- (id)description;
- (void)fireAlarm;
- (void)getAlarmHour:(unsigned *)hour minute:(unsigned *)minute;
- (BOOL)isActive;
- (BOOL)isSnoozing;
- (BOOL)repeats;
- (void)setActive:(BOOL)active;
- (void)setAlarmHour:(unsigned)hour minute:(unsigned)minute;
- (void)setAlarmSoundIdentifier:(id)identifier;
- (void)setAlarmTitle:(id)title;
- (void)setAllowsSnooze:(BOOL)snooze;
- (void)setDaySetting:(int)setting;
- (void)setRepeats:(BOOL)repeats;
- (void)startSnoozingFromDate:(id)date;
- (void)stopSnoozing;
@end

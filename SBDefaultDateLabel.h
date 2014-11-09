/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBBulletinDateLabel.h"

@class NSTimer, NSDate, NSString;
@protocol SBDateLabelDelegate;

__attribute__((visibility("hidden")))
@interface SBDefaultDateLabel : XXUnknownSuperclass <SBBulletinDateLabel> {
	NSDate *_timeZoneRelativeStartDate;
	NSDate *_timeZoneRelativeEndDate;
	BOOL _allDay;
	BOOL _isTimestamp;
	NSDate *_effectiveAllDayStartDate;
	NSDate *_effectiveAllDayLastValidDate;
	NSDate *_effectiveAllDayEndDate;
	BOOL _effectiveAllDay;
	BOOL _isCoalescingUpdates;
	BOOL _needsUpdateFromCoalesce;
	NSTimer *_updateTimer;
	id<SBDateLabelDelegate> _delegate;
	int _labelType;
}
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBDateLabelDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isTimestamp;
@property(assign, nonatomic) int labelType;
@property(readonly, assign) Class superclass;
+ (id)_currentCalendar;
- (id)init;
- (void)_configureTimer;
- (id)_constructNonAllDayLabelStringWithDate:(id)date startTime:(double)time startIsToday:(BOOL)today sameDayDates:(BOOL)dates eventOngoing:(BOOL)ongoing withCurrentDate:(id)currentDate forStartLabel:(BOOL)startLabel;
- (void)_forceUpdate;
- (void)_invalidateTimer;
- (id)_localDateForDate:(id)date inTimeZone:(id)timeZone;
- (void)_resetEffectiveAllDayState:(BOOL)state;
- (void)_updateEffectiveAllDayTimes;
- (void)_updateTimerFired:(id)fired;
- (id)constructLabelString;
- (void)dealloc;
- (BOOL)isDateWithinEffectiveAllDayRange:(id)range;
- (BOOL)isEffectiveAllDay;
- (void)prepareForReuse;
- (void)setEndDate:(id)date withTimeZone:(id)timeZone;
- (void)setStartDate:(id)date withTimeZone:(id)timeZone;
- (void)setTimeZoneRelativeEndDate:(id)date;
- (void)setTimeZoneRelativeStartDate:(id)date absoluteStartDate:(id)date2;
- (void)startCoalescingUpdates;
- (void)stopCoalescingUpdates;
- (void)update;
- (void)updateTextIfNecessary;
- (void)updateTextIfNecessary:(BOOL)necessary;
@end


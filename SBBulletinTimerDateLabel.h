/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBulletinTimerDateLabel : XXUnknownSuperclass <SBBulletinDateLabel> {
	double _fireTime;
	NSTimer *_tickTimer;
	BOOL _allDay;
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
+ (id)digitFont;
+ (id)unitFont;
- (id)_formatDuration:(double)duration;
- (void)_invalidateTimer;
- (void)_tickTimerFired:(id)fired;
- (void)_updateText;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setEndDate:(id)date withTimeZone:(id)timeZone;
- (void)setStartDate:(id)date withTimeZone:(id)timeZone;
- (void)startCoalescingUpdates;
- (void)stopCoalescingUpdates;
@end


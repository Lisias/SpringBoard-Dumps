/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAwayBulletinCell : SBAwayListItemCell {
	SBBulletinLockBar *_lockBar;
	SBAwayListActionContext *_actionContext;
	BOOL _disableUnlockSound;
}
@property(readonly, assign, nonatomic) SBAwayListActionContext *actionContext;
+ (float)rowHeightForSubtitle:(id)subtitle imageHeight:(float)height;
+ (float)rowHeightForSubtitle:(id)subtitle message:(id)message maxLines:(unsigned)lines rowWidth:(float)width;
- (void)_createContentView;
- (void)_createLockBar;
- (BOOL)_createsLockBarEarly;
- (void)_lockBarSlidBackToOrigin:(id)origin withDuration:(double)duration;
- (void)dealloc;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (void)layoutSubviews;
- (void)lockBarSlidBackToOrigin:(id)origin;
- (void)lockBarStartedTracking:(id)tracking;
- (void)lockBarStoppedTracking:(id)tracking;
- (void)lockBarUnlocked:(id)unlocked;
- (void)resetLockBar;
- (void)setAttachmentImage:(id)image;
- (void)setAttachmentText:(id)text;
- (void)setDisableUnlockSound:(BOOL)sound;
- (void)setMaxMessageLines:(unsigned)lines;
- (void)setStartDate:(id)date endDate:(id)date2 timeZone:(id)zone allDay:(BOOL)day formatStyle:(int)style;
- (void)setSubtitle:(id)subtitle;
- (void)setUnlockActionContext:(id)context;
- (void)setVIP:(BOOL)vip;
@end


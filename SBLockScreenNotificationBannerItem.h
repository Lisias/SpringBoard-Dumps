/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBLockScreenNotificationBannerItemDelegate, SBUnlockActionHandler;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationBannerItem : XXUnknownSuperclass <SBDefaultBannerViewSource, SBUIQuietModePlayability> {
	SBAwayListItem *_listItem;
	id<SBUnlockActionHandler> _unlockActionHandler;
	id<SBLockScreenNotificationBannerItemDelegate> _delegate;
}
@property(assign, nonatomic) id<SBLockScreenNotificationBannerItemDelegate> delegate;
@property(readonly, assign, nonatomic) SBAwayListItem *listItem;
@property(retain, nonatomic) id<SBUnlockActionHandler> unlockActionHandler;
- (id)initWithListItem:(id)listItem;
- (id)action;
- (id)attachmentImage;
- (id)attachmentText;
- (BOOL)canShowWhileLocked;
- (void)dealloc;
- (id)iconImage;
- (BOOL)inertWhenLocked;
- (BOOL)isCritical;
- (BOOL)isVIP;
- (id)message;
- (BOOL)overridesQuietMode;
- (id)sortDate;
- (id)sourceDate;
- (id)title;
- (id)unlockActionContext;
@end

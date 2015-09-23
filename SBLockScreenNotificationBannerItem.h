/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationBannerItem : XXUnknownSuperclass <SBDefaultBannerViewSource, SBUIQuietModePlayability> {
	SBAwayListItem *_listItem;
	id<SBLockScreenActionHandler> _lockedActionHandler;
	id<SBLockScreenNotificationBannerItemDelegate> _delegate;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBLockScreenNotificationBannerItemDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) SBAwayListItem *listItem;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) id<SBLockScreenActionHandler> unlockActionHandler;
- (id)initWithListItem:(id)listItem;
- (id)accessoryIconMask;
- (id)action;
- (id)attachmentImage;
- (id)attachmentText;
- (BOOL)canShowWhileLocked;
- (void)dealloc;
- (id)iconImage;
- (BOOL)inertWhenLocked;
- (BOOL)isCritical;
- (id)lockScreenActionContext;
- (id)message;
- (BOOL)overridesQuietMode;
- (BOOL)shouldPlayLightsAndSirens;
- (BOOL)showMessagePreview;
- (id)sortDate;
- (id)sourceDate;
- (id)subtitle;
- (id)suppressedMessage;
- (id)title;
@end


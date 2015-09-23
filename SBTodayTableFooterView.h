/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBTodayTableFooterView : XXUnknownSuperclass {
	SBNewWidgetsButton *_newWidgetsButton;
	SBNotificationVibrantButton *_button;
	SBNotificationSeparatorView *_separatorView;
	SBAttributionWrapperViewController *_attributionViewController;
	int _layoutMode;
}
@property(retain, nonatomic) SBAttributionWrapperViewController *attributionViewController;
@property(assign, nonatomic) int layoutMode;
- (id)initWithFrame:(CGRect)frame;
- (float)_attributionOriginY;
- (void)_availableWidgetsUpdated:(id)updated;
- (float)_buttonBottomPadding;
- (BOOL)_isDevicePasscodeLocked;
- (void)_updateAttributionFrame;
- (void)_updateForContentCategorySizeDidChange;
- (void)_updateForLockStateDidChange:(id)_updateForLockState;
- (void)addTarget:(id)target action:(SEL)action;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setVisibleWidgetsIDs:(id)ids;
- (CGSize)sizeThatFits:(CGSize)fits;
@end


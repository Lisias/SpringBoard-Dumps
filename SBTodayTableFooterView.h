/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBAttributionWrapperViewController, SBNotificationSeparatorView, SBNewWidgetsLabel, SBNotificationVibrantButton, UIControl;

__attribute__((visibility("hidden")))
@interface SBTodayTableFooterView : XXUnknownSuperclass {
	SBNewWidgetsLabel *_newWidgetsLabel;
	SBNotificationVibrantButton *_button;
	SBNotificationSeparatorView *_separatorView;
	SBAttributionWrapperViewController *_attributionViewController;
	int _layoutMode;
}
@property(retain, nonatomic) SBAttributionWrapperViewController *attributionViewController;
@property(readonly, assign, nonatomic) UIControl *button;
@property(assign, nonatomic) int layoutMode;
- (id)initWithFrame:(CGRect)frame;
- (float)_attributionOriginY;
- (void)_availableWidgetsUpdated:(id)updated;
- (float)_buttonBottomPadding;
- (BOOL)_isDevicePasscodeLocked;
- (void)_updateAttributionFrame;
- (void)_updateForContentCategorySizeDidChange;
- (void)_updateForLockStateDidChange:(id)_updateForLockState;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setVisibleWidgetsIDs:(id)ids;
- (CGSize)sizeThatFits:(CGSize)fits;
@end


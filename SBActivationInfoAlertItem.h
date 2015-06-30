/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDismissOnlyAlertItem.h"


@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem {
	UITextView *_textView;
	NSString *_meid;
	NSString *_imei;
	NSString *_iccid;
	float _alertHeight;
}
+ (id)activeItem;
- (id)init;
- (void)_simStatusChanged:(id)changed;
- (void)_updateTextView;
- (BOOL)allowInSetup;
- (void)cleanPreviousConfiguration;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didDeactivateForReason:(int)reason;
- (void)didPresentAlertView:(id)view;
- (BOOL)forcesModalAlertAppearance;
- (void)willActivate;
@end


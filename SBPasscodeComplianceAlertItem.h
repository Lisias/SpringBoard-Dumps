/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBPasscodeComplianceAlertItem : XXUnknownSuperclass {
	NSString *_title;
	NSString *_message;
	NSString *_continueButtonTitle;
	NSString *_cancelButtonTitle;
}
- (id)initWithTitle:(id)title message:(id)message continueButtonTitle:(id)title3 cancelButtonTitle:(id)title4;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)shouldShowInLockScreen;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {
	NSString *_title;
	NSString *_body;
	double _autoDismissInterval;
}
- (id)initWithTitle:(id)title body:(id)body;
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;
- (double)autoDismissInterval;
- (id)bodyText;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (id)lockLabel;
- (void)performUnlockAction;
- (void)setAutoDismissInterval:(double)interval;
- (void)setBodyText:(id)text;
- (void)setTitle:(id)title;
- (id)title;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBaseSoftwareUpdateAlertItem.h"


@interface SBSoftwareUpdateVerifyingUpdateAlertItem : SBBaseSoftwareUpdateAlertItem {
	UIActivityIndicatorView *_activityView;
	UILabel *_label;
}
- (id)initWithDescriptor:(id)descriptor;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (BOOL)shouldShowInLockScreen;
- (BOOL)undimsScreen;
- (void)willPresentAlertView:(id)view;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"


@interface SBLockScreenAudioRoutesAlertItem : SBAlertItem {
}
- (id)alertSheet;
- (Class)alertSheetClass;
- (BOOL)allowAutoUnlock;
- (BOOL)allowMenuButtonDismissal;
- (void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;
- (void)performUnlockAction;
- (BOOL)shouldShowInLockScreen;
- (BOOL)togglesMediaControls;
- (void)willRelockForButtonPress:(BOOL)buttonPress;
@end


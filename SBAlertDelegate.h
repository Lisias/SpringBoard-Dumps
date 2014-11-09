/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBAlertDelegate <NSObject>
- (void)alert:(id)alert requestsBackgroundStyleChangeWithAnimationFactory:(id)animationFactory;
- (void)alertIsReadyToBeDeactivated:(id)beDeactivated;
- (void)alertIsReadyToBeRemovedFromView:(id)view;
- (void)alertWantsToForceWallpaperTunnelUpdate:(id)forceWallpaperTunnelUpdate;
- (void)alertWillDismiss:(id)alert;
@end


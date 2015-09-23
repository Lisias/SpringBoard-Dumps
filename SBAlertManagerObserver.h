/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBAlertManagerObserver <NSObject>
@optional
- (void)alertManager:(id)manager didActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager didChangeTopAlertFromAlert:(id)alert toAlert:(id)alert3;
- (void)alertManager:(id)manager didCreateAlertWindow:(id)window;
- (void)alertManager:(id)manager didDeactivateAlert:(id)alert top:(BOOL)top;
- (void)alertManager:(id)manager didRemoveAlert:(id)alert fromWindow:(id)window;
- (void)alertManager:(id)manager didTearDownAlertWindow:(id)window;
- (void)alertManager:(id)manager topAlert:(id)alert didChangeStatusBarVisibility:(BOOL)visibility;
- (void)alertManager:(id)manager topAlert:(id)alert requestsWallpaperStyleChangeWithAnimationFactory:(id)animationFactory;
- (void)alertManager:(id)manager topAlertDidChangeOrientationEventsEnabled:(id)topAlert;
- (void)alertManager:(id)manager willActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager willDeactivateAlert:(id)alert top:(BOOL)top;
- (void)alertManager:(id)manager willTearDownAlertWindow:(id)window;
@end


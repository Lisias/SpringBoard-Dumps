/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBAlertManagerDelegate <NSObject>
@optional
- (int)alertManager:(id)manager defaultInterfaceOrientationForPresentationOfAlert:(id)alert;
- (BOOL)alertManager:(id)manager defaultShouldAutorotateForAlert:(id)aDefault;
- (unsigned)alertManager:(id)manager defaultSupportedInterfaceOrientationsForAlert:(id)alert;
- (id)alertManager:(id)manager newAlertWindowForScene:(id)scene;
- (BOOL)alertManager:(id)manager shouldDeactivateDismissedAlert:(id)alert;
@required
- (CGRect)sceneFrameForAlerts:(id)alerts;
- (float)sceneLevelForAlerts;
@end


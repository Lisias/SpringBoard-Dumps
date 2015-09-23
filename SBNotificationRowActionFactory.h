/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBNotificationRowActionFactory : XXUnknownSuperclass {
	BOOL _shouldUseNarrowWidthForLonelyDismissAction;
	BOOL _shouldUseExteriorDismissActionSeparators;
	Class _separatorClass;
}
@property(retain, nonatomic) Class separatorClass;
@property(assign, nonatomic) BOOL shouldUseExteriorDismissActionSeparators;
@property(assign, nonatomic) BOOL shouldUseNarrowWidthForLonelyDismissAction;
+ (id)lockScreenRowActionFactory;
+ (id)notificationCenterRowActionFactory;
- (Class)_actionButtonClassForAppearance:(id)appearance;
- (int)_actionButtonStyleForAppearance:(id)appearance primaryActionExists:(BOOL)exists;
- (id)_backgroundColorForActionStyle:(int)actionStyle;
- (id)_dismissActionForBulletin:(id)bulletin shouldUseNarrowWidth:(BOOL)width isFirst:(BOOL)first isLast:(BOOL)last handler:(id)handler;
- (BOOL)_isCustomAppearance:(id)appearance;
- (id)_rowActionWithBBAction:(id)bbaction bulletinActionStyle:(int)style bulletinContext:(id)context handler:(id)handler;
- (id)_rowActionWithBBAction:(id)bbaction button:(id)button handler:(id)handler;
- (unsigned)_tableViewStyleForBulletinActionStyle:(int)bulletinActionStyle;
- (void)_updateSeparatorsForDismissButton:(id)dismissButton isFirst:(BOOL)first isLast:(BOOL)last;
- (void)dealloc;
- (id)rowActionsForAlertItem:(id)alertItem isFirst:(BOOL)first isLast:(BOOL)last handler:(id)handler;
- (id)rowActionsForBulletin:(id)bulletin isFirst:(BOOL)first isLast:(BOOL)last handler:(id)handler;
- (id)rowActionsForSnoozedAlarmLocalNotification:(id)snoozedAlarmLocalNotification isFirst:(BOOL)first isLast:(BOOL)last handler:(id)handler;
- (BOOL)shouldSuppressSupplementaryActionsForPrivacy:(id)privacy;
@end


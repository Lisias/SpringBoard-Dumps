/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBLeafIconDataSource <NSObject>
- (id)icon:(id)icon defaultImageWithFormat:(int)format;
- (id)icon:(id)icon imageWithFormat:(int)format;
- (BOOL)icon:(id)icon launchFromLocation:(int)location;
- (int)iconAccessoryType:(id)type;
- (BOOL)iconAllowsLaunch:(id)launch;
- (BOOL)iconAllowsUninstall:(id)uninstall;
- (BOOL)iconAppearsInNewsstand:(id)newsstand;
- (id)iconBadgeNumberOrString:(id)string;
- (BOOL)iconCanEllipsizeLabel:(id)label;
- (BOOL)iconCanTightenLabel:(id)label;
- (BOOL)iconCompleteUninstall:(id)uninstall;
- (id)iconDisplayName:(id)name;
- (id)iconFormattedAccessoryString:(id)string;
- (BOOL)iconIsBeta:(id)beta;
- (BOOL)iconIsRecentlyUpdated:(id)updated;
- (unsigned)iconPriority:(id)priority;
- (BOOL)iconProgressIsPaused:(id)paused;
- (float)iconProgressPercent:(id)percent;
- (int)iconProgressState:(id)state;
@end


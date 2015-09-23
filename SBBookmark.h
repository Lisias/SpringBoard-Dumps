/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBookmark : XXUnknownSuperclass <SBLeafIconDataSource> {
	UIWebClip *_webClip;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) NSString *identifier;
@property(readonly, retain, nonatomic) NSURL *launchURL;
@property(readonly, assign) Class superclass;
@property(readonly, retain, nonatomic) UIWebClip *webClip;
+ (id)bookmarkWithWebClip:(id)webClip;
- (id)initWithWebClip:(id)webClip;
- (void)_deviceUnlockedForFirstTime:(id)firstTime;
- (BOOL)allowsUninstall;
- (void)dealloc;
- (id)icon:(id)icon defaultImageWithFormat:(int)format;
- (id)icon:(id)icon imageWithFormat:(int)format;
- (BOOL)icon:(id)icon launchFromLocation:(int)location context:(id)context;
- (int)iconAccessoryType:(id)type;
- (BOOL)iconAllowsLaunch:(id)launch;
- (BOOL)iconAllowsUninstall:(id)uninstall;
- (BOOL)iconAppearsInNewsstand:(id)newsstand;
- (id)iconBadgeNumberOrString:(id)string;
- (BOOL)iconCanEllipsizeLabel:(id)label;
- (BOOL)iconCanTightenLabel:(id)label;
- (BOOL)iconCompleteUninstall:(id)uninstall;
- (id)iconDisplayName:(id)name forLocation:(int)location;
- (id)iconFormattedAccessoryString:(id)string;
- (BOOL)iconIsBeta:(id)beta;
- (BOOL)iconIsRecentlyUpdated:(id)updated;
- (unsigned)iconPriority:(id)priority;
- (BOOL)iconProgressIsPaused:(id)paused;
- (float)iconProgressPercent:(id)percent;
- (int)iconProgressState:(id)state;
@end


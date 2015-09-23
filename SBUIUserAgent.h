/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBUIUserAgent <NSObject>
- (int)activeInterfaceOrientation;
- (BOOL)canLaunchFromBulletinWithURL:(id)url bundleID:(id)anId;
- (BOOL)canUserLaunchIcon;
- (id)createWallpaperView:(int)view;
- (BOOL)deviceIsLocked;
- (void)dimScreen:(BOOL)screen;
- (id)foregroundApplicationDisplayID;
- (id)foregroundDisplayID;
- (BOOL)homeScreenIsDisplayingWallpaper;
- (BOOL)isSBUILoggingEnabled;
- (BOOL)launchDisplayWithURL:(id)url forCall:(BOOL)call sender:(id)sender;
- (BOOL)launchFromBulletinWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate launchOrigin:(int)origin;
- (BOOL)launchFromPushOrLocalBulletin:(id)pushOrLocalBulletin origin:(int)origin;
- (BOOL)lockScreenIsShowing;
- (id)modalBulletinAlertHandlerRegistry;
- (int)networkUsageTypeForAppWithDisplayID:(id)displayID;
- (BOOL)openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated;
- (void)openURL:(id)url animateIn:(BOOL)anIn scale:(float)scale start:(double)start duration:(float)duration animateOut:(BOOL)anOut;
- (void)playRingtoneAtPath:(id)path;
- (void)playRingtoneAtPath:(id)path vibrationPattern:(id)pattern;
- (void)prepareToAnswerCall;
- (void)setBadgeNumberOrString:(id)string forApplicationWithID:(id)anId;
- (void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)identifier;
- (void)setIdleText:(id)text;
- (BOOL)springBoardIsActive;
- (void)stopRinging;
- (id)topSuspendedEventsOnlyDisplayID;
- (void)updateInterfaceOrientationIfNecessary;
@end


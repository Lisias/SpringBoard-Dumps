/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUserInstalledApplicationIcon.h"


@interface SBNewsstandApplicationIcon : SBUserInstalledApplicationIcon {
	SBNewsstandApplication *_fakeApp;
}
+ (id)iconOverlayImageForIcon:(id)icon inLocation:(int)location;
- (id)initWithApplication:(id)application;
- (id)application;
- (id)badgeNumberOrString;
- (void)dealloc;
- (id)getGenericIconImage:(int)image;
- (BOOL)iconAppearsInNewsstand;
- (int)iconFormatForLocation:(int)location;
- (id)iconOverlayImageForLocation:(int)location;
- (void)launch;
- (BOOL)launchEnabled;
- (BOOL)shouldCacheImageForFormat:(int)format;
- (BOOL)shouldWarmUp;
@end


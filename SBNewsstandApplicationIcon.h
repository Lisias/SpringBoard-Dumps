/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUserInstalledApplicationIcon.h"

@class SBNewsstandApplication;

__attribute__((visibility("hidden")))
@interface SBNewsstandApplicationIcon : SBUserInstalledApplicationIcon {
	SBNewsstandApplication *_fakeApp;
}
@property(retain, nonatomic) SBNewsstandApplication *fakeApp;
- (id)initWithApplication:(id)application;
- (id)application;
- (void)dealloc;
- (id)getGenericIconImage:(int)image;
- (BOOL)iconAppearsInNewsstand;
- (int)iconFormatForLocation:(int)location;
- (Class)iconImageViewClassForLocation:(int)location;
- (BOOL)isNewsstandApplicationIcon;
- (BOOL)launchEnabled;
- (void)launchFromLocation:(int)location;
- (BOOL)shouldWarmUp;
@end


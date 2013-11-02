/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIcon.h"

@class SBApplication;

@interface SBApplicationIcon : SBIcon {
	SBApplication *_app;
}
- (id)initWithApplication:(id)application;
- (id)_automationID;
- (id)application;
- (void)dealloc;
- (id)displayIdentifier;
- (id)displayName;
- (id)generateIconImage:(int)image;
- (void)launch;
- (BOOL)launchEnabled;
- (void)setBadge:(id)badge;
- (BOOL)shouldEllipsizeLabel;
- (id)tags;
@end

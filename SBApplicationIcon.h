/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLeafIcon.h"
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBApplicationIcon : SBLeafIcon {
	NSString *_displayIdentifier;
	unsigned _appIsBeingCleaned : 1;
}
- (id)initWithApplication:(id)application;
- (id)__loadIconImage:(id)image format:(int)format scale:(float)scale;
- (id)_blockForGeneratingIconImageInBackgroundWithFormat:(int)format complete:(id)complete;
- (void)_setAppIsBeingCleanedFlag;
- (void)_terminationAssertionDidChange;
- (id)application;
- (id)applicationBundleID;
- (id)automationID;
- (id)blockForGeneratingIconImageInBackgroundWithFormat:(int)format;
- (BOOL)canEllipsizeLabel;
- (BOOL)canGenerateImageInBackgroundForFormat:(int)format;
- (void)completeUninstall;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (id)displayName;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)generateIconImage:(int)image;
- (void)generateIconImageInBackground:(id)background;
- (void)launch;
- (BOOL)launchEnabled;
- (void)launchFromViewSwitcher;
- (void)setBadge:(id)badge;
- (id)tags;
@end


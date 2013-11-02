/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLeafIcon.h"

@class UIWebClip;

@interface SBBookmarkIcon : SBLeafIcon {
	UIWebClip *_webClip;
}
- (id)initWithWebClip:(id)webClip;
- (BOOL)allowsUninstall;
- (void)completeUninstall;
- (void)dealloc;
- (id)displayName;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)generateIconImage:(int)image;
- (void)launch;
- (id)leafIdentifier;
- (id)webClip;
@end


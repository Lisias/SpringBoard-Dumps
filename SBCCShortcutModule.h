/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBCCButtonModule.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SBCCShortcutModule : SBCCButtonModule {
	NSString *_displayID;
	NSURL *_url;
}
@property(copy, nonatomic) NSString *displayID;
@property(copy, nonatomic, setter=setURL:) NSURL *url;
+ (id)identifier;
- (BOOL)_toggleState;
- (void)activateApp;
- (void)activateAppWithDisplayID:(id)displayID url:(id)url;
- (id)aggdKey;
- (void)dealloc;
- (id)displayName;
- (id)identifier;
- (BOOL)isRestricted;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBApplication.h"
#import "SpringBoard-Structs.h"

@class UIWebClip;

__attribute__((visibility("hidden")))
@interface SBWebApplication : SBApplication {
	UIWebClip *_webClip;
	BOOL _isLastWebApplication;
}
@property(retain) UIWebClip *webClip;
+ (id)displayIdentifierForWebClip:(id)webClip;
+ (id)displayIdentifierForWebClipIdentifier:(id)webClipIdentifier;
- (id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
- (id)_contextHostRequesterForRequester:(id)requester;
- (id)_newDefaultImageInfoForLaunchingOrientation:(int)launchingOrientation scale:(float)scale;
- (void)_setActivationState:(int)state;
- (id)_urlForLaunch;
- (id)activationSettings;
- (void)clearContextHostManager;
- (id)contextHostViewForRequester:(id)requester;
- (void)dealloc;
- (void)didExitWithInfo:(id)info type:(int)type;
- (void)disableContextHostingForRequester:(id)requester;
- (void)enableContextHostingForRequester:(id)requester orderFront:(BOOL)front;
- (BOOL)isWebApplication;
- (void)setContextHostManager:(id)manager;
- (void)setProcessInfo:(id)info;
- (void)setRunning:(BOOL)running;
- (void)willActivateOtherWebApplication:(id)application;
@end


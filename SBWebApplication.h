/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBApplication.h"

@class UIWebClip;

__attribute__((visibility("hidden")))
@interface SBWebApplication : SBApplication {
	UIWebClip *_webClip;
	BOOL _isLastWebApplication;
}
@property(retain) UIWebClip *webClip;
+ (id)displayIdentifierForWebClip:(id)webClip;
+ (id)displayIdentifierForWebClipIdentifier:(id)webClipIdentifier;
- (id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated entitlements:(id)entitlements;
- (void)_addContextHostManager:(id)manager;
- (void)_addContextHostManagerWithoutLooping:(id)looping;
- (id)_customStartupImageForScreen:(id)screen launchingOrientation:(int)orientation;
- (id)_defaultImageInfoForScreen:(id)screen launchingOrientation:(int)orientation;
- (void)_removeContextHostManager:(id)manager;
- (void)_removeContextHostManagerWithoutLooping:(id)looping;
- (void)_setActivationState:(int)state;
- (id)_urlForLaunch;
- (id)activationSettings;
- (void)dealloc;
- (void)didExitWithInfo:(id)info type:(int)type;
- (id)icon:(id)icon imageWithFormat:(int)format;
- (BOOL)iconAllowsUninstall:(id)uninstall;
- (BOOL)iconCanEllipsizeLabel:(id)label;
- (BOOL)isSnapshotPresentForLaunchingInterfaceOrientation:(int)launchingInterfaceOrientation;
- (BOOL)isWebApplication;
- (void)setProcessInfo:(id)info;
- (void)setRunning:(BOOL)running;
- (void)willActivateOtherWebApplication:(id)application;
- (id)windowContextHostManager:(id)manager overrideRequester:(id)requester;
- (BOOL)windowContextHostManager:(id)manager shouldEnableContextHostingForRequester:(id)requester priority:(int)priority;
@end

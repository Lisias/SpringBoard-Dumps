/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBWebApplication : SBApplication {
	UIWebClip *_webClip;
}
@property(retain) UIWebClip *webClip;
- (id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
- (BOOL)canFindDefaultImage:(BOOL *)image preferredScale:(float)scale originalOrientation:(int *)orientation currentOrientation:(int *)orientation4 launchingInterfaceOrientation:(int)orientation5 canUseIOSurface:(BOOL)surface imagePointer:(id *)pointer;
- (void)dealloc;
- (void)exitedAbnormally;
- (BOOL)isWebApplication;
- (void)setProcess:(id)process;
- (void)willActivateOtherWebApplication:(id)application;
@end

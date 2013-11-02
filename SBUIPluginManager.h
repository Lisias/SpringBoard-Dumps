/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBPluginManager.h"

@class SBUIPluginHost, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBUIPluginManager : SBPluginManager {
	NSMutableDictionary *_uiPlugins;
	SBUIPluginHost *_pendingActivation;
	SBUIPluginHost *_hostPendingActivation;
}
@property(retain) SBUIPluginHost *hostPendingActivation;
+ (id)sharedInstance;
- (id)_loadedUIPluginHostsVisible:(BOOL)visible;
- (void)cancelPendingActivationEvent:(int)event;
- (BOOL)handleActivationEvent:(int)event;
- (BOOL)handleMenuButtonDownEvent;
- (BOOL)handleMenuButtonTap;
- (id)loadUIPluginNamed:(id)named withHost:(id)host;
- (id)loadedUIPluginHosts;
- (id)loadedUIPlugins;
- (BOOL)overrideInterfaceOrientation:(int *)orientation;
- (BOOL)overrideScreenDimInterval:(double *)interval;
- (void)prepareForActivationEvent:(int)activationEvent afterInterval:(double)interval;
- (BOOL)suppressingNotifications;
- (BOOL)unloadUIPlugin:(id)plugin forHost:(id)host;
- (BOOL)wantsActivationEvent:(int)event interval:(double *)interval;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBRemoteNotificationServer : XXUnknownSuperclass <APSConnectionDelegate> {
	NSMutableDictionary *_bundleIdentifiersToClients;
	NSMutableDictionary *_environmentsToConnections;
	NSString *_lastNotificationReceivedBundleIdentifier;
}
+ (id)sharedInstance;
- (id)init;
- (id)_allPushRegisteredThirdPartyBundleIDs;
- (id)allAppEnabledTypeValues;
- (id)allSettingsEnabledTypeValues;
- (unsigned)appEnabledTypesForBundleIdentifier:(id)bundleIdentifier;
- (void)calculateTopics;
- (void)connection:(id)connection didReceiveIncomingMessage:(id)message;
- (void)connection:(id)connection didReceivePublicToken:(id)token;
- (void)dealloc;
- (unsigned)getEffectiveEnabledTypesForApplication:(id)application;
- (id)getMessageUserInfoForBundleIdentifier:(id)bundleIdentifier;
- (BOOL)hasRegisteredBundleIdentifiers;
- (BOOL)isSystemwideEnabled;
- (id)lastNotificationReceivedBundleIdentifier;
- (void)noteApplicationFinishedLaunching:(id)launching;
- (void)notePermissionAlertAcceptedTypes:(unsigned)types forBundleIdentifier:(id)bundleIdentifier;
- (void)postSettingsChangedNotificationForBundleIdentifier:(id)bundleIdentifier;
- (void)registerApplication:(id)application forEnvironment:(id)environment withTypes:(unsigned)types;
- (void)run;
- (void)setMessageUserInfo:(id)info forBundleIdentifier:(id)bundleIdentifier;
- (void)setSettingsTypes:(unsigned)types forBundleIdentifier:(id)bundleIdentifier;
- (void)setSystemwideEnabled:(BOOL)enabled;
- (unsigned)settingsEnabledTypesForBundleIdentifier:(id)bundleIdentifier;
- (void)unregisterApplication:(id)application;
@end


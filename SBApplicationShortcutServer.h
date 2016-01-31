/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBApplicationShortcutServer : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue> *_queue;
	id<SBApplicationShortcutServerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBApplicationShortcutServerDelegate> delegate;
+ (id)sharedInstance;
- (id)init;
- (void)_checkEntitlementsForMessage:(id)message withType:(long long)type fromClient:(id)client completionHandler:(id)handler;
- (void)_handleFetchDynamicShortcutItemsMessage:(id)message fromClient:(id)client entitlements:(unsigned)entitlements effectiveBundleIdentifier:(id)identifier;
- (void)_handleUpdateDynamicShortcutItemsMessage:(id)message fromClient:(id)client entitlements:(unsigned)entitlements effectiveBundleIdentifier:(id)identifier;
- (id)_sanitizeShortcutItems:(id)items entitlements:(unsigned)entitlements;
- (void)dealloc;
- (void)noteDidReceiveMessage:(id)note withType:(long long)type fromClient:(id)client;
@end

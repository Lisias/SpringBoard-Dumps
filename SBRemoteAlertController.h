/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBRemoteAlertController : XXUnknownSuperclass <SBRemoteAlertAdapterDelegate> {
	SBSRemoteAlertConfiguration *_configuration;
	unsigned _tokenPort;
	NSObject<OS_dispatch_queue> *_queue;
	id<SBRemoteAlertControllerDelegate> _delegate;
	SBRemoteAlertAdapter *_alert;
	NSMutableArray *_pendedActivations;
	BOOL _active;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (BOOL)isConfiguration:(id)configuration allowedForAuditToken:(id)auditToken;
- (id)init;
- (id)initWithConfiguration:(id)configuration tokenPort:(unsigned)port queue:(id)queue delegate:(id)delegate;
- (void)_queue_setActive:(BOOL)active;
- (void)dealloc;
- (void)queue_activateWithOptions:(id)options;
- (void)queue_invalidate;
- (BOOL)queue_isActive;
- (BOOL)queue_matchesConfiguration:(id)configuration;
- (unsigned)queue_tokenPort;
- (void)remoteAlertAdapter:(id)adapter didTerminateWithError:(id)error;
- (void)remoteAlertAdapterDidActivate:(id)remoteAlertAdapter;
- (void)remoteAlertAdapterDidDeactivate:(id)remoteAlertAdapter;
- (void)remoteAlertAdapterDidRequestDismissal:(id)remoteAlertAdapter;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBRemoteAlertAdapterDelegate <NSObject>
- (void)remoteAlertAdapter:(id)adapter didTerminateWithError:(id)error;
- (void)remoteAlertAdapterDidActivate:(id)remoteAlertAdapter;
- (void)remoteAlertAdapterDidDeactivate:(id)remoteAlertAdapter;
- (void)remoteAlertAdapterDidRequestDismissal:(id)remoteAlertAdapter;
@end


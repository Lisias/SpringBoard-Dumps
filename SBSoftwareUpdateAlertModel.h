/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSoftwareUpdateAlertModel : XXUnknownSuperclass {
	id<SBSoftwareUpdateAlertModelDelegate> _delegate;
	SBSoftwareUpdateStatePersistence *_persistence;
	SUDownload *_updateToInstall;
}
@property(readonly, assign, nonatomic) unsigned alertFlow;
@property(assign, nonatomic) id<SBSoftwareUpdateAlertModelDelegate> delegate;
@property(readonly, retain, nonatomic) NSDate *nextAlertDate;
- (id)init;
- (id)initWithDownload:(id)download autoInstallOperation:(id)operation;
- (unsigned)_initialInstallAlertFlowFromDownload;
- (void)_initializeModelWithDownload:(id)download autoInstallOperation:(id)operation;
- (void)_setDownloadWasQueuedRemotely:(BOOL)remotely;
- (void)_setInstallAlertFlow:(unsigned)flow forReason:(id)reason;
- (void)_setNextAlertDate:(id)date;
- (void)_setUpdateToInstall:(id)install;
- (void)autoInstallOperationWasCancelledOrExpired;
- (void)dealloc;
- (void)didDownloadUpdate:(id)update;
- (void)reset;
- (void)setDownloadWasQueuedRemotely:(BOOL)remotely;
- (void)setInstallAlertFireDate:(id)date;
- (void)userSelectedRemindMeLater;
- (void)willInstallWithType:(unsigned)type;
@end


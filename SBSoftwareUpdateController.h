/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SUNetworkObserver.h"
#import "SUManagerClientDelegate.h"

@class SUManagerClient, SUDownload;

@interface SBSoftwareUpdateController : XXUnknownSuperclass <SUManagerClientDelegate, SUNetworkObserver> {
	SUManagerClient *_client;
	SUDownload *_updateToInstall;
	int _currentNetworkType;
	int _iCloudRestoreToken;
	BOOL _showOrScheduleForcedInstallAlertAfterNextUnlock;
	BOOL _scheduleForcedInstallAlertAfterNextUnlock;
	BOOL _scheduleForcedInstallAlertWhenAble;
}
+ (id)sharedInstance;
+ (id)stringFromReasons:(int)reasons;
- (id)init;
- (void)_autoDownloadUnknownToUserFailedForDescriptor:(id)descriptor error:(id)error;
- (void)_callCountChanged:(id)changed;
- (void)_clearLegacyBadgePreferenceIfNecessary;
- (BOOL)_forceInstallAfterDownload;
- (void)_handleInstallError:(id)error;
- (void)_iCloudStatusChanged;
- (void)_iTunesRestoreStateChanged:(id)changed;
- (BOOL)_isSettingsActive;
- (BOOL)_isSettingsBadgedForSoftwareUpdate;
- (void)_isUpdateInstallable:(id)installable;
- (void)_lockStateChanged:(id)changed;
- (void)_migrateForNewOSVersionIfNecessary;
- (void)_registerForInstallRelatedNotifications;
- (void)_resetAndCancelExistingScheduledForcedInstallAlerts;
- (void)_resetState;
- (void)_scheduleForcedInstallRepeatAlert:(double)alert;
- (void)_setUpdateToInstall:(id)install;
- (void)_showForcedInstallAlert;
- (void)_showOrScheduleNextForcedInstallAlert;
- (void)_showOrScheduleNextForcedInstallAlertWithReasons:(int)reasons;
- (void)_syncDidEnd:(id)_sync;
- (void)_syncWillStart:(id)_sync;
- (void)_toggleSettingsBadge:(BOOL)badge;
- (void)_unregisterForInstallRelatedNotifications;
- (void)client:(id)client automaticDownloadDidFailToStartForNewUpdateAvailable:(id)automaticDownload withError:(id)error;
- (void)client:(id)client downloadDidFail:(id)download withError:(id)error;
- (void)client:(id)client downloadDidFinish:(id)download;
- (void)client:(id)client downloadDidStart:(id)download;
- (void)client:(id)client downloadWasInvalidatedForNewUpdateAvailable:(id)newUpdateAvailable;
- (void)client:(id)client installDidFail:(id)install withError:(id)error;
- (void)client:(id)client installDidFinish:(id)install;
- (void)client:(id)client installDidStart:(id)install;
- (void)dealloc;
- (void)delayForcedInstallUntilAble;
- (void)delayForcedInstallWithDefaultDurationAfterNextUnlock;
- (void)delayForcedInstallWithDefaultDurationFromNow;
- (void)installUpdate;
- (void)isDownloading:(id)downloading;
@end


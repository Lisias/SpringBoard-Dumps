/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLeafIcon.h"


@interface SBDownloadingIcon : SBLeafIcon {
	NSString *_leafIdentifier;
	NSString *_applicationBundleID;
	SSDownload *_download;
	SBDownloadingProgressBar *_progressView;
	float _progress;
	BOOL _installing;
	BOOL _wasUninstalledByUser;
	SSDownloadStatus *_lastStatus;
}
+ (id)leafIdentifierForDownload:(id)download;
+ (id)leafIdentifierForDownloadUniqueID:(id)downloadUniqueID;
- (id)initWithDownload:(id)download;
- (id)initWithLeafIdentifier:(id)leafIdentifier;
- (id)_realDisplayName;
- (void)_showAlertForError:(id)error;
- (void)_thumbnailAvailableNotification:(id)notification;
- (BOOL)allowsUninstall;
- (id)applicationBundleID;
- (void)completeUninstall;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)download;
- (id)generateIconImage:(int)image;
- (id)identifierForCorrespondingApplicationIcon;
- (void)launch;
- (id)leafIdentifier;
- (float)progress;
- (void)reloadForStatusChange;
- (void)remove;
- (void)retry;
- (void)setApplicationBundleID:(id)anId;
- (void)setDisplayedIconImage:(id)image;
- (void)setDownload:(id)download;
- (void)setGhostly:(BOOL)ghostly requester:(int)requester;
- (void)setLeafIdentifier:(id)identifier;
- (void)setUninstalledByUser:(BOOL)user;
- (BOOL)shouldEllipsizeLabel;
- (id)uninstallAlertBody;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
- (BOOL)uninstalledByUser;
- (void)updateDisplayName;
@end


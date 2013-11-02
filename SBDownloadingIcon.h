/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIcon.h"

@class NSString, ISDownload, SBDownloadingProgressBar;

@interface SBDownloadingIcon : SBIcon {
	NSString *_displayID;
	ISDownload *_download;
	SBDownloadingProgressBar *_progressView;
	float _progress;
	BOOL _installing;
}
+ (id)displayIdentifierForDownload:(id)download;
- (id)initWithDisplayIdentifier:(id)displayIdentifier;
- (id)initWithDownload:(id)download;
- (void)_showAlertForError:(id)error;
- (BOOL)allowsCloseBox;
- (void)completeUninstall;
- (void)dealloc;
- (id)displayIdentifier;
- (id)displayName;
- (id)download;
- (void)download:(id)download encounteredError:(id)error;
- (void)downloadStatusChanged:(id)changed;
- (id)icon;
- (void)launch;
- (void)remove;
- (void)resetIconImage;
- (void)retry;
- (void)setDisplayIdentifier:(id)identifier;
- (void)setDisplayedIcon:(id)icon;
- (void)setDownload:(id)download;
- (id)tags;
- (id)uninstallAlertBody;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
- (void)updateDisplayName;
@end


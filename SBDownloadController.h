/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SSDownloadQueueObserver.h"


@interface SBDownloadController : XXUnknownSuperclass <SSDownloadQueueObserver> {
	SSDownloadQueue *_downloadQueue;
	NSMutableSet *_pendingDownloadRemovals;
	NSMutableSet *_pendingDownloadIconsToSwapForApplicationIcons;
	NSMutableArray *_downloads;
	unsigned _downloadLoadCount;
}
+ (id)sharedInstance;
- (id)init;
- (void)_delayedDownloadQueueChange;
- (void)_downloadsEnded;
- (void)_finishDownload:(id)download;
- (void)_processDownloadQueueChangedWithPendingRemovals;
- (void)_showDownloadQueueError;
- (BOOL)bundledIdentifierIsBeingDownloaded:(id)downloaded;
- (void)cancelDownload:(id)download;
- (BOOL)checkQueue;
- (id)currentDownloads;
- (void)dealloc;
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;
- (void)downloadQueue:(id)queue downloadStatusChangedAtIndex:(int)index;
- (void)downloadQueueError:(id)error;
- (void)downloadQueueNetworkUsageChanged:(id)changed;
- (BOOL)moveDownloadToFrontOfQueue:(id)queue;
@end


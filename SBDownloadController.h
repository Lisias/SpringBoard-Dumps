/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SSDownloadQueueObserver.h"

@class SSDownloadQueue;

@interface SBDownloadController : NSObject <SSDownloadQueueObserver> {
	SSDownloadQueue *_downloadQueue;
}
+ (id)sharedInstance;
- (id)init;
- (void)_showDownloadQueueError;
- (BOOL)checkQueue;
- (id)currentDownloads;
- (void)dealloc;
- (id)downloadQueue;
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;
- (void)downloadQueue:(id)queue downloadStatusChangedAtIndex:(int)index;
- (void)downloadQueueError:(id)error;
- (void)downloadQueueNetworkUsageChanged:(id)changed;
@end

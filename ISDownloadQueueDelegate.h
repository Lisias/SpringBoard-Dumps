/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ISDownloadQueueDelegate <NSObject>
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals disappearances:(id)disappearances;
@optional
- (void)downloadQueue:(id)queue downloadStatesChangedAtIndexes:(id)indexes;
- (void)downloadQueueError:(id)error;
- (void)downloadQueuePreOrdersChanged:(id)changed;
@end


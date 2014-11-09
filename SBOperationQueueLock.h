/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface SBOperationQueueLock : XXUnknownSuperclass {
	SBOperationQueue *_queue;
	NSString *_reason;
	BOOL _released;
}
@property(readonly, assign, nonatomic) NSString *reason;
- (id)initWithReason:(id)reason operationQueue:(id)queue;
- (void)_releaseIfNecessary;
- (void)dealloc;
- (void)releaseLock;
@end


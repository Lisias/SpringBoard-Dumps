/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, SBOperation, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBOperationQueue : XXUnknownSuperclass {
	NSString *_name;
	NSMutableArray *_operationQueue;
	NSHashTable *_operationLocks;
	SBOperation *_executingOperation;
}
@property(retain, nonatomic) SBOperation *executingOperation;
- (id)initWithName:(id)name;
- (void)_addOperationQueueLock:(id)lock;
- (void)_executeOrPendOperations:(id)operations;
- (void)_processNextOperationIfNecessary;
- (void)_removeOperationQueueLock:(id)lock;
- (id)acquireLockForReason:(id)reason;
- (void)dealloc;
- (id)description;
- (void)executeOrAppendOperation:(id)operation;
- (BOOL)isLocked;
@end


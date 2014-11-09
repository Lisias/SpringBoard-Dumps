/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FBSynchronizedTransactionDelegate <NSObject>
- (void)synchronizedTransaction:(id)transaction didCommitSynchronizedTransactions:(id)transactions;
- (void)synchronizedTransaction:(id)transaction willCommitSynchronizedTransactions:(id)transactions;
- (void)synchronizedTransactionReadyToCommit:(id)commit;
@end


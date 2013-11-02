/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class CPDistributedNotificationCenter, NSMutableArray;

@interface SBProcessAssertionManager : XXUnknownSuperclass {
	NSMutableArray *_clients;
	CPDistributedNotificationCenter *_notificationCenter;
	opaque_pthread_mutex_t _clientMutex;
}
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (id)_assertionForPort:(unsigned)port;
- (void)_relinquishAssertion:(id)assertion;
- (BOOL)acquireAssertionForProcessID:(int)processID ownerProcessID:(int)anId withClientPort:(unsigned)clientPort flags:(unsigned)flags reason:(unsigned)reason identifier:(id)identifier;
- (void)dealloc;
- (void)processExited:(id)exited;
- (void)setAssertionFlagsForPort:(unsigned)port flags:(unsigned)flags;
@end


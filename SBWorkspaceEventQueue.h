/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBWorkspaceEvent, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBWorkspaceEventQueue : XXUnknownSuperclass {
	unsigned _lockCount;
	NSMutableArray *_eventQueue;
	SBWorkspaceEvent *_executingEvent;
}
@property(retain, nonatomic) SBWorkspaceEvent *executingEvent;
+ (id)sharedInstance;
- (id)init;
- (void)_bumpLockAssertionCount:(int)count;
- (void)_executeOrPendEvents:(id)events position:(int)position;
- (void)_processNextEvent;
- (void)cancelEventsWithName:(id)name;
- (void)dealloc;
- (id)description;
- (void)executeOrAppendEvent:(id)event;
- (void)executeOrPrependEvent:(id)event;
- (void)executeOrPrependEvents:(id)events;
- (BOOL)hasEventWithName:(id)name;
- (BOOL)hasEventWithPrefix:(id)prefix;
- (BOOL)isLocked;
@end


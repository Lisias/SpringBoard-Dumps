/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBWorkspaceEventQueue, NSString;

__attribute__((visibility("hidden")))
@interface SBWorkspaceEventQueueLockAssertion : XXUnknownSuperclass {
	SBWorkspaceEventQueue *_eventQueue;
	NSString *_reason;
}
- (id)initWithWorkspaceEventQueue:(id)workspaceEventQueue reason:(id)reason;
- (void)dealloc;
- (id)description;
- (id)reason;
@end

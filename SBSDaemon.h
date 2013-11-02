/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface SBSDaemon : XXUnknownSuperclass {
	dispatch_source_s *_dispatchSource;
	NSMutableDictionary *_daemonRequests;
	int _pid;
}
- (id)initWithPid:(int)pid queue:(dispatch_queue_s *)queue;
- (void)_handleCancelation;
- (dispatch_source_s *)_newDispatchSourceForPid:(int)pid queue:(dispatch_queue_s *)queue;
- (void)addRequest:(id)request forKey:(id)key;
- (void)dealloc;
- (id)description;
- (int)pid;
- (void)removeRequestForKey:(id)key;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface SBReverseCountedSemaphore : XXUnknownSuperclass {
	NSObject<OS_dispatch_group> *_group;
}
- (id)init;
- (void)dealloc;
- (void)decrement;
- (void)increment;
- (void)wait;
@end


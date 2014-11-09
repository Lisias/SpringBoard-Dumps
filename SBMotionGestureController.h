/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, CMGestureManager;

__attribute__((visibility("hidden")))
@interface SBMotionGestureController : XXUnknownSuperclass {
	NSMutableDictionary *_observersByPriority;
	CMGestureManager *_motionGestureManager;
}
+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (void)_addGestureManager;
- (void)_addGestureObserver:(id)observer withPriority:(unsigned)priority;
- (void)_enumerateObserversByPriority:(id)priority;
- (BOOL)_hasObservers;
- (id)_highestPriorityObservers;
- (void)_notifyObserversOfGesture:(int)gesture;
- (id)_observersForPriority:(unsigned)priority;
- (void)_removeGestureManager;
- (void)_removeGestureObserver:(id)observer;
- (void)_updateGestureManager;
- (void)addGestureObserver:(id)observer;
- (void)addGestureObserver:(id)observer withPriority:(unsigned)priority;
- (void)dealloc;
- (void)removeGestureObserver:(id)observer;
@end


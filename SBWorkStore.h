/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBWorkStore : XXUnknownSuperclass {
	NSMutableDictionary *_workItemsPerKey;
	NSMutableArray *_keysWithWork;
	NSMutableArray *_observers;
	NSObject<OS_dispatch_queue> *_dispatchQueue;
	unsigned _maxWorkPerKey;
	NSMutableDictionary *_workExpirationPeriods;
	double _defaultWorkExpirationPeriod;
}
@property(assign, nonatomic) double defaultWorkExpirationPeriod;
@property(readonly, assign, nonatomic) NSArray *keysWithWork;
@property(readonly, assign, nonatomic) unsigned maxWorkPerKey;
@property(readonly, assign, nonatomic) NSMutableArray *observers;
@property(readonly, assign, nonatomic) NSMutableDictionary *workItemsPerKey;
- (id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned)workItemsPerKey;
- (void)_notifyObserversWorkDidChange;
- (void)_queue_expireWorkForKey:(id)key;
- (void)addObserver:(id)observer;
- (void)addWorkItem:(id)item forKey:(id)key;
- (void)dealloc;
- (id)dequeueWorkForKey:(id)key;
- (id)description;
- (void)purgeWorkForKey:(id)key;
- (void)removeObserver:(id)observer;
- (void)setWorkExpirationPeriod:(double)period forKey:(id)key;
@end

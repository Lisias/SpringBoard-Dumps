/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBWorkStoreObserver.h"

@class SBWorkStore, NSObject, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBBackgroundMultitaskingManager : XXUnknownSuperclass <SBWorkStoreObserver> {
	NSMutableDictionary *_appToBackgroundTasks;
	NSMutableDictionary *_backgroundFetchTaskValueToWatchdoggableCompletion;
	NSObject<OS_dispatch_queue> *_queue;
	SBWorkStore *_pendingWorkStore;
	double _watchdogTimeout;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) double watchdogTimeout;
+ (id)sharedInstance;
+ (BOOL)shouldFakeAdoption;
- (id)init;
- (void)_appFinishedBackgroundUpdating:(id)updating sequenceNumber:(int)number result:(unsigned)result;
- (BOOL)_appIsBeingDebugged:(id)debugged;
- (void)_appStateDidChange:(id)_appState;
- (void)_backgroundTaskFinished:(id)finished forApplication:(id)application;
- (void)_invalidateBackgroundTasksForApplication:(id)application;
- (BOOL)_launchAppForUpdating:(id)updating trigger:(unsigned)trigger pushNotificationUserInfo:(id)info withWatchdoggableCompletion:(id)watchdoggableCompletion;
- (id)_opportunisticallyUpdateApplications:(id)applications trigger:(unsigned)trigger;
- (void)_performPendingWorkForBundleID:(id)bundleID;
- (void)_startBackgroundFetchTaskForApplication:(id)application trigger:(unsigned)trigger sequenceNumber:(int)number withWatchdoggableCompletion:(id)watchdoggableCompletion;
- (void)_watchdogCompletionForBackgroundFetchTaskValue:(id)backgroundFetchTaskValue;
- (void)application:(id)application didSetMinimumFetchInterval:(double)interval;
- (void)handlePushNotificationFromApplication:(id)application userInfo:(id)info priority:(int)priority completion:(id)completion;
- (int)nextSequenceNumber;
- (void)queue_appFinishedBackgroundUpdating:(id)updating sequenceNumber:(int)number result:(unsigned)result;
- (void)queue_backgroundTaskFinished:(id)finished forApplication:(id)application;
- (void)queue_fireWatchdoggableCompletionForBackgroundFetchTaskValue:(id)backgroundFetchTaskValue;
- (void)queue_invalidateBackgroundTasksForApplication:(id)application;
- (void)queue_startBackgroundFetchTaskForApplication:(id)application trigger:(unsigned)trigger sequenceNumber:(int)number withWatchdoggableCompletion:(id)watchdoggableCompletion;
- (void)workDidChange:(id)work;
@end


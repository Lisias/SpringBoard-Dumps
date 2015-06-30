/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBApplicationPersistence : XXUnknownSuperclass {
	NSMutableDictionary *_state;
	BOOL _dirty;
	dispatch_queue_s *_stateQueue;
	dispatch_queue_s *_writeQueue;
}
+ (id)_statePath;
+ (void)migrateSystemLocalNotifications;
+ (id)sharedInstance;
- (id)init;
- (void)_flushSynchronously;
- (void)_markDirty;
- (id)allBundleOrDisplayIdentifiersWithState;
- (id)archivedObjectForKey:(id)key bundleOrDisplayIdentifier:(id)identifier ofType:(Class)type;
- (void)flushSynchronously;
- (void)purgeKeysForBundleAndDisplayIdentifiersOtherThan:(id)bundleAndDisplayIdentifiersOtherThan;
- (void)setArchivedObject:(id)object forKey:(id)key bundleOrDisplayIdentifier:(id)identifier;
- (void)setValue:(id)value forKey:(id)key bundleOrDisplayIdentifier:(id)identifier;
- (id)valueForKey:(id)key bundleOrDisplayIdentifier:(id)identifier ofType:(Class)type;
@end


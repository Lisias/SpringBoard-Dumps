/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBAppSwitcherModel : XXUnknownSuperclass {
	NSMutableArray *_recentDisplayIdentifiers;
}
+ (id)sharedInstance;
- (id)init;
- (id)_recentsFromPrefs;
- (void)_saveRecents;
- (void)addToFront:(id)front;
- (id)appAtIndex:(unsigned)index;
- (void)appsRemoved:(id)removed added:(id)added;
- (unsigned)count;
- (void)dealloc;
- (id)identifierAtIndex:(unsigned)index;
- (id)identifiers;
- (void)remove:(id)remove;
- (id)snapshot;
@end


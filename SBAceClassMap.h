/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBAceClassMap : XXUnknownSuperclass {
	NSMutableDictionary *_classMap;
}
- (id)init;
- (void)addBundle:(id)bundle objCClassName:(id)name forAceClass:(id)aceClass inGroup:(id)group;
- (id)bundleForAceClass:(id)aceClass inGroup:(id)group;
- (id)classNameForAceClass:(id)aceClass inGroup:(id)group;
- (void)dealloc;
- (id)description;
- (id)entryForAceClass:(id)aceClass inGroup:(id)group;
@end


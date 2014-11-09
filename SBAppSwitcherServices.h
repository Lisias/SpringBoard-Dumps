/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherServices : XXUnknownSuperclass <NSCopying> {
	NSMutableArray *_services;
}
@property(readonly, assign, nonatomic) NSMutableArray *services;
- (id)initWithServices:(id)services zone:(NSZone *)zone;
- (void)addService:(id)service;
- (id)copyWithZone:(NSZone *)zone;
- (unsigned)count;
- (void)dealloc;
- (void)removeService:(id)service;
- (id)serviceAtIndex:(unsigned)index;
- (id)serviceBundleIdentifiers;
- (id)serviceForBundleIdentifier:(id)bundleIdentifier;
- (id)serviceForIdentifier:(id)identifier;
@end


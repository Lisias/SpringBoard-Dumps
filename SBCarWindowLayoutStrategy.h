/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWindowLayoutStrategy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBCarWindowLayoutStrategy : XXUnknownSuperclass <SBWindowLayoutStrategy> {
	unsigned _layout;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (UIEdgeInsets)edgeInsetsForStatusBar;
+ (id)strategyWithLayout:(unsigned)layout;
- (id)initWithLayout:(unsigned)layout;
- (BOOL)_isLayoutBoundsOnly;
- (CGRect)frameForWindow:(id)window;
- (int)jailBehavior;
@end


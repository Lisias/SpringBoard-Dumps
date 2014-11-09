/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBWindowContextManagerObserver.h"

@class CALayer, NSSet, UIScreen, NSMutableOrderedSet, SBWindowContextManager, SBWindowContextHostViewContentLayerDelegate, NSMutableSet, NSMutableArray;
@protocol SBWindowContextHostViewDelegate;

__attribute__((visibility("hidden")))
@interface SBWindowContextHostView : XXUnknownSuperclass <SBWindowContextManagerObserver> {
	UIScreen *_screen;
	CALayer *_contentLayer;
	id<SBWindowContextHostViewDelegate> _delegate;
	SBWindowContextManager *_contextManager;
	SBWindowContextHostViewContentLayerDelegate *_contentLayerDelegate;
	int _jailBehavior;
	NSMutableSet *_hiddenContexts;
	NSMutableOrderedSet *_contexts;
	NSMutableArray *_layerHosts;
}
@property(retain, nonatomic) SBWindowContextManager *contextManager;
@property(assign, nonatomic) id<SBWindowContextHostViewDelegate> delegate;
@property(copy, nonatomic) NSSet *hiddenContexts;
@property(readonly, assign, nonatomic) UIScreen *screen;
- (id)init;
- (id)initWithScreen:(id)screen jailBehavior:(int)behavior;
- (void)_adjustLayerFrameAndTransform:(id)transform;
- (void)_noteHostingStatusChanged;
- (CGRect)contentFrame;
- (void)dealloc;
- (id)description;
- (BOOL)hasContent;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (BOOL)isHosting;
- (id)window;
- (void)windowContextManager:(id)manager didRepositionContext:(id)context from:(unsigned)from to:(unsigned)to forScreen:(id)screen;
@end

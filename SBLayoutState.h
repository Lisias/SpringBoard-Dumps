/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLayoutState : XXUnknownSuperclass <SBLayoutContext, BSDescriptionProviding> {
	NSSet *_elements;
	int _interfaceOrientation;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSSet *elements;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int interfaceOrientation;
@property(readonly, assign) Class superclass;
+ (int)_defaultOrientation;
+ (id)initialLayoutState;
- (id)init;
- (id)_initWithElements:(id)elements;
- (id)_initWithElements:(id)elements interfaceOrientation:(int)orientation;
- (id)_layoutStateForTransitionContext:(id)transitionContext;
- (id)_stateWithElements:(id)elements interfaceOrientation:(int)orientation;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)multilinePrefix;
- (id)descriptionWithMultilinePrefix:(id)multilinePrefix;
- (id)elementWithIdentifier:(id)identifier;
- (id)elementWithRole:(int)role;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToLayoutState:(id)layoutState;
- (BOOL)layoutContainsRole:(int)role;
- (id)layoutStateForTransitionContext:(id)transitionContext;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@end

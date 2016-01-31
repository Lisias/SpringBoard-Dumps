/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface _SBNotificationCenterTransitionContext : XXUnknownSuperclass {
	BOOL _presenting;
	BOOL _interactive;
	BOOL _fromCurrentState;
	id _stepper;
	id _setupPrelude;
	id _setupPostlude;
	id _animationPrelude;
	id _presentationBegunHandler;
	id _animationPostlude;
	id _pendingTransition;
	id _completion;
	CGPoint _initialTouchLocation;
}
@property(copy, nonatomic) id animationPostlude;
@property(copy, nonatomic) id animationPrelude;
@property(copy, nonatomic) id completion;
@property(assign, nonatomic, getter=isFromCurrentState) BOOL fromCurrentState;
@property(assign, nonatomic) CGPoint initialTouchLocation;
@property(assign, nonatomic, getter=isInteractive) BOOL interactive;
@property(copy, nonatomic) id pendingTransition;
@property(copy, nonatomic) id presentationBegunHandler;
@property(assign, nonatomic, getter=isPresenting) BOOL presenting;
@property(copy, nonatomic) id setupPostlude;
@property(copy, nonatomic) id setupPrelude;
@property(copy, nonatomic) id stepper;
- (void)dealloc;
@end

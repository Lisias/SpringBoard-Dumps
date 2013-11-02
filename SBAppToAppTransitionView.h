/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class CATransformLayer, CALayer, UIView, SBApplication;

@interface SBAppToAppTransitionView : XXUnknownSuperclass {
	id _delegate;
	SBApplication *_toApplication;
	CATransformLayer *_transformLayer;
	CALayer *_startLayer;
	CALayer *_stopLayer;
	UIView *_fromView;
	UIView *_toView;
	BOOL _animating;
	BOOL _workspaceIsReadyForAnimationCleanup;
	int _orientation;
}
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) int orientation;
@property(retain, nonatomic) SBApplication *toApp;
- (id)initWithFrame:(CGRect)frame;
- (float)_rotationRadians;
- (id)_rotationValueFunction;
- (void)_transitionBegun:(double)begun;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)beginTransition;
- (void)dealloc;
- (void)endTransition;
- (void)noteWorkspaceIsReadyForAnimationCleanupWithActivatingApp:(id)activatingApp;
- (void)setFromView:(id)view;
- (void)setToView:(id)view;
@end


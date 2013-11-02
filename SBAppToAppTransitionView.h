/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, CALayer, SBApplication, NSTimer;

@interface SBAppToAppTransitionView : XXUnknownSuperclass {
	id _delegate;
	SBApplication *_fromApplication;
	SBApplication *_toApplication;
	CALayer *_startLayer;
	CALayer *_stopLayer;
	UIView *_fromView;
	UIView *_toView;
	BOOL _animating;
	int _orientation;
	NSTimer *_timer;
}
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) SBApplication *fromApp;
@property(assign, nonatomic) int orientation;
@property(retain, nonatomic) SBApplication *toApp;
- (id)initWithFrame:(CGRect)frame;
- (void)_animationDidStop:(id)_animation;
- (void)_beginTransition;
- (float)_rotationRadians;
- (id)_rotationValueFunction;
- (void)_transitionBegun:(double)begun;
- (void)beginTransition;
- (void)dealloc;
- (BOOL)isAnimating;
- (void)setFromView:(id)view;
- (void)setToView:(id)view;
@end


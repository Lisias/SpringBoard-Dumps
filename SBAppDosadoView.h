/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>


@interface SBAppDosadoView : UIView {
	id _delegate;
	SBApplication *_fromApplication;
	SBApplication *_toApplication;
	CALayer *_startLayer;
	CALayer *_stopLayer;
	BOOL _animating;
	NSTimer *_timer;
}
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) SBApplication *fromApp;
@property(retain, nonatomic) SBApplication *toApp;
- (id)initWithFrame:(CGRect)frame;
- (void)_animationDidStop:(id)_animation;
- (void)beginTransition;
- (void)dealloc;
- (BOOL)isAnimating;
- (void)setFromImage:(id)image;
- (void)setToImage:(id)image;
@end


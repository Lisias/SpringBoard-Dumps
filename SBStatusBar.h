/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBStatusBar : UIControl {
	int _mode;
	int _orientation;
	SBStatusBarContentsView *_contentsView;
	SBStatusBarInCallView *_inCallView;
	SBStatusWindow *_statusWindow;
	UIView *_airplaneView;
	UIView *_glowView;
	UIView *_glassView;
	UIView *_dimmerView;
	unsigned _animate : 1;
	unsigned _animating : 1;
	unsigned _isPressed : 1;
	unsigned _airplaneMode : 1;
}
- (id)initWithMode:(int)mode orientation:(int)orientation;
- (id)airplaneView;
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;
- (id)contentsView;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (BOOL)isDimmed;
- (int)mode;
- (void)mouseDown:(GSEventRef)down;
- (void)mouseDragged:(GSEventRef)dragged;
- (void)mouseUp:(GSEventRef)up;
- (int)orientation;
- (void)setAirplaneModeIsEnabled:(BOOL)enabled animate:(BOOL)animate;
- (void)setAirplaneModeIsEnabled:(BOOL)enabled animate:(BOOL)animate ignoreAirPortPower:(BOOL)power;
- (void)setDimmerOverlayColor:(id)color;
- (void)setFrame:(CGRect)frame;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setStatusWindow:(id)window;
- (void)showDimmerOverlay:(BOOL)overlay;
- (void)start;
- (void)startGlowAnimation;
- (void)statusBarClicked;
- (id)statusWindow;
- (void)stop;
- (void)stopGlowAnimation;
@end

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
	SBStatusBarDoubleHeightView *_doubleHeightView;
	SBStatusWindow *_statusWindow;
	UIView *_airplaneView;
	UIView *_baseDoubleHeightColorView;
	UIView *_glowDoubleheightColorView;
	UIView *_dimmerView;
	int _doubleHeightMode;
	unsigned _animating : 1;
	unsigned _glowAnimationEnabled : 1;
	unsigned _isPressed : 1;
	unsigned _airplaneMode : 1;
}
@property(assign, nonatomic, getter=isGlowAnimationEnabled) BOOL glowAnimationEnabled;
- (id)initWithMode:(int)mode orientation:(int)orientation;
- (void)_setBaseImage:(id)image;
- (void)_setGlowImage:(id)image;
- (id)airplaneView;
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;
- (id)contentsView;
- (void)dealloc;
- (id)description;
- (CGAffineTransform)distantStatusWindowTransform;
- (void)drawRect:(CGRect)rect;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (BOOL)isDimmed;
- (int)mode;
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
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)updateDoubleHeightView;
@end


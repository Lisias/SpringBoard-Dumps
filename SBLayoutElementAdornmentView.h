/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBLayoutElementAdornmentView : XXUnknownSuperclass {
	SBSceneDimmingView *_dimmingView;
	int _dimmingLevel;
	int _sideSwitcherGrabberStyle;
	SBChevronView *_sideSwitcherGrabberView;
	SBLayoutElementPinResizeGrabberView *_pinResizeGrabberView;
	float _pinResizeGrabberHorizontalOffset;
	float _pinResizeGrabberVerticalOffset;
	BOOL _sideSwitcherGrabberPressed;
}
@property(assign, nonatomic) int dimmingLevel;
@property(readonly, retain, nonatomic) SBSceneDimmingView *dimmingView;
@property(readonly, assign, nonatomic) CGRect pinResizeGrabberFrame;
@property(assign, nonatomic) float pinResizeGrabberHorizontalOffset;
@property(assign, nonatomic) float pinResizeGrabberVerticalOffset;
@property(readonly, retain, nonatomic) SBLayoutElementPinResizeGrabberView *pinResizeGrabberView;
@property(assign, nonatomic, getter=isSideSwitcherGrabberPressed) BOOL sideSwitcherGrabberPressed;
@property(assign, nonatomic) int sideSwitcherGrabberStyle;
@property(assign, nonatomic) BOOL wantsPinResizeGrabber;
+ (id)sideSwitcherGrabberView;
- (id)initWithFrame:(CGRect)frame;
- (CGRect)_pinResizeGrabberHitTestFrame;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (void)_updateGrabberColorAndVisibility;
- (void)dealloc;
- (void)didAddSubview:(id)subview;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
- (void)setDimmingLevel:(int)level withPercent:(float)percent;
- (void)setWantsPinResizeGrabber:(BOOL)grabber withPercent:(float)percent;
- (void)viewDidMoveToSuperview;
@end

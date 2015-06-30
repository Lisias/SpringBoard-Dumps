/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBStretchView : XXUnknownSuperclass {
	id m_delegate;
	int m_anchor;
	CGPoint m_point;
	UIView *m_baseView;
	UIView *m_stretchedView;
	float m_stretchAmount;
	float m_initialBounceStretchAmount;
	UIView *m_stretchContainer;
	NSMutableArray *m_stretchViews;
	CADisplayLink *m_displayLink;
	SBHarmonicOscillator *m_oscillator;
	double m_animationTimestamp;
	float m_amplitude;
	BOOL m_stretching;
}
@property(assign, nonatomic) int anchor;
@property(assign, nonatomic) id delegate;
@property(readonly, assign, nonatomic) float stretchAmount;
@property(readonly, assign, nonatomic) UIView *stretchedView;
@property(readonly, assign, nonatomic) BOOL stretching;
+ (float)maxBounceStretchAmount;
- (id)initWithFrame:(CGRect)frame view:(id)view;
- (void)addStretchColumnViews;
- (void)beginStretching;
- (void)bounce;
- (void)dealloc;
- (void)endAnimationFinished;
- (void)endStretching;
- (void)endStretchingAnimated:(BOOL)animated;
- (void)setAmplitude:(float)amplitude;
- (void)setStretchAmount:(float)amount;
- (void)updateBounce:(id)bounce;
- (void)updateEndStretching:(id)stretching;
- (void)updateStretching:(float)stretching;
@end


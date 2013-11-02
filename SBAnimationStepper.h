/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CADisplayLink, NSArray, UIView;

@interface SBAnimationStepper : XXUnknownSuperclass {
	id m_delegate;
	UIView *m_view;
	NSArray *m_animatingSubviews;
	double m_duration;
	float m_percentage;
	CADisplayLink *m_displayLink;
	double m_finishBackwardTimestamp;
	double m_finishBackwardDuration;
	float m_finishBackwardPercentage;
}
@property(copy, nonatomic) NSArray *animatingSubviews;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) double duration;
@property(assign, nonatomic) float percentage;
@property(retain, nonatomic) UIView *view;
- (id)init;
- (void)dealloc;
- (void)finishBackwardToStart;
- (void)finishForwardToEnd;
- (void)stepAnimationsInView:(id)view animatingSubviews:(id)subviews duration:(double)duration;
- (void)updateFinishBackwardToStart:(id)start;
@end


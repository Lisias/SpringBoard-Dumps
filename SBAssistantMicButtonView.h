/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@protocol SBAssistantMicButtonProtocol;

@interface SBAssistantMicButtonView : XXUnknownSuperclass {
	id<SBAssistantMicButtonProtocol> _delegate;
	CALayer *_pressedImageLayer;
	CALayer *_micImageLayer;
	CALayer *_animatingLayer;
	CALayer *_fullRingLayer;
	int _mode;
	int _phase;
	CADisplayLink *_displayLink;
	float _runningPowerLevels[5];
	unsigned _powerPointer;
}
@property(assign, nonatomic) id<SBAssistantMicButtonProtocol> delegate;
@property(assign, nonatomic) int mode;
- (id)initWithFrame:(CGRect)frame;
- (float)_adjustedDuration:(float)duration;
- (double)_animationInterval;
- (id)_beginningKeyFrameAnimation;
- (void)_clearDisplayLink;
- (id)_currentMicPowerImage;
- (float)_currentMicPowerLevel;
- (void)_displayLinkCallback:(id)callback;
- (id)_emptyMicImage;
- (id)_fullMicImage;
- (void)_handleBeginning;
- (void)_handleListening;
- (void)_handleListeningBegin;
- (void)_handleListeningEnd;
- (void)_handleListeningStart;
- (void)_handleThinkingBegin;
- (void)_handleThinkingEnd;
- (BOOL)_isSuitableStoppingPhase:(int)phase;
- (id)_keyframeAnimationForCGImages:(id)cgimages duration:(double)duration;
- (id)_listeningBeginKeyFrameAnimation;
- (id)_listeningEndKeyFrameAnimation;
- (id)_micFullImageForPower:(float)power;
- (id)_micPowerImageForPower:(float)power;
- (float)_powerLevelForMicPower:(float)micPower;
- (void)_removeAnimationsAndClearLayers;
- (void)_reset;
- (id)_thinkingBeginKeyFrameAnimation;
- (id)_thinkingBeginRingKeyFrameAnimation;
- (id)_thinkingEndFlashAnimation;
- (id)_thinkingEndRingAnimationFromAngle:(float)angle;
- (id)_thinkingEndRingAnimationKeyframe;
- (id)_thinkingMicAnimation;
- (id)_thinkingRingAnimation;
- (float)_updateMedianWithNewValue:(float)newValue;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (CGSize)sizeThatFits:(CGSize)fits;
@end


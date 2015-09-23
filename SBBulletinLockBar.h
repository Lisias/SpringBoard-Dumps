/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBBulletinLockBar : XXUnknownSuperclass {
}
- (id)initWithFrame:(CGRect)frame knobImage:(id)image;
- (void)_adjustLabelOrigin;
- (float)_calcKnobYOffset;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;
- (void)dealloc;
- (float)defaultWellWidth;
- (void)hideKnob;
- (void)knobDragged:(float)dragged;
- (float)knobTrackInsetLeft;
- (float)knobTrackInsetRight;
- (void)setAlpha:(float)alpha;
- (void)setWellWidth:(float)width;
- (void)showKnob;
- (CGSize)sizeThatFits:(CGSize)fits;
- (BOOL)usesBackgroundImage;
- (id)wellImageName;
@end


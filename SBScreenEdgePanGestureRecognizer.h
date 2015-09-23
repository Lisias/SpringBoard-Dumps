/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBScreenEdgePanGestureRecognizer : XXUnknownSuperclass {
	BOOL _shouldUseGrapeFlags;
	float _grabberActiveZoneWidth;
}
@property(assign, nonatomic) id<SBSystemGestureRecognizerDelegate> delegate;
@property(assign, nonatomic) float grabberActiveZoneWidth;
@property(assign, nonatomic) BOOL shouldUseGrapeFlags;
- (id)initWithTarget:(id)target action:(SEL)action;
- (id)initWithTarget:(id)target action:(SEL)action type:(int)type;
- (CGPoint)_locationForTouch:(id)touch;
- (BOOL)_shouldUseGrapeFlags;
- (int)_touchInterfaceOrientation;
- (BOOL)isLocationWithinGrabberActiveZone;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;
@end


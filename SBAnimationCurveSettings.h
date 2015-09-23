/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAnimationCurveSettings : XXUnknownSuperclass {
	unsigned _curve;
	CGPoint _controlPoint1;
	CGPoint _controlPoint2;
}
@property(assign, nonatomic) CGPoint controlPoint1;
@property(assign, nonatomic) CGPoint controlPoint2;
@property(assign, nonatomic) unsigned curve;
+ (id)_rowsRelativeToKeyPath:(id)keyPath;
+ (id)settingsControllerModule;
- (void)_invalidate;
- (void)setDefaultValues;
@end


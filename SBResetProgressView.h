/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBResetProgressView : UIView {
	UIColor *_progressColor;
	UIBezierPath *_path;
	float _resetProgress;
}
+ (CGSize)defaultSize;
- (id)_outlinePath;
- (id)_progressColor;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)setResetProgress:(float)progress;
@end

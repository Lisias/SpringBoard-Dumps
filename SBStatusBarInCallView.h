/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBStatusBarInCallView : SBStatusBarContentView {
	double _inCallDuration;
	NSString *_durationPreamble;
	CGSize _durationPreambleSize;
	GSFontRef _font;
	NSTimer *_durationTimer;
}
- (id)init;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)start;
- (void)stop;
@end

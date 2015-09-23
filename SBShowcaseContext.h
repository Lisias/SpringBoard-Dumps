/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBShowcaseContext : XXUnknownSuperclass {
	int _appOrientation;
	int _showcaseOrientation;
	CGAffineTransform _portraitRelativeViewTransform;
	CGAffineTransform _currentReleativeViewTransform;
	BOOL _onSpringBoard;
	BOOL _onApp;
	float _offset;
}
@property(assign, nonatomic) int appOrientation;
@property(assign, nonatomic) CGAffineTransform currentReleativeViewTransform;
@property(assign, nonatomic) float offset;
@property(assign, nonatomic) BOOL onApp;
@property(assign, nonatomic) BOOL onSpringBoard;
@property(assign, nonatomic) CGAffineTransform portraitRelativeViewTransform;
@property(assign, nonatomic) int showcaseOrientation;
@end


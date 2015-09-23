/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAwayInCallController : XXUnknownSuperclass {
	TPLCDView *_lcdView;
	BOOL _shouldShowInCallInfo;
	BOOL _isShowingInCallInfo;
	NSTimer *_durationTimer;
	CTCallRef _displayedCall;
	NSString *_localizedLabel;
	UIImage *_callerImage;
	BOOL _isFullScreen;
}
- (id)initWithLCDView:(id)lcdview;
- (void)_setShowingInCallInfo:(BOOL)callInfo;
- (id)callerImage;
- (BOOL)callerImageIsFullScreen;
- (void)dealloc;
- (void)fetchCallInformation:(id *)information name:(id *)name label:(id *)label image:(id *)image isFullScreen:(BOOL *)screen wantsHighResolution:(BOOL)resolution;
- (BOOL)isShowingInCallInfo;
- (void)reload;
- (void)setShouldShowInCallInfo:(BOOL)showInCallInfo;
- (void)updateDuration;
@end


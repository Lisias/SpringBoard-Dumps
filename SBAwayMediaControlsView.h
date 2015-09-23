/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAwayMediaControlsView : UIView {
	unsigned _seeked : 1;
	UIPushButton *_prevButton;
	UIPushButton *_nextButton;
	UIPushButton *_playPauseButton;
	UIScrubberControl *_slider;
}
- (id)initWithFrame:(CGRect)frame;
- (void)_clearSeekedFlag:(id)flag;
- (void)_controlButtonAction:(id)action;
- (id)_createButtonWithImage:(id)image action:(SEL)action tag:(int)tag;
- (void)_nowPlayingChanged:(id)changed;
- (void)_registerForNowPlayingNotifications;
- (void)_registerForVolumeNotifications;
- (void)_systemVolumeChanged:(id)changed;
- (void)_unregisterForNowPlayingNotifications;
- (void)_unregisterForVolumeNotifications;
- (void)_updateInformation;
- (void)_volumeChange:(id)change;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setAlpha:(float)alpha;
- (void)viewHandleTouchPause:(id)pause isDown:(BOOL)down;
- (double)viewTouchPauseThreshold:(id)threshold;
@end


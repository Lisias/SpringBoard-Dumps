/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAwayMediaControlsView : XXUnknownSuperclass {
	unsigned _beganSeeking : 1;
	int _seekingDirection;
	UIButton *_prevButton;
	UIButton *_nextButton;
	UIButton *_playPauseButton;
	UIButton *_fifteenSecondRewindButton;
	UIButton *_fifteenSecondFFButton;
	MPVolumeView *_volumeView;
	MPVolumeView *_iPhoneRouteButtonVolumeView;
	int _orientation;
}
@property(assign, nonatomic) int orientation;
- (id)initWithFrame:(CGRect)frame;
- (void)_changeTrackButtonDown:(id)down;
- (void)_changeTrackButtonEndSeek:(id)seek;
- (void)_changeTrackButtonTouchPause:(id)pause;
- (void)_changeTrackButtonUp:(id)up;
- (void)_didPresentRoutePicker;
- (id)_fifteenSecondFFButton;
- (void)_fifteenSecondFFButtonAction:(id)action;
- (id)_fifteenSecondRewindButton;
- (void)_fifteenSecondRewindButtonAction:(id)action;
- (id)_newButtonWithImage:(id)image action:(SEL)action tag:(int)tag;
- (void)_nowPlayingChanged:(id)changed;
- (void)_playPauseButtonAction:(id)action;
- (void)_registerForNowPlayingNotifications;
- (void)_unregisterForNowPlayingNotifications;
- (void)_updateInformation;
- (void)_volumeChange:(id)change;
- (void)_volumeViewVisibilityChanged;
- (void)dealloc;
- (void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;
- (BOOL)isMediaControlsShowingOverlays;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (id)routeButtonVolumeView;
- (void)setAlpha:(float)alpha;
@end


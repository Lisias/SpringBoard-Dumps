/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBNowPlayingBarView : XXUnknownSuperclass {
	int _toggleType;
	UIView *_toggleButtonContainer;
	UIButton *_toggleButton;
	UISlider *_brightnessSlider;
	UISlider *_volumeSlider;
	UIImageView *_brightnessImage;
	UIImageView *_volumeImage;
	SBNowPlayingBarMediaControlsView *_mediaView;
	SBIconView *_nowPlayingIconView;
}
@property(readonly, assign, nonatomic) UIButton *airPlayButton;
@property(readonly, assign, nonatomic) UISlider *brightnessSlider;
@property(assign, nonatomic) BOOL marqueeRunning;
@property(readonly, assign, nonatomic) SBNowPlayingBarMediaControlsView *mediaView;
@property(retain, nonatomic) SBIconView *nowPlayingIconView;
@property(readonly, assign, nonatomic) UIButton *toggleButton;
@property(assign, nonatomic) int toggleType;
@property(readonly, assign, nonatomic) UISlider *volumeSlider;
- (id)initWithFrame:(CGRect)frame;
- (void)_layoutForiPad;
- (void)_layoutForiPhone;
- (void)_updateToggleButton;
- (void)dealloc;
- (void)layoutSubviews;
- (void)showAudioRoutesPickerButton:(BOOL)button;
- (void)showVolume:(BOOL)volume;
@end

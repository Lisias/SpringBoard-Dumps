/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"

@class SBNowPlayingBarMediaControlsView, UIButton, UISlider, UIImageView, SBApplicationIcon;

@interface SBNowPlayingBarView : UIView {
	UIView *_orientationLockContainer;
	UIButton *_orientationLockButton;
	UISlider *_brightnessSlider;
	UISlider *_volumeSlider;
	UIImageView *_brightnessImage;
	UIImageView *_volumeImage;
	SBNowPlayingBarMediaControlsView *_mediaView;
	SBApplicationIcon *_nowPlayingIcon;
}
@property(readonly, assign, nonatomic) UIButton *airPlayButton;
@property(readonly, assign, nonatomic) UISlider *brightnessSlider;
@property(readonly, assign, nonatomic) SBNowPlayingBarMediaControlsView *mediaView;
@property(retain, nonatomic) SBApplicationIcon *nowPlayingIcon;
@property(readonly, assign, nonatomic) UIButton *orientationLockButton;
@property(readonly, assign, nonatomic) UISlider *volumeSlider;
- (id)initWithFrame:(CGRect)frame;
- (void)_layoutForiPad;
- (void)_layoutForiPhone;
- (void)_orientationLockChanged:(id)changed;
- (void)dealloc;
- (void)layoutSubviews;
- (void)showAudioRoutesPickerButton:(BOOL)button;
- (void)showVolume:(BOOL)volume;
@end


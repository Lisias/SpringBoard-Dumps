/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSwitcherPopoverWindowControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "SBIconViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBNowPlayingBar : XXUnknownSuperclass <SBIconViewDelegate, UIPopoverControllerDelegate, SBSwitcherPopoverWindowControllerDelegate> {
	SBNowPlayingBarView *_barView;
	SBAirPlayBarView *_airPlayView;
	MPAudioVideoRoutingActionSheet *_airPlayActionSheet;
	UIViewController *_airPlayController;
	SBSwitcherVolumeSlider *_volumeSlider;
	UIButton *_airPlayButton;
	SBApplication *_nowPlayingApp;
	int _scanDirection;
	MPAudioDeviceController *_audioDeviceController;
	MPAudioVideoRoutingPopoverController *_audioRoutingPopoverController;
	BOOL _audioRoutingPopoverVisible;
	BOOL _showPopoverWhenRotationComplete;
}
- (id)init;
- (void)_airPlayButtonHit:(id)hit;
- (void)_brightnessSliderChanged:(id)changed;
- (void)_dismissAirPlayDetail;
- (void)_iapExtendedModeChanged:(id)changed;
- (BOOL)_isAirPlayOn;
- (void)_nowPlayingInfoChanged;
- (void)_playButtonHit:(id)hit;
- (BOOL)_shouldShowAirPlayButton;
- (void)_showAudioRoutingPopover;
- (void)_toggleButtonHit:(id)hit;
- (void)_trackButtonCancel:(id)cancel;
- (void)_trackButtonDown:(id)down;
- (void)_trackButtonDownSeek:(id)seek;
- (void)_trackButtonUp:(id)up;
- (void)_updateAudioRouteDisplay:(BOOL)display;
- (void)_updateDisplay;
- (void)_updateNowPlayingApp;
- (void)_updateNowPlayingButtonImages;
- (void)_updateNowPlayingInfo;
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;
- (void)audioDeviceControllerMediaServerDied:(id)died;
- (void)backlightLevelChanged;
- (void)dealloc;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (void)iconTouchBegan:(id)began;
- (void)popoverControllerDidDismissPopover:(id)popoverController;
- (void)prepareToDisappear;
- (int)scanDirection;
- (BOOL)shouldScrollCancelInContentForView:(id)view;
- (void)switcherPopoverController:(id)controller didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)switcherPopoverController:(id)controller willRotateToOrientation:(int)orientation duration:(double)duration;
- (void)viewAtIndexDidAppear:(int)viewAtIndex;
- (void)viewAtIndexDidDisappear:(int)viewAtIndex;
- (void)viewControllerRequestsDismissal:(id)dismissal;
- (void)viewDidAppear;
- (id)views;
@end


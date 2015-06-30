/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBNowPlayingAlertItem : SBFlippyAlertItem <UIAlertViewDelegate> {
	unsigned _beganSeeking : 1;
	unsigned _deferLayout : 1;
	unsigned _needsLayout : 1;
	MPAudioDeviceController *_audioDeviceController;
}
- (id)init;
- (void)_changeTrackButtonDown:(id)down;
- (void)_changeTrackButtonEndSeek:(id)seek;
- (void)_changeTrackButtonTouchPause:(id)pause;
- (void)_changeTrackButtonUp:(id)up;
- (id)_newButtonWithImage:(id)image action:(SEL)action tag:(int)tag;
- (void)_nowPlayingChanged:(id)changed;
- (void)_playPauseButtonAction:(id)action;
- (void)_registerForMuteNotifications;
- (void)_registerForNowPlayingNotifications;
- (void)_registerForVolumeNotifications;
- (void)_systemMuteStatusChanged:(id)changed;
- (void)_systemVolumeChanged:(id)changed;
- (void)_unregisterForMuteNotifications;
- (void)_unregisterForNowPlayingNotifications;
- (void)_unregisterForVolumeNotifications;
- (void)_updateLabelWithTag:(int)tag text:(id)text faded:(BOOL)faded cursor:(float *)cursor sheet:(id)sheet;
- (void)_volumeChange:(id)change;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (BOOL)allowMenuButtonDismissal;
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;
- (void)audioDeviceControllerMediaServerDied:(id)died;
- (void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;
- (Class)backAlertSheetClass;
- (void)configureFront:(BOOL)front requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didPresentAlertView:(id)view;
- (BOOL)dismissOnAlertActivation;
- (BOOL)dismissOnLock;
- (Class)frontAlertSheetClass;
- (id)newBackAlertSheet;
- (id)newCenteredLabel:(BOOL)label;
- (id)newFrontAlertSheet;
- (void)updateInformation;
- (void)willActivate;
- (void)willDeactivateForReason:(int)reason;
- (void)willPresentAlertView:(id)view;
@end


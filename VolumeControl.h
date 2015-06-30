/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VolumeControl : XXUnknownSuperclass {
	BOOL _debounce;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _mode;
@private
	NSMutableSet *_alwaysHiddenCategories;
@protected
	NSString *_lastDisplayedCategory;
	NSString *_lastEventCategory;
	BOOL _hudHandledLastVolumeChange;
	BOOL _euDevice;
	float _euVolumeLimit;
	BOOL _euVolumeLimitEnforced;
	BOOL _lastVolumeChangedWasBlocked;
	BOOL _volumeDownButtonIsDown;
	BOOL _volumeUpButtonIsDown;
}
+ (id)sharedVolumeControl;
- (id)init;
- (void)_EUVolumeEnforcementChanged:(id)changed;
- (void)_EUVolumeLimitChanged:(id)changed;
- (BOOL)_HUDIsDisplayableForCategory:(id)category;
- (float)_calcButtonRepeatDelay;
- (void)_changeVolumeBy:(float)by;
- (void)_effectiveVolumeChanged:(id)changed;
- (void)_initializeEUVolumeLimits;
- (BOOL)_isCategoryAlwaysHidden:(id)hidden;
- (BOOL)_isMusicPlayingSomewhere;
- (BOOL)_isVolumeHUDVisible;
- (BOOL)_isVolumeHUDVisibleOrFading;
- (void)_presentVolumeHUDWithMode:(int)mode volume:(float)volume;
- (void)_registerForAVSystemControllerNotifications;
- (void)_serverConnectionDied:(id)died;
- (BOOL)_turnOnScreenIfNecessaryForEULimit:(BOOL)eulimit;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_userAcknowledgedEUEnforcement;
- (id)_volumeHUDViewWithMode:(int)mode volume:(float)volume;
- (int)_volumeModeForCategory:(id)category;
- (void)addAlwaysHiddenCategory:(id)category;
- (void)cancelVolumeEvent;
- (void)clearAlwaysHiddenCategories;
- (void)dealloc;
- (void)decreaseVolume;
- (float)getMediaVolume;
- (void)handleVolumeEvent:(IOHIDEventRef)event;
- (BOOL)headphonesPresent;
- (void)hideVolumeHUDIfVisible;
- (void)increaseVolume;
- (id)lastDisplayedCategory;
- (void)removeAlwaysHiddenCategory:(id)category;
- (void)sendEUVolumeLimitAcknowledgementIfNecessary;
- (void)setMediaVolume:(float)volume;
- (void)toggleMute;
- (float)volume;
- (id)volumeHUDForCurrentCategory;
- (float)volumeStepDown;
- (float)volumeStepUp;
@end


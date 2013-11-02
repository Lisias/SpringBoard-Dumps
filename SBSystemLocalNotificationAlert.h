/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSString, SBApplication;
@protocol SBSystemLocalNotificationAlertDelegate;

__attribute__((visibility("hidden")))
@interface SBSystemLocalNotificationAlert : XXUnknownSuperclass {
	id<SBSystemLocalNotificationAlertDelegate> _delegate;
	SBApplication *_app;
	NSString *_body;
	NSString *_actionLabel;
	NSString *_customLockLabel;
	NSString *_alertLaunchImage;
	BOOL _showActionButton;
	BOOL _hideTitle;
	BOOL _allowSnooze;
	NSTimer *_toneAutoMuteTimer;
	unsigned _launchButtonIndex;
	unsigned _snoozeButtonIndex;
	id _context;
}
@property(retain, nonatomic) NSString *alertLaunchImage;
@property(assign, nonatomic) BOOL allowSnooze;
@property(readonly, assign, nonatomic) SBApplication *application;
@property(retain, nonatomic) id context;
@property(retain, nonatomic) NSString *customLockLabel;
@property(assign, nonatomic) id<SBSystemLocalNotificationAlertDelegate> delegate;
@property(assign, nonatomic) BOOL hideTitle;
+ (id)alertMatchingContext:(id)context;
+ (BOOL)isPlayingTone;
+ (id)localizedStringFromKey:(id)key defaultValue:(id)value inBundle:(id)bundle arguments:(id)arguments;
+ (id)pathForSoundName:(id)soundName inApp:(id)app;
+ (void)playSoundWithName:(id)name type:(int)type inApp:(id)app forAlert:(BOOL)alert;
+ (id)presentWithLocalNotification:(id)localNotification application:(id)application;
+ (void)stopPlayingAlertSoundOrTone;
- (id)initWithApplication:(id)application body:(id)body showActionButton:(BOOL)button actionLabel:(id)label;
- (void)_toneAutoMuteTimerFired;
- (id)alertItemNotificationSender;
- (int)alertItemNotificationType;
- (int)alertPriority;
- (Class)alertSheetClass;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)dismiss:(int)dismiss;
- (BOOL)isCriticalAlert;
- (id)lockLabel;
- (float)lockLabelFontSize;
- (void)performUnlockAction;
- (BOOL)shouldShowInEmergencyCall;
- (void)snoozeIfPossible;
- (void)snoozeOrDismiss;
- (void)startToneAutoMuteTimer;
- (void)stopToneAutoMuteTimer;
- (void)willDeactivateForReason:(int)reason;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBaseSoftwareUpdateAlertItem : XXUnknownSuperclass {
	SUDescriptor *_descriptor;
	SBSoftwareUpdateController *_controller;
}
@property(readonly, retain, nonatomic) SUDescriptor *descriptor;
@property(readonly, retain, nonatomic) SBSoftwareUpdateController *softwareUpdateController;
- (id)initWithDescriptor:(id)descriptor softwareUpdateController:(id)controller;
- (void)activateDisplayWithURL:(id)url;
- (void)activateSoftwareUpdateSettingsDisplay;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (BOOL)undimsScreen;
- (BOOL)unlocksScreen;
- (id)updateName;
- (void)willDeactivateForReason:(int)reason;
@end


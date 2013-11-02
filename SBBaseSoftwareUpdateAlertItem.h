/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SUDescriptor;

__attribute__((visibility("hidden")))
@interface SBBaseSoftwareUpdateAlertItem : XXUnknownSuperclass {
	SUDescriptor *_descriptor;
}
@property(readonly, assign, nonatomic) SUDescriptor *descriptor;
- (id)initWithDescriptor:(id)descriptor;
- (void)activateDisplayWithURL:(id)url;
- (void)activateSoftwareUpdateSettingsDisplay;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (id)updateName;
@end


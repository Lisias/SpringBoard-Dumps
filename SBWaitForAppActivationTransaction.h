/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWaitForAppActivationTransaction : XXUnknownSuperclass {
	SBApplication *_application;
	BOOL _manualListener;
	BOOL _done;
}
- (id)initWithApplication:(id)application;
- (id)initWithApplication:(id)application manualListener:(BOOL)listener;
- (void)_activationStateChanged:(id)changed;
- (BOOL)_appStateChanged:(int)changed;
- (void)_begin;
- (void)_didComplete;
- (void)dealloc;
- (void)noteActivationStateChanged:(int)changed;
@end


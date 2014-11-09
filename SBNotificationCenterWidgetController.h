/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "_NCWidgetController_Host_IPC.h"
#import "NSXPCListenerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSXPCListener, NSString;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterWidgetController : XXUnknownSuperclass <_NCWidgetController_Host_IPC, NSXPCListenerDelegate> {
	NSXPCListener *_listener;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)containingBundleIdentifierForWidgetWithBundleIdentifer:(id)bundleIdentifer;
+ (id)defaultWidgetController;
- (id)init;
- (void)__setHasContent:(BOOL)content forWidgetWithBundleIdentifier:(id)bundleIdentifier;
- (void)dealloc;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end


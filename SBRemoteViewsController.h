/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>


@interface SBRemoteViewsController : NSObject {
	NSMutableDictionary *_registeredRemoteViewInfos;
	NSMutableDictionary *_unregisteredRemoteViewInfos;
}
+ (id)sharedInstance;
- (id)init;
- (id)_createProxyRemoteViewForIdentifier:(id)identifier;
- (void)_sequesterProxyRemoteView:(id)view;
- (void)dealloc;
- (id)proxyRemoteViewForIdentifier:(id)identifier;
- (void)registerRemoteContextID:(unsigned)anId forIdentifier:(id)identifier opaque:(BOOL)opaque size:(CGSize)size application:(id)application;
- (void)unregisterProxyRemoteView:(id)view;
- (void)unregisterRemoteIdentifier:(id)identifier application:(id)application;
- (void)unregisterRemoteViewsForApplication:(id)application;
@end


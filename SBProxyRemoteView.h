/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBApplication;

__attribute__((visibility("hidden")))
@interface SBProxyRemoteView : XXUnknownSuperclass {
	id _delegate;
	SBApplication *_app;
	NSString *_remoteViewIdentifier;
	BOOL _remoteViewOpaque;
}
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) NSString *remoteViewIdentifier;
@property(assign, nonatomic) BOOL remoteViewOpaque;
+ (Class)layerClass;
- (id)init;
- (void)_setIsConnected:(BOOL)connected;
- (void)connectToContextID:(unsigned)contextID forIdentifier:(id)identifier application:(id)application;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)disconnect;
- (void)noteConnectionLost;
@end


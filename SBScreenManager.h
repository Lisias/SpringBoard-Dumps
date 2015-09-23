/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBScreenManager : XXUnknownSuperclass {
	NSHashTable *_handlers;
	NSMapTable *_screenIDToHandlerMap;
	NSMapTable *_screenIDToLastDisplayMap;
}
+ (id)sharedInstance;
- (id)init;
- (void)_screenDidConnect:(id)_screen;
- (void)_screenDidDisconnect:(id)_screen;
- (void)_updateHandlerForConnectionToScreen:(id)screen;
- (void)addConnectionHandler:(id)handler;
- (void)dealloc;
- (id)lastDisplayForScreen:(id)screen;
- (id)lastDisplayForScreenWithID:(unsigned)anId;
@end


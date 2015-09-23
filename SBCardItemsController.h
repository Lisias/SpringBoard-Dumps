/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBCardItemsController : XXUnknownSuperclass <SBCardItemsControllerRemoteInterface, XPCProxyTarget> {
	NSMutableArray *_remoteControllers;
	NSMutableDictionary *_cardItems;
}
- (id)init;
- (void)_activateAllCardItems;
- (void)_addControllerWithConnection:(id)connection;
- (void)addCardItems:(id)items forControllerWithIdentifier:(id)identifier;
- (void)cardItemsDidChange:(id)cardItems forControllerWithIdentifier:(id)identifier;
- (void)clearCardItemsForControllerWithIdentifier:(id)identifier;
- (void)dealloc;
- (void)getCardItemsForControllerWithIdentifier:(id)identifier withHandler:(id)handler;
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
- (void)removeCardItems:(id)items forControllerWithIdentifier:(id)identifier;
- (void)setCardItems:(id)items forControllerWithIdentifier:(id)identifier;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBContext : XXUnknownSuperclass {
	unsigned _contextId;
	float _windowLevel;
	BOOL _hidden;
	BOOL _orderOutPending;
	CALayerHost *_layerHost;
}
@property(assign, nonatomic) unsigned contextId;
@property(assign, nonatomic, getter=isHidden) BOOL hidden;
@property(retain, nonatomic) CALayerHost *layerHost;
@property(assign, nonatomic, getter=isOrderOutPending) BOOL orderOutPending;
@property(assign, nonatomic) float windowLevel;
- (void)dealloc;
- (id)description;
@end


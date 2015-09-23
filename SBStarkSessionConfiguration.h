/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkSessionConfiguration : XXUnknownSuperclass <SBStarkSessionConfiguring> {
	AVExternalDevice *_device;
	unsigned _interactionAffordances;
	int _layoutJustification;
	UIScreen *_screen;
	UITraitCollection *_traitCollection;
	BOOL _geoSupported;
	NSSet *_protocols;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) AVExternalDevice *device;
@property(assign, nonatomic, getter=isGeoSupported) BOOL geoSupported;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) unsigned interactionAffordances;
@property(readonly, assign, nonatomic) int layoutJustification;
@property(readonly, retain, nonatomic) UIScreen *screen;
@property(copy, nonatomic) NSSet *sessionProtocols;
@property(readonly, assign) Class superclass;
@property(readonly, copy, nonatomic) UITraitCollection *traitCollection;
- (id)initWithDevice:(id)device screen:(id)screen;
- (void)dealloc;
@end


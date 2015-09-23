/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAppActivationOrientationLayoutContext : XXUnknownSuperclass <SBMainDisplayLayoutContext> {
	SBApplication *_app;
	id<SBMainDisplayLayoutContext> _layoutContext;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign, nonatomic) int externallyManagedSideAppPresentationStyle;
@property(readonly, assign, nonatomic) int externallyManagedSideAppWidth;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int interfaceOrientation;
@property(readonly, assign, nonatomic) int sideAppPresentationStyle;
@property(readonly, assign, nonatomic) int sideAppWidth;
@property(readonly, assign) Class superclass;
- (id)initWithApplication:(id)application layoutContext:(id)context;
- (void)dealloc;
- (BOOL)includesStatusBarForLayoutRole:(int)layoutRole;
- (BOOL)layoutContainsRole:(int)role;
- (int)wallpaperMode;
- (int)wallpaperModeForLayoutRole:(int)layoutRole;
@end


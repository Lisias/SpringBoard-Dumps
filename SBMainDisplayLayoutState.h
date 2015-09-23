/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBMainDisplayLayoutState : SBLayoutState <SBMainDisplayLayoutContext> {
	SBMainDisplaySceneManager *_sceneManager;
	SBLockStateAggregator *_lockStateAggregator;
	SpringBoard *_sbApp;
	SBSideAppState *_sideAppState;
	SBSideAppState *_externallyManagedSideAppState;
	SBBreadcrumbState *_breadcrumbState;
}
@property(readonly, retain, nonatomic) SBBreadcrumbState *breadcrumbState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign, nonatomic) int externallyManagedSideAppPresentationStyle;
@property(readonly, retain, nonatomic) SBSideAppState *externallyManagedSideAppState;
@property(readonly, assign, nonatomic) int externallyManagedSideAppWidth;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int interfaceOrientation;
@property(readonly, assign, nonatomic) int sideAppPresentationStyle;
@property(readonly, retain, nonatomic) SBSideAppState *sideAppState;
@property(readonly, assign, nonatomic) int sideAppWidth;
@property(readonly, assign) Class superclass;
+ (int)_defaultOrientation;
- (id)_initWithElements:(id)elements;
- (id)_initWithElements:(id)elements andBreadcrumbState:(id)state andSideAppState:(id)state3 andExternallyManagedSideAppState:(id)state4 interfaceOrientation:(int)orientation;
- (id)_initWithElements:(id)elements andBreadcrumbState:(id)state andSideAppState:(id)state3 andExternallyManagedSideAppState:(id)state4 interfaceOrientation:(int)orientation sceneManager:(id)manager applicationController:(id)controller lockStateAggregator:(id)aggregator sbApp:(id)app;
- (id)_layoutStateForTransitionContext:(id)transitionContext;
- (id)_stateWithElements:(id)elements andBreadcrumbState:(id)state andSideAppState:(id)state3 andExternallyManagedSideAppState:(id)state4 interfaceOrientation:(int)orientation;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)multilinePrefix;
- (BOOL)includesStatusBarForLayoutRole:(int)layoutRole;
- (BOOL)isEqualToLayoutState:(id)layoutState;
- (id)transitionContextForResizingSideAppToWidth:(int)width;
- (id)transitionContextForSettingSideAppPinned:(BOOL)settingSideAppPinned;
- (id)transitionContextForSuspendingPrimaryApp;
- (id)transitionContextForSuspendingSideApp;
- (int)wallpaperMode;
- (int)wallpaperModeForLayoutRole:(int)layoutRole;
@end


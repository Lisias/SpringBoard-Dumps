/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSceneManager : XXUnknownSuperclass <SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneManagerDelegate> {
	FBSceneManager *_sceneManager;
	UIScreen *_screen;
	FBSDisplay *_display;
	SBSceneLayoutWindow *_window;
	SBSceneLayoutViewController *_layoutController;
	id<SBSceneManagerDelegate> _delegate;
	BSCopyingCacheSet *_allScenes;
	BSCopyingCacheSet *_daemonScenes;
	BSCopyingCacheSet *_pluginScenes;
	BSCopyingCacheSet *_applicationScenes;
	BSCopyingCacheSet *_foregroundApplicationScenes;
	BSCopyingCacheSet *_reportedForegroundApplicationScenes;
	BSCopyingCacheSet *_externalApplicationScenes;
	BSCopyingCacheSet *_externalForegroundApplicationScenes;
	BSCopyingCacheSet *_reportedExternalForegroundApplicationScenes;
	NSCountedSet *_assertedBackgroundScenes;
	NSMutableSet *_externalForegroundApplicationHostReasons;
	NSMutableSet *_outgoingSnapshots;
	NSMutableSet *_incomingSnapshots;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBSceneManagerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) FBSDisplay *display;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBSceneLayoutViewController *layoutController;
@property(readonly, assign) Class superclass;
@property(readonly, retain, nonatomic) SBSceneLayoutWindow *window;
- (id)init;
- (id)initWithDisplay:(id)display;
- (BOOL)_handleAction:(id)action forScene:(id)scene;
- (int)_hostingPolicyForScene:(id)scene;
- (void)_invalidate;
- (BOOL)_isStarkActivelyConnected;
- (id)_newLayoutControllerForDisplay:(id)display;
- (void)_scene:(id)scene didUpdateClientSettingsWithDiff:(id)diff oldClientSettings:(id)settings transitionContext:(id)context;
- (id)_sceneWindowLayoutStrategy;
- (void)_screenDidDisconnect:(id)_screen;
- (BOOL)_shouldFenceTransitionForScene:(id)scene updatedClientSettingsDiff:(id)diff oldClientSettings:(id)settings transitionContext:(id)context;
- (id)_snapshotRequestsForApplication:(id)application scene:(id)scene settings:(id)settings;
- (void)_updateStateForScene:(id)scene withSettings:(id)settings;
- (id)additionalActionsForApplication:(id)application withTransitionContext:(id)transitionContext;
- (id)allScenes;
- (id)applicationScenes;
- (id)assertBackgroundedStatusForScenes:(id)scenes;
- (id)daemonScenes;
- (void)dealloc;
- (void)destroyAllScenes;
- (id)externalApplicationScenes;
- (id)externalForegroundApplicationScenes;
- (id)foregroundApplicationScenes;
- (BOOL)isHostingExternalForegroundApplicationScenes;
- (id)pluginScenes;
- (void)sceneLayoutController:(id)controller noteHasVisibleElements:(BOOL)elements;
- (id)sceneManager:(id)manager createDefaultTransitionContextForScene:(id)scene;
- (void)sceneManager:(id)manager didCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager didCreateScene:(id)scene withClient:(id)client;
- (void)sceneManager:(id)manager didDestroyScene:(id)scene;
- (int)sceneManager:(id)manager hostingPolicyForScene:(id)scene;
- (void)sceneManager:(id)manager scene:(id)scene didReceiveActions:(id)actions;
- (void)sceneManager:(id)manager scene:(id)scene didUpdateClientSettingsWithDiff:(id)diff oldClientSettings:(id)settings transitionContext:(id)context;
- (void)sceneManager:(id)manager willCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager willDestroyScene:(id)scene;
- (void)sceneManager:(id)manager willUpdateScene:(id)scene withSettings:(id)settings transitionContext:(id)context;
- (void)setShouldHostExternalForegroundApplicationScenes:(BOOL)hostExternalForegroundApplicationScenes forReason:(id)reason;
@end

